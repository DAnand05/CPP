class dynamicArray{

    int* data;
    int nextIndex;
    int capacity;

public:

    dynamicArray(){
        capacity=5;
        nextIndex=0;
        data=new int[capacity];
    }

    //copy constructor to perform deep copy instead of shallow
    dynamicArray(dynamicArray const &d){
        //this->data=d.data;                //shallow copy
        this->data=new int[d.capacity];     //deep copy
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;
    }

    void add(int element){
        if(nextIndex==capacity){
            int* tempData=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                tempData[i]=data[i];
            }
            delete[] data;
            data=tempData;
            capacity=capacity*2;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    int getElement(int i)const{
        if(i<nextIndex){
            return data[i];
        }else{
            return -1;
        }
    }

    void addElement(int i,int element){
        if(i<nextIndex){
            data[i]=element;
        }else if(i==nextIndex){
            add(element);
        }else{
            return;
        }
    }

    void print()const{
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    //overloading copy operator (=) to perform deep copy instead of shallow one
    void operator=(dynamicArray const &d){
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;
    }
};
