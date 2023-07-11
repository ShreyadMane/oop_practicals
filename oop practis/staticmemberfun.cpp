#include<iostream>
using namespace std;
class test{
    int x;
   static int y;
   public:
       void setx(int a){

      x=a;
       }
      static void sety(int b){
          y=b;

       }
       void showxy(){
       cout<<x;
       cout<<y;
       }
};
int test::y;
int main(){
    test t1;
    t1.setx(2);
    test::sety(3);
    t1.showxy();
}
