#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE), "polish");
	int x, y;
	x=10;
	y=x;
	
	int *p_test;
	p_test=&x;
	
	cout<<p_test<<endl; //0x6ffe0c;
	
	p_testy=&y;
	cout<<p_testy<<endl; //0x6ffe10;
	return 0;
}
