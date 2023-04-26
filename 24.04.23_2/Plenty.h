#pragma once
#include <string>
#include <iostream>
class Plenty
{
private:
	int* array;
	int size;
	friend std::ostream& operator<<(std::ostream&, Plenty&);
public:
	Plenty(int* array, int size) {
		this->size = size;
		this->array = new int[size];
		for (int i = 0; i < this->size; i++) {
			this->array[i] = array[i];
		}
	}
	Plenty(int x) {
		this->size = 1;
		this->array = new int[this->size];
		this->array[0] = x;
	}
	Plenty() :Plenty(0) {};
	Plenty(const Plenty& plenty) {
		this->array = new int[plenty.size];
		for (int i = 0; i < plenty.size; i++) {
			this->array[i] = plenty.array[i];
		}
		this->size = size;
	}
	~Plenty() {
		if (this->array) {
			delete[]this->array;
		}
	}
	
	std::string getElements();
	void addElement(int x);
	void operator+(const int& x);
};

