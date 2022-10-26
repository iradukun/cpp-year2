#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;

 float addition(float number1,float number2){
    float sum=number1+number2;
    return sum;
 }
float subtraction(float number1,float number2){
    float answer=number1-number2;
    return answer;
}
float multiplication(float number1,float number2){
    float answer=number1*number2;
    return answer;
}
float division(float number1,float number2){
    float answer=number1/number2;
    return answer;
}
int remainder(int number1,int number2 ){
    int answer=int(number1%number2);
    return answer;
}
int main(void){
  int choice;
float first,second;
char ch;
   do{
  cout<<"MENU !!!!!!!!!!!!!!!!!!!!!"<<endl;
  cout<<"1.ADDITION"<<endl;
  cout<<"2.SUBTRACTION"<<endl;
  cout<<"3.MULTIPLICATION"<<endl;
  cout<<"4.DIVISION"<<endl;
  cout<<"5.MODULUS"<<endl;
  cout<<"Enter your choice:  ";
  cin>>choice;
 
  if(choice==1){
    cout<<"enter the numbers : "<<endl;
    cin>>first;
    // cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"The sum is:  "<<addition(first,second)<<endl;
     cout<<"continue?(Y/n)";
     cin>>ch;
  }else if(choice==2){
    cout<<"Enter the 2 numbers: "<<endl;
    cin>>first;
    // cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"The difference is :"<<subtraction(first,second)<<endl;
     cout<<"continue?(Y/n)";
     cin>>ch;
  }else if(choice==3){
    cout<<"Enter the 2 numbers: "<<endl;
    cin>>first;
    // cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"the answer is :"<<multiplication(first,second)<<endl;
     cout<<"continue?(Y/n)";
     cin>>ch;
  }else if(choice==4){
     cout<<"Enter the 2 numbers: "<<endl;
    cin>>first;
    // cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"The answer is :"<<division(first,second)<<endl;
    cout<<"continue?(Y/n)";
    cin>>ch;
  }else if(choice==5){
   cout<<"Enter the 2 numbers: "<<endl;
    cin>>first;
    // cout<<"Second number: "<<endl;
    cin>>second;
    cout<<"the modulus is:"<<remainder(int(first),int(second))<<endl;
    cout<<"continue?(Y/n)";
    cin>>ch;
  }else{
    cout<<"you didn't make any choice try again!!"<<endl;
    cout<<"continue?Y";
    cin>>ch;
    cout<<ch;
  }
  
  }while(ch=='y');
  
}