#include <iostream>
using namespace std;
int main()
{
    float s, a, d, n;
    cout << "Enter the basic salary : ";
    cin >> s;
    cout << "Enter the percentage of allowances : ";
    cin >> a;
    cout << "Enter the percentage of deductions : ";
    cin >> d;

    n = s + s * a/100 - s * d/100;

    cout << "The net salary is : " << n;
    return 0;
}