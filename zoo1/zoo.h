#pragma once
#include <vector>
#include "animal.h"
class Zoo {
private:
	std::vector <Animal*> arr;
public:
	Zoo(vector <Animal*> arr) {
		this->arr = arr;;
	};
	void print() {
		for (int i = 0; i < arr.size(); i++) {
			cout << (*arr[i]).takename() <<"  " << (*arr[i]).id << endl;
		}
	}
	void talk() {
		for (int i = 0; i < arr.size(); i++) {
			cout << (*arr[i]).takename() << "  "; (*arr[i]).talk(); cout << "  " << endl;
		}
	}
	void add(Animal* x) {
		arr.push_back(x);
	}

	void removeEnd() {
		arr.pop_back();
	};

	void remove(int a) {
		for (int i = 0; i < arr.size(); i++) {
			if (a == (*arr[i]).id) {
				arr.erase(arr.begin()+i);
			}
		}
	}
};