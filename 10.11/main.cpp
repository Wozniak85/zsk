#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		
		void getData();
		Worker(){
			cout<<"Konstruktor domy�lny"<<endl;
		}
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"destruktor"<<endl;
		}
};

void Worker::getData(){
	cout<<"Imi� i Nazwisko: "<<endl;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
	{
		cout<<"konstruktor parametryczny"<<endl;
	}
	
	void createObjectWorker(){
		Worker worker;
		cout<<"Wywo�ano funkcj� createObjectWorker"<<endl;
	}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	// Worker Kowalski;
	// Worker Nowak;
	
	// Worker* p_nowak = new Worker("Janusz", "Nowak");
	// p_nowak->getData();
	// delete p_nowak;
	
	createObjectWorker();
	Worker kowalski;
	return 0;
}
