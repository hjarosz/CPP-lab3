#pragma once
#include "Animal.h"

class Cow: public Animal{
public:
	//konstruktor i destruktor
	Cow(int x): Animal(x){
		this->print();
	};

	~Cow(){
		std::cout<<"Bye Cow"<<std::endl;
	}

	//wypisywanie zwierzaka
	virtual void saySomething ()const{
		std::cout<<"Cow: Muu..."<<std::endl;
	}

	virtual void print() const{
		std::cout<<"Animal with age "<<this->age<<", Cow"<<std::endl;
	}	
		
	
};
