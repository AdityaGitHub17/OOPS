#include<iostream>
using namespace std;

/*basically here parent class data member access modifier will be public and we will see how the child class
will change if we changes the mode(public,protected,private)*/ 

class college{
    public:
        int usn;
        string branch;
        string address;

    public:
        void set(int a,string s,string p){
            this->usn = a;
            this->branch = s;
            this->address = p;
        }

        void display(){
            cout<<this->usn<<endl;
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
        }
};

//first we will take mode of inheritance be public
class student1 : public college{
    
    public:
        int age;
        int weight;
        int height;
        
     
};

//second we will take mode of inheritance be protected

class student2 : protected college{
    /*now in this case all the data member of the parent class will be protected(since all are public in parent class)
    if parent class data member will other than public then we wil discuss*/
    public:
        int age1;
        int weight1;
        int height1;

        void set1(int a,string s,string p){
            this->usn = a;
            this->branch = s;
            this->address = p;
        }
        void display1(){
            cout<<this->usn<<endl;
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
            cout<<this->age1<<endl;   //they can be accessed outside(age height and weight) since they are belong
            cout<<this->weight1<<endl; //to the child class and they are public
            cout<<this->height1<<endl;
        }
};

//third we will take mode of inheritnace be private

class student3 : private college{
    public:
        int age2;
        int height2;
        int weight2;

        void set2(int a,string s,string p){
            this->usn = a;
            this->branch = s;
            this->address = p;
        }

        void display2(){
            cout<<this->usn<<endl;
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
            cout<<this->age2<<endl;   //they can be accessed outside(age height and weight) since they are belong
            cout<<this->weight2<<endl; //to the child class and they are public
            cout<<this->height2<<endl;
        }  

};
int main(){
    
// since here the mode is public hence all the member of the parent class in public
    student1 adi;
    adi.set(12,"ise","balaji pg");
    adi.display();
    adi.age = 12;
    adi.weight = 80;
    adi.height = 170;
    cout<<adi.age<<endl;
    cout<<adi.weight<<endl;
    cout<<adi.height<<endl;
//since here mode is protected hence all the data member will be protected for the child class

    student2 adit;
    // adit.usn;   -->cannot be used since for child class the parent data member become protected 
    //hence we need set function to do the needful for single inheritance
    adit.set1(14,"ise","balaji pg");
    // adit.display();-->cannot be accessed since function is protected 
    adit.age1 = 19;
    adit.height1 = 179;
    adit.weight1 = 90;
    adit.display1();

//since here mode is private hence all the datamember of parent become the private for the child class
    student3 aditya;
    //aditya.usn; -->cannot be used since for child class the parent data member become pivate
    //hence we also need a function to set the value
    aditya.age2 = 20;
    aditya.height2 = 180;
    aditya.weight2 = 90;
    aditya.set2(20,"ise","balaji pg");
    aditya.display2();
return 0;
}