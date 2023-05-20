#include <FL/Fl.h>
#include <FL/Fl_Window.h>
#include <FL/Fl_Box.h>
#include <FL/Fl_Button.h>

class Calculator : public Fl_Window
{
public:
  Calculator(int x, int y, int w, int h) : Fl_Window(x, y, w, h)
  {
    display = new Fl_Box(0, 0, w, 20);
    display->align(FL_ALIGN_RIGHT);

    for (int i = 0; i < 10; i++)
    {
      buttons[i] = new Fl_Button(i * 20, 20, 20, 20, QString::number(i));
    }

    plusButton = new Fl_Button(80, 20, 20, 20, "+");
    minusButton = new Fl_Button(100, 20, 20, 20, "-");
    multiplyButton = new Fl_Button(120, 20, 20, 20, "*");
    divideButton = new Fl_Button(140, 20, 20, 20, "/");
    equalButton = new Fl_Button(160, 20, 20, 20, "=");

    for (int i = 0; i < 10; i++)
    {
      connect(buttons[i], &Fl_Button::clicked, this, &Calculator::digitPressed);
    }

    connect(plusButton, &Fl_Button::clicked, this, &Calculator::operationPressed);
    connect(minusButton, &Fl_Button::clicked, this, &Calculator::operationPressed);
    connect(multiplyButton, &Fl_Button::clicked, this, &Calculator::operationPressed);
    connect(divideButton, &Fl_Button::clicked, this, &Calculator::operationPressed);
    connect(equalButton, &Fl_Button::clicked, this, &Calculator::equalButtonPressed);
  }

private:
  Fl_Box *display;
  Fl_Button *buttons[10];
  Fl_Button *plusButton, *minusButton, *multiplyButton, *divideButton, *equalButton;

private slots:
  void digitPressed(int digit)
  {
    QString text = display->label();
    text += QString::number(digit);
    display->label(text);
  }

  void operationPressed(Fl_Button *button)
  {
    QString text = display->label();
    double value = text.toDouble();

    switch (button->label())
    {
      case "+":
        value += lastValue;
        break;
      case "-":
        value -= lastValue;
        break;
      case "*":
        value *= lastValue;
        break;
      case "/":
        value /= lastValue;
        break;
    }

    lastValue = value;
    display->label(QString::number(value));
  }

  void equalButtonPressed()
  {
    QString text = display->label();
    double value = text.toDouble();

    lastValue = value;
    display->label(QString::number(value));
  }

private:
  double lastValue;
};

int main(int argc, char *argv[])
{
  Calculator w(100, 100, 300, 200);
  w.show();
  Fl::run();

  return 0;
}
