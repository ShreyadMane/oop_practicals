#include<iostream>
using namespace std;
class base{
public:
    virtual void display(){

   cout<<"from base";
    }
    virtual void show(){
        cout<<"from base";
    }
};
class derived:public base{
public:
    void display(){
    cout<<"from derived";
    }
    void show(){

   cout<<"from derived";
    }
};
int main(){
    base b,*b1;
    derived d;
    b1=&b;
    b1->display();
    b1->show();

    b1=&d;
    b1->display();
    b1->show();

}
