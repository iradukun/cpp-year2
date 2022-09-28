#include <iostream>
using namespace std;
int main(){
    int score=5;
    score=7;
    float ratio=5.6f;
    double d=5.8;
    string name="john";
    string age;

    cout<<score<<endl;
    cout<<"the score is"<<score<<endl;
    cout<<"the name is"<<name<<endl;
    cout<<"the the ration is"<<ratio<<endl;
    cout<<"Enter your name"<<endl;
    cin>>age;
    cout<<"your name "<<age<<endl;
    getline(cin,age);
    cout<<"your getline name is "<<age<<endl;



}