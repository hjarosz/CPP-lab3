#pragma once
#include <iostream>

class Animal{
public:
	//konstruktory i destruktor
	Animal() {}; 
	Animal(int x):age(x) {};
	virtual ~Animal() {};

	//wirtualna funkcja
	virtual void saySomething() const{};
	virtual void print() const{};

	//wiek
	int age;
};