#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int total_students;
	int age;
	string name;
	fstream obj;
	cout << "Enter no of students: ";
	obj.open("demo.txt", ios::out);
	cin >> total_students;
	cout << "Enter the student details: "<<endl;

	for(int i = 0; i < obj.total_students; i++)
	{
		cout << "Name: ";
		cin >> name;
		obj>>name;
		cout << "Age: ";
		cin >> age;
		obj>> age;
	}
	obj.close();
	//cout<<"Converting this data into file"

}
