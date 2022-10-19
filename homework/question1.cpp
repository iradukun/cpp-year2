#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float base,height,hypothenuse;
    cout<<"ENTER THE BASE OF your triangle:"<<endl;
    cin>>base;
    cout<<"enter height then get hypothenuse:"<<endl;
    cin>>height;
    hypothenuse=sqrt(pow(base,2)+pow(height,2));
    cout<<"=============================="<<endl;
    cout<<"                            "<<endl;
    cout<<"The hypothenuse of ur trinagle is approxaimetly"<<int(hypothenuse)<<endl;
    cout<<"                       "<<endl;
    cout<<"====== THANK YOU!!!!  ======"<<endl;
    return 0;
}
