//here we will see the multiple inheritance where a child class is inherited from the different parent classes

#include<iostream>
using namespace std;

class goodstudent{
    public:
        int goodmarks;
    public:          //-->no need to write public again and again for funciton...because of habit i am writing
        void study(){
            cout<<"i am good at study."<<endl;
        }
};

class notgoodstudent{
    public:
        int notgoodmarks;
    public:
        void play(){
            cout<<"i am good at playing."<<endl;
        }    
};

class special : public goodstudent,public notgoodstudent{      //multiple inheritance
    public:
        int marks;
    public:
        void both(){
            cout<<"i am good at both studying and playing."<<endl;
        }

        void display(){
            cout<<this->goodmarks<<endl;
            cout<<this->notgoodmarks<<endl;
            cout<<this->marks<<endl;
        }

};

int main(){

    special aditya;   //object of the inherited class and can able to access the datammeber of the both parent classes
    aditya.goodmarks = 100;  //-->  datamember of first parent class
    aditya.study(); 
    aditya.notgoodmarks = 70;  //--> datamember of second parent class
    aditya.play();
    aditya.marks = 85;   //--> datamember of child class
    aditya.both();

    aditya.display();   

return 0;
}