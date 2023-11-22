#include<iostream>
#include <fstream>
using namespace std;
bool modify(string name, int age) // Modify details of student
{
    
    fstream file, file1;
    string rollno;
    int found = 0;
    
    cout << "---Student Modify Details ---" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "File is empty ...";
        file.close();
    }
    else
    {
       // cout << "Enter Roll No. of Student which you want to Modify: ";
        cin >> rollno;
        file1.open("record.txt", ios::app | ios::out);
        file >> roll_no >> name >> age;
        while (!file.eof())
        {
            if (rollno != roll_no)
                file1 << roll_no << ", " << name << ", " << age <<endl;
            else
            {
                cout << " Roll No.: ";
                cin >> roll_no;
                cout << " Name: ";
                cin >> name;
                cout << " Age: ";
                cin >> age;
          
            // vector  
                file1 << roll_no << ", " << name << ", " << age <<endl;
                found++;
            }
            file >> roll_no >> name>> age;
        }
        if (found == 0)
        {
            cout << "Record not Found....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}

void student::deleted() // deleted data of student
{
    
    fstream file, file1;
    int found = 0;
    string roll;
    cout << "--- Delete Student Details ---" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
        cout << "File is Empty... ";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of Student which you want Delete Data: ";
        cin >> roll;
        file1.open("record.txt", ios::app | ios::out);
        file >> roll_no >> name >> age;
        while (!file.eof())
        {
            if (roll != roll_no)
            {
                file1 <<roll_no << "," << name << ", " << age<< endl;
            }
            else
            {
                found++;
                cout << "Successfully Data Deleted";
            }
            file >> roll_no >> name >> age;
        }
        if (found == 0)
        {
            cout << "Record not found"....";
        }
        file1.close();
        file.close();
        remove("studentRecord.txt");
        rename("record.txt", "studentRecord.txt");
    }
}
