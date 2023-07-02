#include <iostream>
using namespace std;

class Road {
private:
    double l; int w;
public:
    Road() {//присваивает значения
        l = 0; w = 0;
    }
    void setL(int newL) {//для присваивания значений
        l = newL;
    }
    void setW(int newW) {//для присваивания значений
        w = newW;
    }
    void p() {//вывод на экран
        cout << "Length: " << l << endl;
        cout << "Width: " << w << endl;
    }
};

int main() {
    Road road;
    road.p();
    road.setL(100);
    road.setW(50);
    road.p();
    return 0;
}
