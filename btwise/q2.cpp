#include<iostream>
using namespace std;
int main(){
 float marks;
 cout<<"Enter your marks out of 20"<<endl;
 cin>>marks;
  string answer = marks <10 ? "FAILED":"PASSEED";
  string grade=marks >=16 ? "A":marks>14?"B":marks>=10?"C":"D";
  cout<<"Dear student you have "<<answer<<" and your grade is "<<grade<<endl;
 
 return 0;
}