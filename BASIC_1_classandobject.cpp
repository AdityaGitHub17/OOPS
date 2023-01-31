#include<iostream> // there are two types of fucntion used in the class , mainly setter and getter funciton
using namespace std;

class student{

    private :    //private variables which only can be access in the defined class
        int a,b,c;
    public :  //these are public variables which can be access anywhere in the code
        int d,e;
    void setdata(int a1,int b1,int c1);  // we have declare the function here but will define the afterwards.
    void getdata(){          // but we can define the function in the class also 

        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;

    }

};    //semicolon is important to define the class

void student :: setdata(int a1,int b1,int c1){   //this '::' is the syntax of defining function which has already declare
    a = a1;                                   //in the class and '::' is called scope resolution operator.
    b = b1;
    c = c1;

}

int main(){
student aditya; // 'student' is the name of the defined class and 'aditya' is a object belongs to the class

// aditya.a = 23;  //it will give the error since a variable is the private variable we can not access private variable
                //like this,it canj only be access by the function
// aditya.b = 12;   //similarly b is also a private so we cannot access b variable.
// aditya.c = 26;   //similarly with this private variable that is c.
aditya.setdata(1,2,3);  // we have to use setter function in order to access the private variables
aditya.d = 13;   //but in this way we can define the public variable.
aditya.e = 14;
aditya.getdata();  //here we are calling a funciton simply which print the values.
return 0;
}

