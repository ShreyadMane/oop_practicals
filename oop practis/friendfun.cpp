#include<iostream>
using namespace std;
class shape{
    double area;
public:
    friend void printarea(shape s);
    void setarea(double ar);
};
void shape::setarea(double ar){
    area=ar;

}
void printarea(shape s){
    cout<<s.area;
}
int main(){
    shape s;
    s.setarea(20.2);
    printarea(s);
}

