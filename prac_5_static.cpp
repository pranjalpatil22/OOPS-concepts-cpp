#include <iostream>

using namespace std;

int i = 0;
class circle
{
    int radius;
public :
    circle()
    {
        i++;
        radius = 1;

    }
    circle(int n)
    {
        i++;
        radius = n;

    }
    circle(circle &n)
    {
        i++;
        radius = n.radius;
    }
    void display()
    {
        cout << "circle with radius " << radius << " has area " << 3.14*radius*radius << endl;
    }

    ~circle()
    {
        i--;
        cout << "one object is deleted " << endl;
        cout << "total active object are " << i << endl;
    }
};
int main()
{
    class circle o1;
    o1.display();

    circle o2(20);
    o2.display();

    circle o3(o1);
    o3.display();
    return 0;
}
