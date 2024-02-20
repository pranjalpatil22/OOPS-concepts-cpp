#include <iostream>

using namespace std;
int i = 0;
class area
{
    int radius;
public :
    area()
    {
        radius = 1;
       i++;

    }
    area(int n)
    {

        i++;
        radius = n;
    }

    area(class area &n)
    {
        i++;
        radius = n.radius;
    }
    void display()
    {
        cout << "circle with radius " << radius << " has area " << 3.14*radius*radius << endl;
    }

    ~area()
    {
        i--;
        cout << "one object is deleted " << endl;
        cout << "total active object are " << i << endl;
    }

};
int main()
{
    class area *o1,*o2,*o3;
    o1 = new area();
    o1->display();

    o2 = new area(20);
    o2->display();
     o3 = new area(*o1);

    delete o1;
    delete o2;
    o3->display();
    delete o3;


    return 0;
}
