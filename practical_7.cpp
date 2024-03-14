#include <iostream>
using namespace std;

class operation
{
    float a,b;

public :
    void getdata()
    {
        cout << "Enter real part : "<<endl;
    cin >> a;
    cout  << "Enter imaginary part : "<<endl;
    cin >> b;

    }
    operation operator + (class operation &o)
    {
        operation temp;
        temp.a = a + o.a;
        temp.b = b + o.b;
        return temp;
    }

    operation operator - (class operation &o)
    {
        operation temp;
        temp.a = a - o.a;
        temp.b = b - o.b;
        return temp;
    }

    friend operation operator * (class operation &o, class operation &o1)
    {

        operation temp;
        temp.a = (o.a*(o1.a)- o.b*(o1.b));
        temp.b = (o.a*(o1.b)+ o.b*(o1.a));
        return temp;
    }
    friend operation operator / (class operation &o, class operation &o1)
    {
        operation temp;
        temp.a = (o.a*(o1.a) + o.b*(o1.b)) / ((o1.a)*(o1.a) + (o1.b)*(o1.b));
        temp.b = (o.b*(o1.a) - o.a*(o1.b)) / ((o1.a)*(o1.a) + (o1.b)*(o1.b));
        return temp;

    }

    void operator ! ()
    {
        a = -a;
        b = -b;
    }
    void display() const{
    if(b>0)
        cout << a << " + " << b << "i" << endl;
        else
    cout << a << b << "i" << endl;
    }

};
int main()
{
    class operation obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();

    cout << "choose operation " << endl;
    cout << " (+) addition"<< endl << " (-) subtraction"<<endl << " (*) multiplication" << endl << " (/) division "<< endl << " (!) negation" << endl;
    char choice;
    cin >> choice;

    switch(choice)
    {

    case '+' :
        {
            obj3 = obj1 + obj2;
            obj3.display();
            break;
        }
        case '-' :
        {
            obj3 = obj1 - obj2;
            obj3.display();

            break;
        }
        case '*' :
        {
            obj3 = obj1*obj2;
            obj3.display();
            break;
        }
        case '/' :
        {
             obj3 = obj1/obj2;
            obj3.display();

            break;
        }
        case '!' :
        {
            !obj1;
            obj1.display();
            !obj2;
            obj2.display();
            break;
        }
        default :
            cout << "invalid input" << endl;
    }



    return 0;
}
