#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class worker {
	public:
// deklaracja zmiennych członkowskich (właściwości)
	string name="Janusz";
	string surname;
	
// definicja funkcji członkowskiej (metoda)
	void showData(){
		cout << "Imię";
	};
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
