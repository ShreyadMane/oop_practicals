#include<iostream>
using namespace std;
class base{
public:
    virtual void test()=0;

};
class derived:public base{
public:
    void test(){

   cout<<"function is defined here";
    }
};
int main(){
    base *b;
    derived d;
    b=&d;
    b->test();
}
