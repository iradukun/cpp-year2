#include<iostream>
using namespace std;
int amount=16;
int main(){
    int amount=12;
    cout<<"the local amonubt"<<amount<<endl;
    cout<<"the global amount "<<::amount<<endl;
     return 0;
}