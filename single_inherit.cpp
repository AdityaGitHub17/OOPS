#include<iostream>
using namespace std;

class college{           // a parent class
    public:
        int usn;
        string college;
        string branch;
    public: 
        void func(){
            cout<<"jai hind!"<<endl;
        }
};

class student : public college{    //a child class of the parent class college with mode of inheritance of public
    public:
        int age;
        int height;
        int weight;

        void display(){
            cout<<this->usn<<endl;
            cout<<this->college<<endl;
            cout<<this->branch<<endl;
            cout<<this->age<<endl;
            cout<<this->height<<endl;
            cout<<this->weight<<endl;
        }    
};
int main(){

    student aditya;
    aditya.usn = 13;      //all the datamember of the parent class is public hence can be accessed outside the class also
    aditya.branch = "ise";
    aditya.college = "bmsit";
    aditya.age = 20;
    aditya.height = 170;
    aditya.weight = 60;    

    aditya.display();
                        //so this is single inheritance simple
return 0;
}