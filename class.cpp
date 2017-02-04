#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class BasicDetails{
	public:
		string name;
		int id_num;
};

class Student: public BasicDetails{
	public:
		int num_of_subjects;
		int num_books;
};

class Prof: public BasicDetails{
	public:
		int tin;
};

class Staff: public BasicDetails{
	public:
		int sss;
};

int main() {
	
	Student stud1;
	
	cout << "Enter student name: ";
	cin >> stud1.name;
	cout << "Enter student ID number: ";
	cin >> stud1.id_num;
	cout << "Enter number of subjects: ";
	cin >> stud1.num_of_subjects;
	cout << "Enter number of books: ";
	cin >> stud1.num_books;
	
	Prof prof1;
	
	cout << "Enter professor name: ";
	cin >> prof1.name;
	cout << "Enter professor ID number: ";
	cin >> prof1.id_num;
	cout << "Enter professor TIN: ";
	cin >> prof1.tin;
	
	Staff staff1;
	
	cout << "Enter staff name: ";
	cin >> staff1.name;
	cout << "Enter staff ID number: ";
	cin >> staff1.id_num;
	cout << "Enter staff SSS: ";
	cin >> staff1.sss;
	
	cout << endl << endl;
	cout << "Student name: " << stud1.name << endl;
	cout << "Student ID number: " << stud1.id_num << endl;
	cout << "Student number of subjects: " << stud1.num_of_subjects << endl;
	cout << "Student number of books: " << stud1.num_books << endl;
	cout << "Professor name: " << prof1.name << endl;
	cout << "Professor ID number: " << prof1.id_num << endl;
	cout << "Professor TIN: " << prof1.tin << endl;
	cout << "Staff name: " << staff1.name << endl;
	cout << "Staff ID number: " << staff1.id_num << endl;
	cout << "Staff SSS: " << staff1.sss << endl;
	
   return 0;
}
