#include<iostream>
using namespace std;
class student {
    int roll_no;
    char name[20];
    char dept[20];
    float marks;
    public:
    void getdata();
    void showdata();

};
void student::getdata(){
    cout<<"Enter roll number=";
    cin>>roll_no;
    cout<<"Enter name=";
    cin>>name;
    cout<<"Enter Department=";
    cin>>dept;
    cout<<"Enter marks=";
    cin>>marks;
}
void student::showdata(){
   cout<<roll_no<<"\n";
    cout<<name<<"\n";
    cout<<dept<<"\n";
    cout<<marks<<"\n";
}
int main(){
    student s;
    s.getdata();
    s.showdata();
}
