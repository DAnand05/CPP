class student{

        int age;
    public:

        char *name;
        int const roll;
        int &x;             //just for example purpose, it's a reference to age

        static int totalStudents;       //creating static members

public:     //declaring the following variables as public, because we have to access them outside of this class

            //Private access modifier on the other hand makes it impossible for properties to be accessed outside of the class, also all properties are private by default

            //Parameterized constructor
            student(int age, char*name,int roll):roll(roll),x(this->age){    //that's how we insert value in constant or reference properties
                this->age=age;

                /*
                //Shallow copy
                this->name=name;                            //it's just an example of shallow copy, it means not the value but the address or location of the property will get copied.
                */

                //Deep copy
                this->name=new char[strlen(name)+1];        //if we just do "this->name=name", since the name that's been passed from the object is pointing towards the
                strcpy(this->name,name);                    //location of char array's first index, if we change the values even once, name property of all the object's will get changed
                                                            //also now we're creating a new copy of the value stored in name, also known as Deep copy.

                totalStudents++;
            }

            //copy constructor
            student(student const &s):roll(roll),x(this->age){
                //if we write student s instead of student const &s, then we will be creating another copy of the object(from which we're copying the properties)
                //also if we use student s, we'll be calling copy constructor implicitly, and it'll create an infinite loop as we've already created an copy constructor explicitly
                //in the process of creating copy constructor, we disabled the inbuilt copy constructor(if we create a constructor explicitly, the inbuilt one becomes decativated)
                //by using &s we're restricting the creation of another object & also restricting the use of copy constructor.

                /*
                //this is the syntax of the inbuilt copy constructor, which uses shallow copy
                this->age=s.age;
                this->name=s.name;      //shallow copy

                */

                this->age=s.age;
                //deep copy
                this->name=new char[strlen(s.name)+1];      //+1 for null character
                strcpy(this->name,s.name);

                totalStudents++;                            //incrementing totalStudents, so that everytime a new object gets created, our static property gets updated;
            }

            static int getTotalStudents(){                  //We can access static properties only via static functions( only in case, if static property is set to private)
                return totalStudents;
            }

            void display(){
                cout<<"name : "<<name<<endl;
                cout<<"age  : "<<age<<endl;
            }
};

    int student::totalStudents=0;              //initializing static members
