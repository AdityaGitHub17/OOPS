//here we will see the nesting of member function
/*we will see it by taking an example of strings*/
#include<iostream>
#include<string>
using namespace std;

class binary{    //class name is binary
    string s ; //by default it will take it as private variable.
    
    public :
        void read();         //these 
        void check_bin();       //are
        void convert();            //public function 
};

void binary :: read(void){          //defining a function
    cout<<"enter the binary number : "<<endl;
    cin>>s;
}

void binary :: check_bin(void){   //defining a function
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"incorrect binary format."<<endl;
            break;
        }
        else{
            cout<<"correct binary format."<<endl;
            break;
        }
    }
}

void binary :: convert(void){    //defining a function
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';    
        }
        else{
            exit(0);
        }
    }
    cout<<s<<endl;
}

int main(){
    binary aditya;
    aditya.read();
    aditya.check_bin();
    aditya.convert();
return 0;
}