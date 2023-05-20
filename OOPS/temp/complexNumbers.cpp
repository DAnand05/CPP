class complexNumbers{

private:
    int real;
    int imaginary;

public:

    //parametrized constructor
    complexNumbers(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void print(){

        cout<<real<<" + i"<<imaginary<<endl;

    }

    void plus(complexNumbers const &c2){

        real+=c2.real;
        imaginary+=c2.imaginary;

    }

    void multiply(complexNumbers const &c2){

        //calculating real numbers
        int x=(real*c2.real)-(imaginary*c2.imaginary);


        //calculating imaginary numbers
        int y=(real*c2.imaginary)+(imaginary*c2.real);


        //updating values
        real=x;
        imaginary=y;

    }
};
