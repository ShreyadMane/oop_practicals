#include<iostream>
using namespace std;
class opover{
    int a;
    int b;
public :
    void distance(){

   a=0;
   b=0;
    }
    opover(int f,int i){

   int c;
   a=f;
   b=i;
   c=a-b;
   cout<<c;

    }
    void display(){
        cout<<a<<b;
    }
    opover operator-(){
    a=-a;
    b=-b;
    return opover(a,b);
    }

};

int main(){
    opover m1(6,8),m2(-3,-4);
-m1;

}
