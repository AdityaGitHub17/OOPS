#include<iostream>
using namespace std;

class student{
    private:
        int data;
        int usn;
    public:
        string name;
        string colname;

        void set(int a,int b){
            data = a;
            usn = b;
        }

        void display(){
            cout<<data<<endl;
            cout<<usn<<endl;
        }

        //defualt constructor type
        student(){ 
            cout<<"constructor called"<<endl;
        }
        
        //parameterised contructor
        student(int data){         //using "this" keyword which stores the address of the current object 
            this->data = data;     //basically "this" is a pointer pointes to the address of the current object         
            cout<<"address of this "<<this<<endl;
        }

        student(int data, int usn){    //with two different parameter
            this->data = data; 
            this->usn = usn;
        }

        //copy constructor
        student(student &temp){     //we have pass by reference for making the copy constructor
            this->data = temp.data;
            this->usn = temp.usn;
        }
        


};

int main(){

    //student aditya;  //after creation custructor will call it self (default constructor)
    
    student aditya(10);   //parameterised  constructor
    cout<<"address of current object "<<&aditya<<endl; 
    //hence address of the current object 'aditya' is same as 'this'

    student verma(10,11);   //with two parameter
    verma.display();

    student adi(100,200);   //default copy constructor
    adi.display();
    student hitesh(adi);    //by this default copy constructor calls...but we can make the our own default copy constructor
    hitesh.display();


    //copy constructor
    student s(11,12);
    student r(s);
    s.display();
    r.display();


    //copy assignment operator
    student a(20,30);
    student b(40,50);
    a.display();
    b.display();
    a=b;            //basically values of object b will be copied in the value of a  
    a.display();
    b.display();
return 0;
}