//Write a function that takes length and breadth as input and returns the area of rectangle.
#include <iostream>
using namespace std;
float areaOfRectangle(float length, float breadth) {
    return length * breadth; 
}
int main() {
    float length, breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    float area = areaOfRectangle(length, breadth); 
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}  
