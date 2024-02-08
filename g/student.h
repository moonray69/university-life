#pragma once
#include <iostream>
#include <string>
using namespace std;
class subject {

private:
	string math;
	int rating;


public:
	subject() {
		math = "";
		rating = 0;
	}

	subject(const string& math_, int rating_) {
		math = math_;
		rating = rating_;
	}
	subject(const subject& another) {
		this->math = another.math;// . работаю с ссылкой , this указатель на объект 
		this->rating = another.rating;
	}
	void print()const {
		cout << math << " " << rating << endl;
	}
	void set(const string& math_, int rating_) {
		math = math_;
		rating = rating_;
	}
};

class student
{

private:
	string name_s;
	int age;
	int course;
	int number_study;
	subject* lessons;
	int size;
 
public:
	student() {
		name_s = "";
		age = 0;
		course = 0;
		number_study = 0;
		size = 0;
		lessons = 0;
	}

	student(const string& name_s_, int age_, int course_, int number_study_, int size_) {
		name_s = name_s_;
		age = age_;
		course = course_;
		number_study = number_study_;
		size = size_;
		lessons = new subject[size];
	}
	student(const student& another) {
		this->name_s = another.name_s;
		this->age = another.age;
		this->course = another.course;
		this->number_study = another.number_study;
		this->size = another.size;
		this->lessons = new subject[size];
		for (int i = 0; i < size; i++){
			this->lessons[i] = another.lessons[i]; // глубокое копирование 
			
		}
	}

	~student() {delete[]lessons;}

	void print()const {
		cout << name_s << " " << age << " " << course << " " << number_study << " ";
		for (int i = 0; i < size; i++){
			lessons[i].print();
		}
	}

	void seter(const string& name_s_, int age_, int course_, int number_study_, int size_) {
		name_s = name_s_;
		age = age_;
		course = course_;
		number_study = number_study_;
		size = size_;
		lessons = new subject[size];
	}

	void setSub(int index, int rating, const string& math) {
		lessons[index].set(math, rating);
	}

};


