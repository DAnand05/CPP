class polynomial{
    int size;

public:
    int* degCoeff;

    //default constructor
    polynomial(){
        degCoeff=new int[10]();
        size=10;
    }

    //copy constructor
    polynomial(polynomial const &p){

        degCoeff=new int[p.size]();
        //use this if error occurs
        /*for(int i=0;i<p.size;i++){
            temp[i]=0;
        }*/
        for(int i=0;i<p.size;i++){
            this->degCoeff[i]=p.degCoeff[i];
        }
        this->size=p.size;

    }

    //copy assignment operator
    void operator=(polynomial const &p){

        delete[] degCoeff;                  //de-Allocating memory
        degCoeff=new int[p.size]();
        //use this if error occurs
        /*for(int i=0;i<p.size;i++){
            temp[i]=0;
        }*/
        for(int i=0;i<p.size;i++){
            this->degCoeff[i]=p.degCoeff[i];
        }
        this->size=p.size;

    }

    /*
    void setCoefficient(int degree, int coefficient){
        if(degree>=size){
            while(degree>=size){
                int *temp=new int[size*2]();
                //for populating the array with 0, if above method gives error
                //for(int i=0;i<size;i++){
                //    temp[i]=0;
                //}

                for(int i=0;i<size;i++){
                    temp[i]=degCoeff[i];
                }
                delete[] degCoeff;
                degCoeff=temp;
                size=size*2;
            }
            degCoeff[degree]=degCoeff[degree]+coefficient;
        }else{
            degCoeff[degree]=degCoeff[degree]+coefficient;
        }
    }

    polynomial operator+(polynomial const &p){
        int maxSize=max(size,p.size);
        polynomial pNew;
        for(int i=0;i<maxSize;i++){
            int temp=this->degCoeff[i]+p.degCoeff[i];
            pNew.setCoefficient(i,temp);
        }
        return pNew;
    }

    polynomial operator-(polynomial const &p){
        int maxSize=max(size,p.size);
        polynomial pNew;
        for(int i=0;i<maxSize;i++){
            int temp=this->degCoeff[i]-p.degCoeff[i];
            pNew.setCoefficient(i,temp);
        }
        return pNew;
    }

    polynomial operator*(polynomial const &p){
        //int maxSize=size+p.size;
        polynomial pNew;
        for(int i=0;i<size;i++){
            for(int j=0;j<p.size;j++){
                int temp=this->degCoeff[i]*p.degCoeff[j];
                pNew.setCoefficient(i+j,temp);
            }
        }
        return pNew;
    }
*/
    //changes below line 44
    void setCoefficient(int degree, int coefficient){
        if(degree<size){
            degCoeff[degree]+=coefficient;
            return;
        }else{
                int *temp=new int[size*2]();
                /*  //for populating the array with 0, if above method gives error
                for(int i=0;i<size;i++){
                    temp[i]=0;
                }
                */
                for(int i=0;i<size;i++){
                    temp[i]=degCoeff[i];
                }
                delete[] degCoeff;
                degCoeff=temp;
                size=size*2;
                this->setCoefficient(degree,coefficient);
                return;
        }
    }

    polynomial operator+(polynomial const &p){
        int minSize=min(size,p.size);
        polynomial pNew;
        for(int i=0;i<minSize;i++){
                int val=this->degCoeff[i]+p.degCoeff[i];
                pNew.setCoefficient(i,val);
        }
        if(size<=p.size){
            for(int i=size;i<p.size;i++){
                int val=p.degCoeff[i];
                pNew.setCoefficient(i,val);
            }
        }else if(p.size<=size){
            for(int i=p.size;i<size;i++){
                int val=this->degCoeff[i];
                pNew.setCoefficient(i,val);
            }
        }

        return pNew;
    }

    polynomial operator-(polynomial const &p){
        int minSize=min(size,p.size);
        polynomial pNew;
        for(int i=0;i<minSize;i++){
            int val=this->degCoeff[i]-p.degCoeff[i];
            pNew.setCoefficient(i,val);
        }
        if(this->size<=p.size){
            for(int i=size;i<p.size;i++){
                int val=-p.degCoeff[i];
                pNew.setCoefficient(i,val);
            }
        }else if(p.size<=size){
            for(int i=p.size;i<size;i++){
                int val=this->degCoeff[i];
                pNew.setCoefficient(i,val);
            }
        }
        return pNew;
    }

    polynomial operator*(polynomial const &p){
        //int maxSize=size+p.size;
        polynomial pNew;
        for(int i=0;i<size;i++){
                if(degCoeff[i]==0){
                    continue;
                }
            for(int j=0;j<p.size;j++){
                int newDeg=i+j;
                int temp=this->degCoeff[i]*p.degCoeff[j];
                pNew.setCoefficient(newDeg,temp);
            }
        }
        return pNew;
    }

    void print(){
        for(int i=0;i<size;i++){
            if(degCoeff[i]==0){
                continue;
            }else{
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
};
