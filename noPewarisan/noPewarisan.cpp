#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya Funcation dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkanalan() {
		cout << "Hallo saya Funcation dari derived Class";
	}
};