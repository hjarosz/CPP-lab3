#pragma once
#include "Animal.h"

class Zoo{
public:
	//konstruktor i destruktor
	Zoo(std::string name, int size): name(name), size(size){
		this->tab=new Animal* [size];
		for(int i=0; i<size; ++i) tab[i]=nullptr;
	}

	~Zoo(){
		for(int i=0; i<size; ++i) delete tab[i];
		std::cout<<name<<" zoo - closed"<<std::endl;
		delete [] this->tab;
	}


	//wypisywanie nazwy 
	void print() const{
		std::cout<<"Zoo: "<<name<<std::endl;
		for(int i=0; i<this->size; ++i){
			if(this->tab[i]==nullptr) std::cout<<"Enclosure "<<i<<": empty"<<std::endl;
			else {
				std::cout<<"Enclosure "<<i<<": ";
				this->tab[i]->print();
			}
		}

	}

	Animal* insert(int x, Animal* obj){
		if(this->tab[x]==nullptr){
			this->tab[x]=obj;
			return 0;
		}
		return nullptr;
	};
	Animal* insert(Animal* obj){
		for(int i=0; i<this->size; ++i) if(this->tab[i] == nullptr){
			this->tab[i]=obj;
			return 0;
		}
		return obj;
	};

	void reorganize(int x) {
		int counter=numOfAnimals();
		if(counter>x) std::cout<<"There is more than "<<x<<" animals in zoo, resize is impossible"<<std::endl;
		else{
			counter=0;
			Animal **tmp=tab;
			tab=new Animal* [x];

			for(int i=0; i<size; ++i) if(tmp[i]!=nullptr){
				tab[counter]=tmp[i];
				counter++;
			}
			for(; counter<x; ++counter) tab[counter] = nullptr;
			this->size=x;
			delete [] tmp;
		}

	};

	Animal* remove (int x) {
		Animal* tmp=this->tab[x];
		this->tab[x]=nullptr;
		return tmp;
	};
	int numOfAnimals() {
		int counter=0;
		for(int i=0; i<this->size; ++i) if(this->tab[i] != nullptr) counter++;
		return counter;
	};


	std::string name;
	Animal** tab=nullptr; //tablica imitujaca klatki
	int size;
};