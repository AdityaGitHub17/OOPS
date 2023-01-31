#include<iostream>
using namespace std;

class college{
    protected:
        int usn;
        string branch;
        string address;
    public:
        // void set(int a,string b,string c){
        //     this->usn = a;
        //     this->branch = b;
        //     this->address = c;           
        // }

        // void display(){
        //     cout<<this->usn<<endl;
        //     cout<<this->branch<<endl;
        //     cout<<this->address<<endl;
        // }
};

//if the mode is public
class student1 : public college{
    public:
        int age;
        int weight;
        int height;

    public:
        void set(int a,string b,string c,int d,int e,int f){
            this->usn = a;
            this->branch = b;
            this->address = c;
            this->age = d;
            this->weight = e;
            this->height = f;

        } 

        void display(){    //we have to make a function in order to access the protected member of the parent class
            cout<<this->usn<<endl;    
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
            cout<<this->age<<endl;
            cout<<this->weight<<endl;
            cout<<this->height<<endl;
        }   
};

// if the mode in protected 
  //here basically all the member of the parent become protected (anyways the parent class has protected member only)
class student2 : protected college{
    public:
        int age1;
        int weight1;
        int height1;

    public:
        void set(int a,string b,string c,int d,int e,int f){
            this->usn = a;
            this->branch = b;
            this->address = c;
            this->age1 = d;
            this->weight1 = e;
            this->height1 = f;
        } 

        void display(){    //we have to make a function in order to access the protected member of the parent class
            cout<<this->usn<<endl;    
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
            cout<<this->age1<<endl;
            cout<<this->weight1<<endl;
            cout<<this->height1<<endl;
        }   
};

//if the mode is private
//here since mode is private hence the datamember of the parent class will be private now 
class student3 : private college{
    public: 
        int age2;
        int height2;
        int weight2;

    public: 
        void set(int a,string b,string c,int d,int e,int f){
            this->usn = a;
            this->branch = b;
            this->address = c;
            this->age2 = d;
            this->weight2 = e;
            this->height2 = f;
        }

        void display(){ //we have to make a function in order to access the protected  member of the parent class which is now private due to private mode
            cout<<this->usn<<endl;    
            cout<<this->branch<<endl;
            cout<<this->address<<endl;
            cout<<this->age2<<endl;
            cout<<this->weight2<<endl;
            cout<<this->height2<<endl;
        } 

};

int main(){

//first case if the mode is protected with protected datamember of the parent class    
    student1 adi;
    // cout<<adi.usn  --> can not be accessed since it is a protected member of the parent class
    adi.set(13,"ise","bmsit",180,15,16);
    adi.display();

//second case if the mode is private with protected datamember of the parent class    
    student2 adit;
    adit.set(13,"ise","bmsit",13,24,453);
    adit.display();

//third case if the mode is protected with protected datamember of the parent class
    student3 aditya;
    aditya.set(14,"ise","bmsit",142,234,234);
    aditya.display();

return 0;
}
