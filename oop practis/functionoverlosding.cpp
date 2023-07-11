#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"function1=";
    return(a+b);

}
int add(int a,int b,int c){
    cout<<"function2=";
    return(a+b+c);
}
int main(){
    cout<<add(1,2);
    cout<<add(1,2,3);
}
