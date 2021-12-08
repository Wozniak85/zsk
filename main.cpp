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
	cout<<"Nazwa: "<<Name<<"\nSmak: "<<Taste<<"\nIloœæ: "<<Weight<<"g"<<"\nKalorie: "<<Callories<<"kcal"<<endl<<endl;
}

void VeganFood::getFood(){
	cout<<"Nazwa: "<<Name<<"\nSmak: "<<Taste<<"\nIloœæ: "<<Weight<<"g"<<"\nKalorie: "<<Callories<<"kcal"<<"\nZastêpczy sk³adnik miêsa: "<<MeatPlaceHolder<<"\nZastêpczy sk³adnik miêsa: "<<MilkPlaceHolder<<endl<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Food Pizza;
	Pizza.Name="Pizza";
	Pizza.Taste="S³ony";
	Pizza.Weight=100;
	Pizza.Callories=300;
	Pizza.getFood();
	
	VeganFood VBurg;
	VBurg.Name="Burger Vegañski";
	VBurg.Taste="S³ony";
	VBurg.Weight=630;
	VBurg.Callories=1000;
	VBurg.MeatPlaceHolder="Ciecierzyca";
	VBurg.MilkPlaceHolder="Soja";
	
	VBurg.getFood();
	return 0;
}
