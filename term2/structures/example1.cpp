#include<iostream>
#include<array>
using namespace std;

struct student{
    int id;
    char *name;
    
}
// struct student{
//     int age;
//     string name;
//     float marks;
//     int rollNumber;

//     void display(){
//         cout<<"age: "<<age<<endl;
//         cout<<"name: "<<name<<endl;
//         cout<<"marks: "<<marks<<endl;
//         cout<<"rollNumber: "<<rollNumber<<endl;
//     }
// };
int main(){
    student st1;
    int age,rollNumber;
    float marks;
    string name;
    cout<<"Enter name: "<<endl;
    getline(cin,name);
    cout<<endl;
    cout<<"age: "<<endl;
    cin>>age;
    cout<<"rollNumber:"<<endl;
    cin>>rollNumber;
    cout<<endl;
    cout<<"marks: "<<endl;
    cin>>marks;
    st1.age=age;
    st1.marks=marks;
    st1.name=name;
    st1.rollNumber=rollNumber;
    cout<<"================================================================"<<endl;
    cout<<"================================================================"<<endl;
    cout<<"================================================================"<<endl;
    cout<<"================================================================"<<endl;

    st1.display();
      
    return 0;
}