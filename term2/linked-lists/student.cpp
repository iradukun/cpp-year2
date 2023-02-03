#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;
    int age;
    Student *student;
  Student(int id, string n, int a){
    this->id = id;
    this->name = n;
    this->age = a;
    student=NULL;
  } 
}