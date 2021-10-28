#include <iostream>
#include <cmath>
#define USE_MATH_DEFINES
using namespace std;

int main()
{
    const double M_PI = 3.14159265358979323846;
    double b, x, z, y;
    cin >> z >> y >> x;
    b = (pow(z, 2 * x) + pow(y, -1) * cos(z + y) * x) / (x + 1) + sin((45 * M_PI) / 180);
    cout << b;
    cout << "Thanks" << endl;
}
