#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, y1, y2, d;
    cout << "Enter the coordinates of 1st point : ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of 2nd point : ";
    cin >> x2 >> y2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between the points is : " << d;
    return 0;
}
 
