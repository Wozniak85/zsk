
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
		
		Car(){
		}
		
		Car(int id, string brand, string model, string color);
		
		Car(int id);
		
		Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, int pPrice, Date pdateOfProduction);
};

void Car::getData(){
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nData Produkcji: "<<dateOfProduction.yyyy<<"\nMoc: "<<power<<"\nKolor: "<<color<<"\nCena: "<<price;
}

Car::Car(int pId){
		
}

Car::Car(int pId, string pBrand, string pModel, string pColor){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
}

Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, int pPrice, Date pDateOfProduction){
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	dateOfProduction=pDateOfProduction;
		
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car Tesla(8, "Tesla", "T430", "Czarny", 490, 1500000, {13, 10, 2021});
	Tesla.getData();
	
	Car fiat;
	fiat.getData();
	
	Car bmw(12, "BMW", "X6", "Czarny");
	bmw.getData();

	Car *wsk;
	wsk=&bmw;
	wsk->getData();
	wsk->brand="Jaguar";
	wsk->getData();
	
	return 0;
}
