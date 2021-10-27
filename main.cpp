#include <iostream>
using namespace std;

class Worker {
	public:
		int id {8};
		string name {"Katarzyna"};
		string surname {"Nowak"};
		
		Worker();
		Worker(int pId=1, string pName="Name", string pSurname="Surname");
		
		void getData();
};

	Worker::Worker(){
		id=13;
		
	}

	Worker::Worker(int pId, string pName, string pSurname){
		id=pId;
		name=pName;
		surname=pSurname;
	}

	void Worker::getData(){
		cout<<"id: "<<id<<"\nImiê: "<<name<<" "<<"Nazwisko: "<<surname<<endl;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker nowak2 = Worker();
	nowak2.getData();
	
	Worker nowak = Worker();
	nowak.getData();
	Worker nowak1 = Worker(10,"Name", "Surname");
	return 0;
}
