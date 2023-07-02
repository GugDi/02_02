#include <iostream> 
class Road {	//Интерфейс класса
public:
	double length;
	int width;
	Road();
	Road(double newLength, int newWidth);
};
Road::Road(double newLength, int newWidth) {
	length = newLength;
	width = newWidth;
};
Road::Road() {		// Реализация класса
	width = 555.5;
	length = 2;
};
int main() {
	using namespace std;
	Road road2(333.3, 8);
	//road2 =Road(333.3, 8);
	cout << "Before access: \n";
	cout << "road2.length: " << road2.length << endl;
	cout << "road2.Width: " << road2.width << endl;
	return 0;
}
