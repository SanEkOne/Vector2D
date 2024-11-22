#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Vector {
	int x;
	int y;
public:
	Vector(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void PrintInfo() {
		cout << "x: " << this->x << endl << "y: " << this->y << endl;
	}
	Vector operator+(const Vector& other) {
		return Vector(this->x + other.x, this->y + other.y);
	}
	Vector operator-(const Vector& other) {
		return Vector(this->x - other.x, this->y - other.y);
	}
	Vector operator++() {
		++this->x;
		++this->y;
		return *this;
	}
	Vector operator++(int) {
		Vector temp = *this;
		++this->x;
		++this->y;
		return temp;
	}

		// a > b
	bool operator>(const Vector& other) {
		if ((this->x,this->y ) > other.x, other.y) {
			return true;
		}
		return false;
	}
	bool operator<(const Vector& other) {
		if ((this->x, this->y) > other.x, other.y) {
			return true;
		}
		return false;
	}

	bool operator>=(const Vector& other) {
		if ((this->x, this->y) > other.x, other.y) {
			return true;
		}
		return false;
	}
	bool operator<=(const Vector& other) {
		if ((this->x, this->y) > other.x, other.y) {
			return true;
		}
		return false;
	}

	bool operator==(const Vector& other) {  //==
		if (this->x, this->y == other.x, other.y) {
			return true;
		}
		return false;

	}
	bool operator=(const Vector& other) { 
		if (this->x, this->y = other.x, other.y) {
			return true;
		}
		return false;
	}
};
int main() {
	Vector obj = Vector(5, 8);
	Vector obj2 = Vector(10, 8);
	obj.PrintInfo();
	obj2.PrintInfo();
	cout << "-------------------" << endl;
	Vector obj3 = obj + obj2;
	obj3.PrintInfo();
	cout << "-------------------" << endl;
	Vector obj4 = obj - obj2;
	obj4.PrintInfo();
	cout << "-------------------" << endl;
	++obj;
	++obj2;
	obj.PrintInfo();
	obj2.PrintInfo();
	cout << "-------------------" << endl;
	obj++;
	obj2++;
	obj.PrintInfo();
	obj2.PrintInfo();
	cout << "-------------------" << endl;
	if (obj3 > obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	cout << "-------------------" << endl;
	if (obj3 < obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	cout << "-------------------" << endl;
	if (obj3 >= obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	cout << "-------------------" << endl;
	if (obj3 <= obj4) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	cout << "-------------------" << endl;
	if (obj == obj2) {
		cout << "NICE" << endl;
	}

	else {
		cout << "Not nice" << endl;
	}
	cout << "-------------------" << endl;
	Vector obj5 = Vector(12, 13);
	obj5.PrintInfo();	
	cout << "-------------------" << endl;
}

