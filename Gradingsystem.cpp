//Abhinav Rakhunde
//PRN: 24070123001
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0 to 100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 80)
        cout << "Grade: B" << endl;
    else if (marks >= 70)
        cout << "Grade: C" << endl;
    else if (marks >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
/*
Enter your marks (0 to 100): 89
Grade: B
*/