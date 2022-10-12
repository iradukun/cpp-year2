#include<iostream>
using namespace std;
int main(){
  int a=12;
  int b=25;
  cout<<"(a &b ) "<<(a&b)<<endl;
  cout<<"(a << 1 ) "<<(a<<1)<<endl;
  cout<<"(a >>b ) "<<(a>>1)<<endl;
  cout<<"(a |b ) "<<(a|b)<<endl;
  cout<<"(a ^b ) "<<(a^b)<<endl;
  cout<<"(a ^(~b) ) "<<(a^(~b))<<endl;
   return 0;
}