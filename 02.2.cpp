#include <iostream>
using namespace std;

class Road {
private:
    double l; int w;
public:
    Road() {//����������� ��������
        l = 0; w = 0;
    }
    void setL(int newL) {//��� ������������ ��������
        l = newL;
    }
    void setW(int newW) {//��� ������������ ��������
        w = newW;
    }
    void p() {//����� �� �����
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
