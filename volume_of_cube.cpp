/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;
class Cube{
public:
    float side;
    float volume() {
        return side * side * side;
    }
};

float calculateVolume(Cube cub) {
    return cub.side * cub.side * cub.side;
}

int main() {
    Cube cub;
    cout << "Enter side length of the cube: ";
    cin >> cub.side;
    cout << "Volume of the cube using member function: " << cub.volume() << endl;

    float vol = calculateVolume(cub);
    cout << "Volume of the cube using outside function: " << vol << endl;

    return 0;
}

/*Output
Enter side length of the cube: 5
Volume of the cube using member function: 125
Volume of the cube using outside function: 125
*/
