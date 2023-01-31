#include<iostream>
using namespace std;

class a{
    public:
        void check(){
            cout<<"i am function a."<<endl;
        }
};

class b{
    public:
        void check(){
            cout<<"i am function b."<<endl;
        }
};

class c : public a,public b{
    public:
        void check2(){
            cout<<"this is c inherited from a and b."<<endl;
        }       
};

int main(){
    c student;
    // student.check(); -->it will show error 

    student.a::check();  //-->will call the check function of the class a

    student.b::check();  //-->will call the check function of the class b 
return 0;
}