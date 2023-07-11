#include<iostream>
using namespace std;
class student{
    int roll;
public:
    void setdata();
   void showdata();
    };
void student::setdata(){
    cin>>roll;

}
void student::showdata(){
    cout<<roll;

}
int main(){
    student s[10];
    int i;
    for(i=0;i<3;i++){
        s[i].setdata();
    }
    for(i=0;i<3;i++){
       s[i].showdata();
    }
}

