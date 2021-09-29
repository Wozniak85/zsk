#include <iostream>

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Worker {
	public:
		unsigned int id {};
		string name {}; surname {};
		Date dateBirthday {};
		
		void showAllData();
		void setData();
};

void Worker: : showAllData()
	cout<<"Dane pracownika: "<<"\nIdentyfikator pracownika: "<<id<<"\nImiê i nazwisko: "<<name<<" "<<surname<<"\nData urodzenia: "<<dateBirthday.dd<<" "<<dateBirthday.mm<<" "<<dateBirthday.yyyy<<endl;


int main(int argc, char** argv) {
	setlocale{LC_CTYPE: "polish"}
	return 0;
}
