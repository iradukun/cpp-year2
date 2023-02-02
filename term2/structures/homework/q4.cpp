#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
    int rollno;
    int age;
    int marks;
};

void mergeSort(Student a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        int i = start, j = mid + 1, k = 0;
        Student temp[end - start + 1];
        while (i <= mid && j <= end)
        {
            if (a[i].marks < a[j].marks)
            {
                temp[k++] = a[i++];
            }
            else
            {
                temp[k++] = a[j++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = a[i++];
        }
        while (j <= end)
        {
            temp[k++] = a[j++];
        }
        k = 0;
        for (int i = start; i <= end; i++)
        {
            a[i] = temp[k++];
        }
    }
}

int main()
{
    int n, sum = 0;
    cout << "Enter the number of students: ";
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details for student " << i + 1 << ":" << endl;
        cout << "Roll number: ";
        cin >> a[i].rollno;
        while (a[i].rollno <= 0)
        {
            cout << "Invalid roll number. Enter again: ";
            cin >> a[i].rollno;
        }
        cout << "Age: ";
        cin >> a[i].age;
        while (a[i].age < 10 || a[i].age > 30)
        {
            cout << "Invalid age. Enter again: ";
            cin >> a[i].age;
        }
        cout << "Marks: ";
        cin >> a[i].marks;
        while (a[i].marks < 0 || a[i].marks > 50)
        {
            cout << "Invalid marks. Enter again: ";
            cin >> a[i].marks;
        }
        cout << endl;
    }
    ofstream outfile("student_data.txt");
    for (int i = 0; i < n; i++)
    {
        outfile << a[i].rollno << " " << a[i].age << " " << a[i].marks << endl;
    }
    outfile.close();
    ifstream infile("student_data.txt");
    for (int i = 0; i < n; i++)
    {
        infile >> a[i].rollno >> a[i].age >> a[i].marks;
    }
    infile.close();
    mergeSort(a, 0, n - 1);
    cout << "Sorted student data based on marks:" << endl;
    cout << "Roll number\tAge\tMarks" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i].rollno << "\t\t" << a[i].age << "\t" << a[i].marks << endl;
        sum += a[i].marks;
    }
    cout << "Average marks: " << (double)sum / n << endl;
    cout << "Number of distinct students: " << n << endl;

    return 0;
}
