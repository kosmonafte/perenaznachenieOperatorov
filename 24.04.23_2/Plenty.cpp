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

int Plenty::getElement(int x) {
	return this->array[x];
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

void Plenty::delElement(int x) {
	int* arr;
	int j = 0;
	int elem = 0;
	for (int i = 0; i < this->size; i++) {
		if (this->array[i] == x) {
			j++;
			elem = i;
		}
	}
	if (j == 0) {
		return;
	}
	else {
		arr = new int[this->size - 1];
		for (int i = 0; i < elem; i++) {
			arr[i] = this->array[i];
		}
		for (int i = elem + 1; i < this->size; i++) {
			arr[i - 1] = this->array[i];
		}
	}
	delete[]this->array;
	this->array = arr;
	this->size--;
}

void Plenty::operator+(const int& x) {
	int i = 0;
	for (int j = 0; j < this->size; j++) {
		if (this->array[j] == x) {
			i++;
		}
	}
	if (i == 0) {
		int* nArray = new int[this->size + 1];
		for (int i = 0; i < this->size; i++) {
			nArray[i] = this->array[i];
		}
		nArray[this->size] = x;
		delete[]this->array;
		this->array = nArray;
		this->size++;
	}
}

Plenty Plenty::operator+(Plenty& plenty) {
	Plenty plnty(*this);
	for (int i = 0; i < plenty.size; i++) {
		plnty += plenty.getElement(i);
	}
	return plnty;
}

Plenty Plenty::operator+=(Plenty& plenty) {
	Plenty plnty(*this);
	for (int i = 0; i < plenty.size; i++) {
		plnty += plenty.getElement(i);
	}
	return plnty;
}

void Plenty::operator+=(const int& x) {
	int i = 0;
	for (int j = 0; j < this->size; j++) {
		if (this->array[j] == x) {
			i++;
		}
	}
	if (i == 0) {
		int* nArray = new int[this->size + 1];
		for (int i = 0; i < this->size; i++) {
			nArray[i] = this->array[i];
		}
		nArray[this->size] = x;
		delete[]this->array;
		this->array = nArray;
		this->size++;
	}
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