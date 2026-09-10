#include <iostream>
using namespace std;
int main()
{

    float u, v, a, speed;
    cout << "Enter the initial speed : ";
    cin >> u;
    cout << "Enter the final speed : ";
    cin >> v;
    cout << "Enter the acceleration : ";
    cin >> a;

    speed = (v * v - u * u) / (2 * a);
    cout << "The speed is : " << speed;
    return 0;
}