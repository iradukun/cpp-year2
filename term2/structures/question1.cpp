#include<iostream>
#include<array>
using namespace std;

struct student{
    string name;
    int age;
    int rollNumber;
    float marks;
};
void record(struct student st){
    string name;
    int age;
    float marks;
    int rollNumber;
     getline(cin,name);
    cin>>age;
    cin>>rollNumber;
    cin>>marks;
    st.name=name;
    st.age=age;
    st.marks=marks;
    st.rollNumber=rollNumber; 
}
void display(struct student st){
    cout<<st.rollNumber<<", "<<st.name<<st.age<<", "<<st.marks<<endl;
}
int main(){
 struct student student1;
 struct student student2;
 struct  student student3;
 record(student1);
 record(student2);
 record(student3);
 display(student1);
 display(student2);
 display(student3);
 
 return 0;
 };
 

