#pragma once
#include "Animal.h"

class Sheep: public Animal {
public:

	//konstruktor i destruktor
	Sheep(int x): Animal(x){
		this->print();
	};

	virtual ~Sheep(){
		std::cout<<"Bye Sheep"<<std::endl;
	}

	virtual void print() const{
		std::cout<<"Animal with age "<<age<<", Sheep"<<std::endl;
	}


};