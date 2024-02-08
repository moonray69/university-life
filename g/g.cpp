#include "student.h"


int main() {

	int amount_of_students;
	cout << "enter amount of students: ";
	cin >> amount_of_students;

	student* group = new student[amount_of_students];
	for (size_t i = 0; i < amount_of_students; i++){
		string name;
		int age;
		int course;
		int number_study;
		int size;
		cout << "Name: ";
		cin >> name;
		cout << "age: ";
		cin >> age;
		cout << "course: ";
		cin >> course;
		cout << "number_study:";
		cin >> number_study;
		cout << "Size: ";
		cin >> size;
		group[i].seter(name, age, course, number_study, size);
		for (int j = 0; j < size; j++){
			string math;
			int rating;
			cout << "enter subject: ";
			cin >> math;
			cout << "enter rating: ";
			cin >> rating;
			group[i].setSub(j, rating, math);
		}
	}

	for (size_t i = 0; i < amount_of_students; i++) {
		group[i].print();
	}

	delete[]group;

	return 0;
}