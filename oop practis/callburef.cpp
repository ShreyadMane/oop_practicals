#include<iostream>
using namespace std;
void swap(int*,int*);
int main(){
    int a=10;
    int b=20;
    swap(&a,&b);
cout<<a<<b;
}
void swap(int*x,int*y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
