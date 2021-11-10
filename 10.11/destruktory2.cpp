#include <iostream>
using namespace std;

class Animal{
	public:
		static unsigned short int count;
		
		Animal();
		~Animal();
		
};

unsigned short int Animal::count = 0;

void createObjectAnimal(){
	Animal newAnimal;
}

Animal::Animal(){
	count++;
	cout<<"Liczba obiektów: "<<count<<endl;
}

Animal::~Animal(){
	count--;
	cout<<"Liczba obiektów: "<<count<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Animal Dog;
	Animal Cat;
	Animal Hamster;
	Animal Mouse;
	return 0;
}
