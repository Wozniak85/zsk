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
		float price;
		Date dateOfProduction;
		
		void getData();
		
		Car(){
			color="Czarny";
			brand="Tesla";
			model="CyberTruck";
			power=600;
			color="Czarny";
			price=1000000;
			dateOfProduction.yyyy=2019;
		}
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
