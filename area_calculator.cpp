#include <iostream>
using namespace std;

int main() {
    int shapeType;
    float side, area, length, width, base, height, radius, pi = 3.14;

    cout << "Choose a geometric shape to calculate its area:\n";
    cout << "1 - Square\n";
    cout << "2 - Rectangle\n";
    cout << "3 - Triangle\n";
    cout << "4 - Circle\n";
    cin >> shapeType;

    switch (shapeType) {
        case 1:
            cout << "Enter the length of one side:\n";
            cin >> side;
            if (side <= 0)
                cout << "Error: side must be positive.\n";
            else {
                area = side * side;
                cout << "Area = " << area << "\n";
            }
            break;

        case 2:
            cout << "Enter length and width:\n";
            cin >> length >> width;
            if (length <= 0 || width <= 0)
                cout << "Error: dimensions must be positive.\n";
            else {
                area = length * width;
                cout << "Area = " << area << "\n";
            }
            break;

        case 3:
            cout << "Enter base and height:\n";
            cin >> base >> height;
            if (base <= 0 || height <= 0)
                cout << "Error: base and height must be positive.\n";
            else {
                area = (base * height) / 2;
                cout << "Area = " << area << "\n";
            }
            break;

        case 4:
            cout << "Enter the radius:\n";
            cin >> radius;
            if (radius <= 0)
                cout << "Error: radius must be positive.\n";
            else {
                area = pi * radius * radius;
                cout << "Area = " << area << "\n";
            }
            break;

        default:
            cout << "Invalid option selected.\n";
            break;
    }

    return 0;
}
