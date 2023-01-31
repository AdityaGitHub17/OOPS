#include<iostream>
using namespace std;

class student{
    private:
        int data;
        int usn;
    public:
        void set(int a,int b){
            data  = a;
            usn = b;
        }

        void display(){
            cout<<this->data<<endl;
            cout<<this->usn<<endl;
        }

        ~student(){         //simple destructor;
            cout<<"simple destructor called"<<endl;
        }
};

int main(){

//static creation
student aditya;       //for static we don't have to call the destructor manually

//dynamic creation
student *adi = new student;    //but for heap we have to call the destructor manually
delete adi;      //command to call the destructor manually

return 0;
}