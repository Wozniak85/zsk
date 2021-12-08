#include <iostream>
using namespace std;

class Food{
	public:
		string Name, Taste;
		float Weight, Callories;
		
		void getFood();
};

class VegetarianFood : public Food{
	public:
		string MeatPlaceHolder;
		
		void getFood();
};

class VeganFood : public VegetarianFood{
	public:
		string MilkPlaceHolder;
		
		void getFood();
};

void Food::getFood(){
	cout<<"Nazwa: "<<Name<<"\nSmak: "<<Taste<<"\nIlo��: "<<Weight<<"g"<<"\nKalorie: "<<Callories<<"kcal"<<endl<<endl;
}

void VeganFood::getFood(){
	cout<<"Nazwa: "<<Name<<"\nSmak: "<<Taste<<"\nIlo��: "<<Weight<<"g"<<"\nKalorie: "<<Callories<<"kcal"<<"\nZast�pczy sk�adnik mi�sa: "<<MeatPlaceHolder<<"\nZast�pczy sk�adnik mi�sa: "<<MilkPlaceHolder<<endl<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Food Pizza;
	Pizza.Name="Pizza";
	Pizza.Taste="S�ony";
	Pizza.Weight=100;
	Pizza.Callories=300;
	Pizza.getFood();
	
	VeganFood VBurg;
	VBurg.Name="Burger Vega�ski";
	VBurg.Taste="S�ony";
	VBurg.Weight=630;
	VBurg.Callories=1000;
	VBurg.MeatPlaceHolder="Ciecierzyca";
	VBurg.MilkPlaceHolder="Soja";
	
	VBurg.getFood();
	return 0;
}
