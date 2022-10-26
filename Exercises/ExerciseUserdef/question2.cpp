#include<iostream>
#include<math.h>
using namespace std;

float add(float first,float second){
  float sum=first +second;
  return sum;
};
int main(){
    float first,second;
  cin>>first;
  cin>>second;
  cout<<"The sum of <<"<<first<<"and "<<second<<"is :"<<add(first,second)<<endl;
   return 0;
}