#include<iostream>
using namespace std;
#define pi   3.14159265
 double findArea(double radius){
      double area=radius*radius*pi;
      return area;
    };
    double findcirc(double r){
     double circumfrence=2*pi*r;
     return circumfrence;
    }
int main(){
    double rfromuser;
    cout<<"enter the radius to get area and circmufrence"<<endl;
    cin>>rfromuser;
    cout<<"the area is "<<findArea(rfromuser)<<" and circumfrence "<<findcirc(rfromuser)<<endl;
    cout<<1/2;
     return 0;
}

