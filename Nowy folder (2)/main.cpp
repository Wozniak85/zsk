#include <iostream>

using namespace std;

class Room {
	public:
		float length, width, height;
		
		inline float roomVolume(float length, float width, float height){
			return length*width*height;
		} 
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Room kuchnia;
	kuchnia.length=6;
	kuchnia.width=3.5;
	kuchnia.height=2.5;
	
	cout<<"Kuchnia\nD�ugo��: "<<kuchnia.length<<"m\nSzeroko��: "<<kuchnia.width<<"m\nWysoko��: "<<kuchnia.height<<"m\n\n"<<"Kubatura pomieszczenia: "<<kuchnia.roomVolume(kuchnia.length, kuchnia.width, kuchnia.height)<<endl<<"m^3";
	
	return 0;
}
