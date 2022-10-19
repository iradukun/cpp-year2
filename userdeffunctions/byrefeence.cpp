#include<iostream>
using namespace std;
void duplicate(int &a,int &b){
    a=a*2;
    b=b*2;
    c=c*2;
}

int main(){
    int x=5,y=7,z=8;
    duplicate(x,y,z);
    cout<<"x:"<<x<<"y:"<<y<<"z:"<<z<<endl;
    return 0;
}