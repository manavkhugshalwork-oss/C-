#include <iostream>
using namespace std;
int main()
{

    float u, v, a, distance;
    cout << "Enter the initial speed : ";
    cin >> u;
    cout << "Enter the final speed : ";
    cin >> v;
    cout << "Enter the acceleration : ";
    cin >> a;

    distance = (v * v - u * u) / (2 * a);
    cout << "The distance is : " <<distance;
    return 0;
}
 
