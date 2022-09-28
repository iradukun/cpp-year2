#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  string firstName,lastName;
  int age;
  cout<<"Enter your FIRST name"<<endl;
//   cin>>firstName;
  cin.ignore();
  getline(cin,firstName);
  cin.ignore();

  cout<<"you enterED FIRST  name "<<firstName<<endl;
  cout<<"Enter your last name"<<endl;
  cin>>lastName;
  cout<<"enter you age then"<<endl;
  cin>>age;
  cout<<"your firstame is "<<firstName<<" and your last name is  "<<lastName<<"and your age is "<<age<<endl;
    return 0;
}