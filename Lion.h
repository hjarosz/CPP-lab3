#pragma once
#include "Animal.h"
class Lion: public Animal{
public:
	//konstrukro i destruktor
	Lion(int x): Animal(x){
		this->print();
	};

		virtual ~Lion(){
		std::cout<<"Bye Lion"<<std::endl;
	}

	//wypisywanie zwierzaka
	virtual void saySomething()const{
		std::cout<<"Lion: Aghr!"<<std::endl;

	}
	virtual void print() const{
		std::cout<<"Animal with age "<<this->age<<", Lion"<<std::endl;
	}
	


};
