#include<iostream>
using namespace std;

class college{
    int usn;
    string branch;
    string address;

};

class student1 : public college{
    public:
        int age;
        int weight;
        int height;
    public:
        void set(int a,string b,string c,int d,int e,int f){
            // this->usn = a  -->it does not matter what is mode if the parent datamember is private you cannot access
        }                    //anywhere in the code only accessed by the parent class function only

};

int main(){

return 0;
}
