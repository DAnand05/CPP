class fraction{

private:
    int numerator;
    int denominator;

public:

    //Default constructor for the example of constant functions
    fraction(){
    }
    //const fraction
    int getNumerator() const{
        return numerator;
    }

    int getDenominator()const{
        return denominator;
    }
    //constructor to restrict garbage values
    fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }

    //function to print the fraction
    void print() const{

        cout<<numerator<<"/"<<denominator<<endl;

    }

    //function to simplify the updated fraction
    void simplify(){
        int gcd=1;
        int j=min(numerator, denominator);
        for(int i=1;i<=j;i++){
            if(numerator%i==0 && denominator%i==0){
                gcd=i;
            }
        }
        numerator/=gcd;
        denominator/=gcd;
    }

    //function to add fractions
    void add(fraction const &f2){                   //object passed through reference to restrict copying & creation of new object
                                                    //used "const" here, to restrict illegal changes
        //to find lcm
        int lcm= denominator * f2.denominator;

        //calculation for numerators
        int x=lcm/denominator;
        int y=lcm/f2.denominator;

        int num=numerator*x+(f2.numerator*y);

        //updating values
        numerator=num;
        denominator=lcm;

        //function call for simplification of fraction
        simplify();

    }

    //function to multiply fractions
    void multiply(fraction const &f2){
        numerator*=f2.numerator;
        denominator*=f2.denominator;

        simplify();
    }

    //Operator overloading
    //It means to extend the functionality of an pre-existing operator, so that, we can use them in the user defined classes

    fraction operator+(fraction const &f)const{              //if we want to have a function to do this, for eg. if we want fraction f3=f1.add(f2);
        int lcm=denominator*f.denominator;              //we can still use this code with minor changes, like fraction add(fraction const &f);
        int x=lcm/denominator;
        int y=lcm/f.denominator;                        //dame for every other function

        int num=numerator*x+(f.numerator*y);

        fraction fNew(num,lcm);

        fNew.simplify();

        return fNew;
    }

    fraction operator*(fraction const &f)const{         //we can set these functions to be constant because, these functions aren't changing anything in the object itself
        int num=numerator*f.numerator;                  //we are returning the result to a new object, which is allowed.
        int den=denominator*f.denominator;              //so in short, const functions can change value of other objects or variables but not the value of object, it was called through.

        fraction fNew(num,den);

        fNew.simplify();
        return fNew;
    }

    bool operator==(fraction const &f)const{
        return (numerator==f.numerator && denominator==f.denominator);
    }
/*
    void operator++(){
        int x=denominator+numerator;

        numerator=x;
        simplify();
    }
    */

    //prefix
    fraction& operator++(){                 //when we call use ++f1, the result get's stored in a temporary buffer and if the call would have been "fraction f2=++(++f1);",the value in the temporary buffer
        numerator=numerator+denominator;    //remains the same, so if f1 was initialized with 1, current value of f1 is 2 & the value in temporary buffer is also 2, but there's another"++" yet to be called,
        simplify();                         // which will get called on the temporary buffer, so the value of f2 becomes 3,whereas value in f1 remains 2, so to avoid this we keep the return type as reference,so instead of copying data, reference get's sent over
        return *this;                       //also "*this" means, we are returning whole block instead of location(this).
    }

    fraction& operator--(){
        numerator-=denominator;
        simplify();
        return *this;
    }

    //postfix
    fraction operator++(int){             //nesting isn't allowed in post-increment operators
        fraction fNew(numerator,denominator);
        numerator+=denominator;
        fNew.simplify();
        simplify();
        return fNew;
    }

    fraction& operator+=(fraction const &f){
        int lcm=denominator*f.denominator;

        int x=lcm/denominator;
        int y=lcm/f.denominator;

        int num=numerator*x+(f.numerator*y);

        numerator=num;
        denominator=lcm;

        simplify();

        return *this;
    }
};
