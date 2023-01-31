//heirarchical inheritance means, a parent class is a parent of more than once child class
// basically this parent is more than one child
// or we can say that this parent has "children" not "child".

#include<iostream>
using namespace std;

class parent{   //-->parent class
    public:
        string hair;
        string eye;
    public:
        void check(){
            cout<<"i am a child of my parent class namely parent."<<endl;
        }    
};

class child1 : public parent{    //-->first child of the parent class
    public:
        int age1;
    public:
        void check1(){
            cout<<"i am first child of parent class."<<endl;
            cout<<"and my age is "<<this->age1<<endl;
        }

};

class child2 : public parent{   //-->second child of the parent class
    public:
        int age2;
    public:
        void check2(){
            cout<<"i am second child of parent class."<<endl;
            cout<<"and my age is "<<this->age2<<endl;
        }
};

class child3 : public parent{   //-->third child of the parent class
    public:
        int age3;
    public:
        void check3(){
            cout<<"i am second child of parent class."<<endl;
            cout<<"and my age is "<<this->age3<<endl;
        }
};
/*keep one thing in mind that these child classes has no connection between them basically one child can not use the
datamember and function of the other child of the same parent class but can obviously use the datamember and
fucntion of the parent class*/
int main(){

    child1 aditya;

    aditya.hair = "black";    //child1's obejct accessing the datamember of parent class
    aditya.eye = "black";
    aditya.check();


    // aditya.age3 = 13  --> will give error, one child class cannot use datamember of the other class

    aditya.age1 = 20;
    aditya.check1();



    child2 adi;  
    adi.hair = "brown";   //child2's obejct accessing the datamember of parent class
    adi.eye = "brown";
    adi.check();

    adi.age2 = 21;
    adi.check2();



    child3 adit;
    adit.hair = "black";   //child3's obejct accessing the datamember of parent class
    adit.eye = "brown";
    adit.check();

    adit.age3 = 22;
    adit.check3();


return 0;
}


// there is another type of inheritance i.e, hybrid inheritance, in which inheritance is the combination of one or two types of inheritance
