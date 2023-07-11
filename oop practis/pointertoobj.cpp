#include<iostream>
using  namespace std;
class test{
    int roll;
public:
    void setdata(int a);
    void showdata();
};
void test::setdata(int a){
    roll=a;

}
void test::showdata(){
cout<<roll;
}
int main(){
     test t1 ,*t;
     t1.setdata(42);
     t1.showdata();
     t=&t1;
     t->setdata(43);
     t->showdata();

}
