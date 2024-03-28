#include <iostream>
using namespace std;

class experience
{
    float exp ;
public :
    experience()
    {
        exp = 0;
    }
    experience(int year,int month)
    {
      exp = year + float(month)/12 ;
    }
   operator float()
   {
       return exp;
   }

};
int main()
{
    int year;
    int month;

    float temp;
    cout << "enter employee experience in months and year " << endl;
    cin >> year >> month;
    experience ex(year,month);
    temp = ex;
    cout << "experience is " << temp << endl;
    return 0;
}

