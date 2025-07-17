//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x == 0 && y == 0)
        cout << "Point lies at the Origin." << endl;
    else if (x == 0)
        cout << "Point lies on the Y-axis." << endl;
    else if (y == 0)
        cout << "Point lies on the X-axis." << endl;
    else if (x > 0 && y > 0)
        cout << "Point lies in Quadrant I." << endl;
    else if (x < 0 && y > 0)
        cout << "Point lies in Quadrant II." << endl;
    else if (x < 0 && y < 0)
        cout << "Point lies in Quadrant III." << endl;
    else
        cout << "Point lies in Quadrant IV." << endl;

    return 0;
}

/* OUTPUT:
Enter x coordinate: 2
Enter y coordinate: 4
Point lies in Quadrant I.

*/
