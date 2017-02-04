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
	
	Student stud1[3];
	Prof prof1[3];
	Staff staff1[3];	
	
	for(int i = 0 ; i < 3 ; i++){
		cout << i+1 << ". Enter student name: ";
		cin >> stud1[i].name;
		cout << "Enter student ID number: ";
		cin >> stud1[i].id_num;
		cout << "Enter number of subjects: ";
		cin >> stud1[i].num_of_subjects;
		cout << "Enter number of books: ";
		cin >> stud1[i].num_books;
		cout << endl;
				
		cout << i+1 << ". Enter professor name: ";
		cin >> prof1[i].name;
		cout << "Enter professor ID number: ";
		cin >> prof1[i].id_num;
		cout << "Enter professor TIN: ";
		cin >> prof1[i].tin;
		cout << endl;
				
		cout << i+1 << ". Enter staff name: ";
		cin >> staff1[i].name;
		cout << "Enter staff ID number: ";
		cin >> staff1[i].id_num;
		cout << "Enter staff SSS: ";
		cin >> staff1[i].sss;
		cout << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 0 ; i < 3 ; i++){
		cout << i+1 << ". Student name: " << stud1[i].name << endl;
		cout << "Student ID number: " << stud1[i].id_num << endl;
		cout << "Student number of subjects: " << stud1[i].num_of_subjects << endl;
		cout << "Student number of books: " << stud1[i].num_books << endl << endl;
		cout << i+1 << ". Professor name: " << prof1[i].name << endl;
		cout << "Professor ID number: " << prof1[i].id_num << endl;
		cout << "Professor TIN: " << prof1[i].tin << endl << endl;
		cout << i+1 << ". Staff name: " << staff1[i].name << endl;
		cout << "Staff ID number: " << staff1[i].id_num << endl;
		cout << "Staff SSS: " << staff1[i].sss << endl << endl;
	}
   return 0;
}
