#include <iostream>
using namespace std;
class Shape
{
    float radius, length, width;
	public:
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
        cout << "Constructor called." << endl;
    }
    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }
    Shape()
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};
int main()
{
    float r, l, w;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;
    Shape s(r, l, w);
    cout << "\nPerimeter of Circle = " << s.circlePerimeter() << endl;
    cout << "Perimeter of Rectangle = " << s.rectanglePerimeter() << endl;
    return 0;
}
