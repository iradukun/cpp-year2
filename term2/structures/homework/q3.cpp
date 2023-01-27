#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int age;
    string address;
    int ID;
};


Student getStudentData() {
    Student student;
    cout<< "enter student name"<<endl;
    cin>>student.name;
    cout<<"Enter student age"<<endl;
    cin>>student.age;
    cout<<"Enter student  address"<<endl;
    cin>>student.address;
    cout<<"Enter student ID"<<endl;
    cin>>student.ID;
    cout<<endl;
    return student;
}

void storeStudentData(const Student& student) {
    ofstream outFile("students.txt");
    outFile << student.name << endl;
    outFile << student.age << endl;
    outFile << student.address << endl;
    outFile << student.ID <<endl;
}
void readStudentData(){
    string name;
    int age;
    string address;
    int ID;
    ifstream inFile("students.txt");
    inFile >> name >> age >> address >>ID;
    inFile.close();
    cout << "Student Name: " << name << endl;
    cout << "Student Age: " << age << endl;
    cout << "Student Address: " << address << endl;
    cout << "Student ID: " << ID << endl;
}

int main() {
    Student student = getStudentData();
    storeStudentData(student);
    readStudentData();
    return 0;
}
