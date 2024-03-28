#include <iostream>
using namespace std;

class experience
{
    int year;
    int month;
public :
    experience()
    {
        year = 0;
        //month = 0;
    }

     experience(float exp)
    {
        year = exp;
        month = (exp - year) * 12;
    }

    void putdata() const
    {
        cout << " employee experience is " << year << " years and " << month << " months " << endl;
    }
};
int main()
{
    float exp;
    cout << "enter employee experience " << endl;
    cin >> exp;
    experience ex(exp);
    ex.putdata();
    return 0;
}

