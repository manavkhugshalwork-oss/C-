#include <iostream>
using namespace std;
int main()
{
    float r, h, v;
    cout << "Enter the radius of cylinder : ";
    cin >> r;
    cout << "Enter the height of cylinder : ";
    cin >> h;

    v = 3.14 * r * r * h;
    cout << "The volume of the cylinder is : " << v;
    return 0;
}