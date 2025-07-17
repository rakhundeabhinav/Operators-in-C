//Abhinav Rakhunde
//PRN: 24070123001

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is Positive." << endl;
    else if (num < 0)
        cout << "The number is Negative." << endl;
    else
        cout << "The number is Zero." << endl;

    return 0;
}
/*OUTPUT:
Enter a number: -2
The number is Negative.
*/