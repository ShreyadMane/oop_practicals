#include<iostream>
using namespace std;
class student{
    int roll;
public:
    void display(){
        cin>>roll;
    cout<<roll;
    }

};
class marks:public student{
    float marks;
public:
    void show(){
cin>>marks;
   cout<<marks;

    }

};
int main(){
    marks m;
    student s;
    m.show();
    s.display();
}

