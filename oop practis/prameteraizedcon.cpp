#include<iostream>
using namespace std;
class pracon{
    int id;
    string name;
public:
    void getdata(int a,string b);
    void showdata();
};
void pracon::getdata(int a,string b){
    id=a;
    name=b;
}
void pracon::showdata(){
    cout<<id;
    cout<<name;

}
int main(){
    pracon p;
    p.getdata(42,"shreya");
    p.showdata();
}
