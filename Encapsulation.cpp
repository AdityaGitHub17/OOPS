#include<iostream>
using namespace std;


//basically encapsulation means making all data members private

class student{
    private:
        int data;
        int usn;
        string name;
    public:
        void set(int a,int b,string s){
            this->data = a;
            this->usn = b;
            this->name = s;
        }

        void display(){
            cout<<this->data<<endl;
            cout<<this->usn<<endl;
            cout<<this->name<<endl;
        }

};

int main(){

student aditya;
aditya.set(11,12,"verma");
aditya.display();

return 0;
}
