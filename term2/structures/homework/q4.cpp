#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int MAX_STUDENTS = 5;
const int MIN_AGE = 10;
const int MAX_AGE = 30;
const int MIN_MARKS = 0;
const int MAX_MARKS = 50;

struct Student {
    int rollNumber;
    string name;
    int age;
    int marks;
};

// function to get student data from console
void getStudentData(Student students[]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "Enter data for student " << i+1 << endl;
        cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Roll Number: \";\n        cin >>"}`&#8203; students[i].rollNumber;
        cout &#8203;`oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Name: \";\n        cin >>"}`&#8203; students[i].name;
        cout &#8203;`oaicite:{"index":2,"invalid_reason":"Malformed citation << \"Age: \";\n        cin >>"}`&#8203; students[i].age;
        cout &#8203;`oaicite:{"index":3,"invalid_reason":"Malformed citation << \"Marks: \";\n        cin >>"}`&#8203; students[i].marks;
        cout << endl;
    }
}

// function to validate student data
bool isValidData(Student student) {
    if (student.age < MIN_AGE || student.age > MAX_AGE) {
        cout << "Error: Invalid age." << endl;
        return false;
    }
    if (student.marks < MIN_MARKS || student.marks > MAX_MARKS) {
        cout << "Error: Invalid marks." << endl;
        return false;
    }
    if (student.rollNumber <= 0) {
        cout << "Error: Invalid roll number." << endl;
        return false;
    }
    return true;
}

// function to store student data in a .txt file
void storeData(Student students[]) {
    ofstream file;
    file.open("student_data.txt");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (isValidData(students[i])) {
            file << students[i].rollNumber << "," << students[i].name << "," << students[i].age << "," << students[i].marks << endl;
        }
    }
    file.close();
}

// function to read student data from .txt file
void readData(Student students[]) {
    ifstream file;
    file.open("student_data.txt");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        file >> students[i].rollNumber >> students[i].name >> students[i].age >> students[i].marks;
    }
    file.close();
}

// function to sort students by marks using merge sort
void mergeSort(Student students[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(students, start, mid);
        mergeSort(students, mid+1, end);
        merge(students, start, mid, end);
    }
}

// function to merge two sorted
