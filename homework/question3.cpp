#include<iostream>
#include<math.h>
using namespace std;
void findRoots(int a,int b,int c){
    int x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    int x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    cout<<"(   x1== "<<x1<<" and x2== "<<x2<<")";
    
 }
int main(){
 int a,b,c;
 cout<<"enter A for the formula:"<<endl;
 cin>>a;
 cout<<"Enter B for the formlua:"<<endl;
 cin>>b;
 cout<<"Lastly enter C for the formula"<<endl;
 cin>>c;
 cout<<"  REEEEEEEESULTS!!!"<<endl;
 cout<<"the roots are "<<endl;
 cout<<"============================================================"<<endl;
 cout<<"============================================================"<<endl;
 cout<<"                        "<<endl;
 cout<<"                        "<<endl;
 findRoots(a,b,c);
 cout<<"                        "<<endl;
 cout<<"                        "<<endl;
 cout<<"============================================================"<<endl;
 cout<<"============================================================"<<endl;
    return 0;
}
