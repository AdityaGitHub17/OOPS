#include<iostream>
using namespace std;
class student{
    private:
        int data;
        int usn;
    public:
        string name;
        string colname;

        void set(int a,int b){
            data = a;
            usn = b;
        }

        void display(){
            cout<<data<<endl;
            cout<<usn<<endl;
        }
};
int main(){
    student aditya;
    // aditya.data = 1;  -->will show error since the data is private member
    aditya.name = "aditya";
    cout<<aditya.name<<endl;
    aditya.colname = "bmsit";
    cout<<aditya.colname<<endl;

    //in order to access the private member we will make some function inside the class and to access the private member
    //we will call these function.

    aditya.set(1,2);   //so in this way we have asign the data to the private member of the class

    // cout<<aditya.data<<endl; -->this will also show error so we need a function to display that also
    //and that function also we have to make in the class only

    aditya.display();  //this will display the private member data;

    //so by using the function defined inside the class we can access the private member of the class



    //dynamically creation of the object
    student *adi = new student;  //new is keyword used for pointer creation

    (*adi).set(10,11);  //one way
    (*adi).display();

    adi->set(10,11);   //another way
    adi->display();
return 0;
}
