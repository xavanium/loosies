//old imported program
#include <iostream>
#include <iomanip>
using namespace std;
void triangle_area(){
    double base, height;
    cout << "Input base and height: ";
    cin >> base >> height;
    cout << "The area is " << (base * height) / 2;
}
void square_area(){
    double side;
    cout << "Input the length of the side: ";
    cin >> side;
    cout << "The area is " << side * side;
}
void rectangle_area(){
    double width, length;
    cout << "Input the width and length: ";
    cin >> width >> length;
    cout << "The area is " << width * length;
}
void circle_area(){
    double diameter;
    cout << "Input the diameter (NOT RADIUS): ";
    cin >> diameter;
    cout << "The area is " << diameter/2 * 3.14;
}
void pgram_area(){
    double base, height;
    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "The area is " << base * height;
}
void rhomb_area(){
    double d1, d2;
    cout << "Enter diagonal 1 and 2: ";
    cin >> d1 >> d2;
    cout << "The area is " << d1 * d2 / 2;
}
void trap_area(){
    double b1, b2, height;
    cout << "Enter base 1 and base 2: ";
    cin >> b1 >> b2;
    cout << "Enter the height: ";
    cin >> height;
    cout << "The area is " << (b1 + b2) / 2 * height;
}
void ellipse_area(){
    double a, b;
    cout << "Input the semi-axes: ";
    cin >> a >> b;
    cout << "The area is " << 3.14 * a * b;
}
int main(){
    int run = 1;
    int choice;
    cout << "Welcome to the geometry calculator." << endl;
    while (run==1){
    cout << "What shape would you like to calculate the area of?" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Circle" << endl;
    cout << "5. Parallelogram" << endl;
    cout << "6. Rhombus" << endl;
    cout << "7. Trapezoid" << endl;
    cout << "8. Ellipse" << endl;
    cout << "9. Kite" << endl;
    cout << "> ";
    cin >> choice;
    cout << fixed << setprecision(2);
        switch (choice){
            case 1:
                triangle_area();
                break;
            case 2:
                square_area();
                break;
            case 3:
                rectangle_area();
                break;
            case 4:
                circle_area();
                break;
            case 5:
                pgram_area();
                break;
            case 6:
            case 9:
                rhomb_area();
                break;
            case 7:
                trap_area();
                break;
            case 8:
                ellipse_area();
                break;
            default:
                cout << "You ruined everything." << endl;
        }
        cout << endl;
        cout << "Enter 1 if you would like to run the program again: ";
        cin >> run;
        if (run != 1){
            cout << "Goodbye!" << endl << endl;
        }
    }
    return 0;
}