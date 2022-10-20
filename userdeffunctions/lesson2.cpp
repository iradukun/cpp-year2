#include<iostream>
using namespace std;

double check(double x, double y,double z){
    double max=x;
    if(max>y){
        max=y;
    }else if(max>z){
        max=z;
    }

    return max;
}
int main(){
    int a=10;
    int b=20;
    int c=30;
 check(a,b,c);
    return 0;
}