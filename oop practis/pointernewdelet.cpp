#include<iostream>
using namespace std;
int main(){
    int*p;
    p=new int;
    cout<<"Enter value=";
    cin>>*p;
    cout<<"value"<<*p;
    delete p;


}
