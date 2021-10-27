#include<iostream>
using namespace std;

class Rectangle{
	private:
		double sideA, sideB;
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		//prototyp konstruktora kopiujacego
		Rectangle(const Rectangle &);
};



int main(int argc, char** argv){
	setlocale(LC_CTYPE, polish)	
	
	return 0;
}

