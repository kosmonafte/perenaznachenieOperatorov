#include "Plenty.h"
#include <iostream>
using namespace std;
string Plenty::getElements()
{
	string str;
	for (int i = 0; i < this->size; i++) {
		str.append(to_string(this->array[i]));
		str.append(" ");
	}
	return str;
}

void Plenty::addElement(int x)
{
	int* tmp = new int[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		tmp[i] = this->array[i];
	}
	tmp[this->size] = x;
	delete[]this->array;
	this->array = tmp;
	this->size++;
}

void Plenty::operator+(const int& x) {
	int* nArray = new int[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		nArray[i] = this->array[i];
	}
	nArray[this->size] = x;
	delete[]this->array;
	this->array = nArray;
	this->size++;
}

ostream& operator<<(ostream& output, Plenty& plenty)
{
	string str;
	for (int i = 0; i < plenty.size; i++) {
		str.append(to_string(plenty.array[i]));
		str.append(" ");
	}
	output << str;
	return output;
}