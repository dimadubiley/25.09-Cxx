#include <iostream>

using namespace std;

class Fraction {
private:
    int a;
    int b;

public:
    Fraction() {
        a = 0;
        b = 1;
    }

    Fraction(int n, int d) {
        a = n;
        if (d != 0)
            b = d;
        else {
            cout << "Error! We found '0', now this '1'" << endl;
            b = 1;
        }
    }

    void print() const {
        cout << a << "/" << b << endl;
    }
};

int main() {
    Fraction f1;
    Fraction f2(3, 4);

    f1.print();
    f2.print();

}
