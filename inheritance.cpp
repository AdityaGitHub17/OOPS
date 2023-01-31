#include<iostream>
using namespace std;

class college{            //parent class 
    public:
        string branch;
        int usn;
        string address;
        char sec;
    public:
        void faaltufunc(){
            cout<<"hello guys"<<endl;
        }    
};

class student : public college{          //here student is a child class of college is a parent
    private:
        int age;
        int weight;
        int height;
    public: 
        void set(int a,int b,int c){
            this->age = a;
            this->weight = b;
            this->height = c;
        }    
        void display(){
            cout<<this->age<<endl;
            cout<<this->weight<<endl;
            cout<<this->height<<endl;
            cout<<this->branch<<endl;   // see we can access the public datamember of the parent class
            cout<<this->usn<<endl;
            cout<<this->sec<<endl; 
            cout<<this->address<<endl;
        }
};

int main(){

    student aditya;
    aditya.branch = "ise";    //giving value to datamember of object of child class inherited from the parent class 
    aditya.usn = 13;
    aditya.address = "balaji pg";
    aditya.sec = 'a';
    aditya.set(20,60,170);    //since the datamember of the child class is private hence using the setter function
    aditya.display();
    aditya.faaltufunc();

return 0;
}