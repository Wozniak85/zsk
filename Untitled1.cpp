#include <iostream>
using namespace std;

//klasa bazowa
class Worker{
	public:
		string name {""};
		string surname {""};
		string getData() {
			return name + " " + surname;
		}
};

//klasa pochodna
class Teacher: public Worker{
    public:
	string classesAtSchool{""};
	string getData(){
		return name + " " + surname + " " + classesAtSchool + "\n";
	}
};
class SupervisorTeacher: public Teacher{
public:
    static string classAtSchool{""};
    string getData(){
        return name + " " + surname + " " + classesAtSchool + " " + supervisingClass + "\n";
};

int main() {
	setlocale(LC_CTYPE,"polish");
	Teacher nowak;
	nowak.name="Marek";
	nowak.surname = "Nowak";
	nowak.classesAtSchool = "PO";
	cout<<"Dane nauczyciela: "<<nowak.getData()<<endl;
	return 0;
}
