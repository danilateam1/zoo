#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animal {
private:
	string name;
	static int num;
public:
	int id = 0;
string takename() {
	return name;
	}
Animal(string name) { this->name = name;
id=num++;
}
virtual void talk() {};
};
class Mammal : public Animal {
public:
	Mammal(string name):Animal(name){};
};
class Bird : public Animal {
public:
	Bird(string name ):Animal(name) {};
	void talk() {};
};
class Sparrow : public Bird {
public:
	Sparrow(string name):Bird(name) {};
	void talk() { cout << "wiy-wiy"; }

};
class Cock: public Bird {
public:
	Cock(string name):Bird(name) {};
	void talk() { cout << "ko-ko-ko"; }
};


class Human : public Mammal {
public:
	Human(string name):Mammal(name) {};
	void talk() { cout << "hello world"; }
};

class Bear : public Mammal {
public:
	Bear(string name):Mammal(name) {};
	void talk() { cout << "OWWOWOOWOWOW"; }
};

