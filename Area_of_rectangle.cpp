/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float breadth;
};

float calculateArea(Rectangle rect) {
    return rect.length * rect.breadth;
}

int main() {
    Rectangle rect;
    cout << "Enter length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter breadth of the rectangle: ";
    cin >> rect.breadth;

    float area = calculateArea(rect);
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

/*Output
Enter length of the rectangle: 20
Enter breadth of the rectangle: 10
Area of the rectangle: 200
*/
