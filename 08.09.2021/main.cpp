#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class worker {
	public:
// deklaracja zmiennych cz³onkowskich (w³aœciwoœci)
	string name="Janusz";
	string surname;
	
// definicja funkcji cz³onkowskiej (metoda)
	void showData(){
		cout << "Imiê";
	};
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
