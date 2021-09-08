#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class worker {
	public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
	string name = "Janusz ";
	string surname;
	unsigned short int age;
	
// definicja funkcji cz3onkowskiej (metoda)
	void showData(){
		cout << "Imiê ";
	};
	
	void showName(){
		// wyœwietliæ imiê pobrane z obiektu
	}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	
// what da dog doin?
	
	pracownik.surname = "Kowalski ";
	pracownik.name = "Andrzej ";
	cout << "\nImiê i nazwisko: " << pracownik.name << " " << pracownik.surname << endl;
	
	pracownik.age = 36 ;
	cout << "\nWiek: " << pracownik.age ;
	cout << " " << pracownik.name;
	return 0;
}
