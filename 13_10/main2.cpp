#include <iostream>

using namespace std;

struct Date {
	public:
		int dd, mm, yyyy;
};

class Car {
	public:
		int id;
		string brand, model;
		unsigned short int power;
		string color;
		int price;
		Date dateOfProduction;
		
		void getData();
		
		Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, int pPrice, Date pdateOfProduction);
};

void Car::getData(){
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nData Produkcji: "<<dateOfProduction.yyyy<<"\nMoc: "<<power<<"\nKolor: "<<color<<"\nCena: "<<price;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car Tesla;
	
	Tesla.getData();
	return 0;
}
