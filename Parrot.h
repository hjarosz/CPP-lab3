#pragma once
#include "Animal.h"

class Parrot: public Animal{
public:
	//konstruktor i destruktor
	Parrot(int x, std::string name): Animal(x), name(name){
		this->print();
	};

	virtual ~Parrot(){
		std::cout<<"Bye Parrot"<<std::endl;
	}	

	//wypisywanie zwierzaka
	virtual void saySomething ()const{
		std::cout<<"Parrot: "<<name<<". "<<name<<"!"<<std::endl;

	}
		virtual void print() const{
		std::cout<<"Animal with age "<<this->age<<", Parrot: "<<this->name<<std::endl;
	}
	
	std::string name;
};
