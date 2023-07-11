#include<iostream>
using namespace std;
void incrementcount(int count){
    count=count+1;

}
int main(){
    int count=6;
    int result=0;
incrementcount(count);
cout<<count;
}
