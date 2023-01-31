/*in the case of multiple inheritance ...if the function of the same name is present in more than one parent class and then we have created the child class and called
that function ,from which parent the funciton call itself ?---->to solve this problem we uses the scope resolution operator(::)*/
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
