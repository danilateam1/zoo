#pragma once

#include "zoo.h"
#include "animal.h"
int Animal::num = 0;
int main(){
	Bear bear1("Misha");
	Bear bear2("Katya");
	Bear bear3("Mila");
	Sparrow spar1("Vadik");
	Sparrow spar2("Petya");
	Sparrow spar3("Nina");
	Cock coc1("Cock");
	Cock coc2("Cock jenckiy");
	Human man1("John");
	Human man2("Mike");
	std::vector <Animal*> arr = { &bear1, &bear2,&spar1,&spar3,&coc1,&coc2,&man1 };
	Zoo zoo(arr);
//	zoo.print();
//	zoo.talk();

//	zoo.add(&man2);
	//zoo.removeEnd();
	zoo.print();
	cout << "   " << endl;
zoo.remove(1);

	zoo.print();

	return 0;
};