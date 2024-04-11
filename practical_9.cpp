#include <iostream>
using namespace std;

class centimeter;
class milimeter
{
    float mm;
public :
    milimeter()
    {
        mm = 0.0;
    }

    void getdata()
    {
        cout << "enter the value of mm : " << endl;
        cin >> mm;
    }
    float value()
    {
        return mm;
    }
     milimeter(centimeter o);
};
class centimeter
{
    float cm;
public :
    centimeter()
    {
        cm = 0.0;
    }
    void getdata1()
    {
        cout << "enter the value of cm : " << endl;
        cin >> cm;
    }

    float value1()
    {
        return cm;
    }

    centimeter(milimeter o)
    {
        cm = o.value()/10;
        cout << "measurement in cm : " << cm << endl;
    }
};
milimeter :: milimeter(centimeter o)
{
    mm = o.value1()*10;
    cout << "measurement in mm : " << mm << endl;
}
int main()
{   centimeter c;
    milimeter m;
    int choice;
    cout << "Enter 1 : mm to cm converter " << endl;
    cout << "Enter 2 : cm to mm converter " << endl;
    cin >> choice;
    switch(choice)
    {
    case 1 :
        m.getdata();
        c = m;
        break;
    case 2:
         c.getdata1();
        m = c;
        break;
    default :
        cout << "invalid input ! " << endl;
    }
    return 0;
}
