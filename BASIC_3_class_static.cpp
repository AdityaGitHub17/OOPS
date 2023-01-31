#include<iostream>
using namespace std;

class student{
    private:
        int data;
        int usn;
        
    public:
        static int time;  //does not ant object to get access  && it should not be the private 

        void set(int a,int b){
            this->data = a;
            this->usn = b;
        }
        
        static int statfnc(){   //should be in public
            return time;    //static function only can access the static datamember
        }

};

//we have to initialise the static datamember before accessing it in tha main funtion
int student :: time = 5;    //syntax to initialise (should be initialise outside the class)

int main(){

cout<<student::time<<endl;
cout<<student::statfnc()<<endl;

return 0;
}
