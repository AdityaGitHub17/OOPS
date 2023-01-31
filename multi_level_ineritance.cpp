//basically multi-level inheritance is, in which different level of inheritance is there
// A-->B-->C-->D  = here B is inherited from A and C from B and D from C and so on

#include<iostream>
using namespace std;

class college{
    public: 
        int usn;
        string college;

    public:
        void check1(){
            cout<<"Jai Hind!"<<endl;
        }    
};

class branch : public college{
    public:
        string branch;
        char section;

    public:
        void cheak2(){
            cout<<"jai hind!!"<<endl;
        }    
};

class student : public branch{
    public:
        int age;
        int weight;
        int height;

    public:
        void check3(){
            cout<<"jai hind!!!"<<endl;
        }

        void display(){
            cout<<this->age<<endl;
            cout<<this->college<<endl;
            cout<<this->branch<<endl;
            cout<<this->section<<endl;
            cout<<this->age<<endl;
            cout<<this->weight<<endl;
            cout<<this->height<<endl;

        }    
};

int main(){


    student aditya;
    aditya.usn = 13;   //see we can able to access the datamember of the grandparent class college 
    aditya.college = "bmsit";
    aditya.branch = "ise";   //here we are accessing the datamember of the parent class branch also 
    aditya.section = 'a';
    aditya.age = 20;
    aditya.weight = 65;
    aditya.height = 170;

    aditya.display();
    aditya.check1(); 
    aditya.cheak2();
    aditya.check3();


return 0;
}