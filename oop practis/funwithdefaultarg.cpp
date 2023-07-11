#include<iostream>
using namespace std;
    int add(int a,int b=2,int c=1);
    int add(int a,int b,int c)
    {

        return(a+b+c);

    }
    int main(){
   int s1=add(3);
   cout<<s1;
   int s2=add(3,4);
   cout<<s2;
   int s3=add(3,4,5);
   cout<<s3;
    }

