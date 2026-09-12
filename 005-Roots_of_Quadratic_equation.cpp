#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout << "Enter the value of coefficent a : ";
    cin >> a;
    cout << "Enter the value of coefficent b : ";
    cin >> b;
    cout << "Enter the value of coefficent c : ";
    cin >> c;

    r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    cout << "The roots are : " << r1 << " " << r2;
    return 0;
}
