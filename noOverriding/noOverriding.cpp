#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya Funcation dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya Funcation dari derived Class";
	}
};