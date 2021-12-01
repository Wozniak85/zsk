#include <iostream>
using namespace std;

struct date{
	int dd, mm, yyyy;
};

class Incident{
	private:
		date dateA;
		string name;
	public:
		Incident(date pDate, string pName);
		Incident(string pName);
		Incident(const Incident &copy);
		
		void getData();
};
Incident::Incident(date pDate, string pName){
	dateA.dd=pDate.dd;
	dateA.mm=pDate.mm;
	dateA.yyyy=pDate.yyyy;
	name=pName;
}

Incident::Incident(string pName){
	name=pName;
}

Incident::Incident(const Incident &copy){
	dateA.dd=copy.dateA.dd;
	dateA.mm=copy.dateA.mm;
	dateA.yyyy=copy.dateA.yyyy;
	name=copy.name;
}

void Incident::getData(){
	cout<<dateA.dd<<endl<<dateA.mm<<endl<<dateA.yyyy<<endl<<name<<" incident"<<endl<<endl;
}


int main(){
	setlocale(LC_CTYPE,"polish");
	Incident trollge({1,12,2021}, "Trollge");
	trollge.getData();
	return 0;
}
