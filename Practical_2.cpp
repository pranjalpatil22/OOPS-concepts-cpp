#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
struct employee
{
private :
    string name;
    int id;
    string qualification;
    float experience;
    long int contact;

public :
    void getdata()
    {
        cout << "Enter name of the employee : " << endl;
        getline(cin, name);
      getline(cin,name);
        cout << "Enter ID of the employee : " << endl;
        cin >> id;
        cin.ignore();
        cout << "Enter Qualification of the employee : " << endl;
        getline(cin, qualification);
        cout << "Enter Experience of the employee    : " << endl;
        cin >> experience;
        cout << "Enter contact number of the employee : " << endl;
        cin >> contact;
    }
    void putdata()
    {
        cout << "Employee name  : " << name <<endl;
        cout << "Qualification  : " << qualification <<endl;
        cout << "Experience     : " << experience << endl;
        cout << "Contact Number : " << contact << endl;

    }

    void check(int Id,int i)
    {
        if(Id==id)
            putdata();
        else
            cout << "ERROR : ENTERRED EMPLOYEE ID DOES NOT EXIST for "<< i+1<<" employee" << endl;
    }

};
int main()
{
    int id;
    int n;
    employee e[1000];
    cout << "Enter number of employee between 0-1000 :" << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cout << "Enter data for " << i+1 << " employee" << endl;
        e[i].getdata();
        cin.ignore();
    }

    system("cls");
    char ch;

 do {
        cout << "Enter employee id  :" << endl;
        cin >> id;

        // Check the entered ID for each employee
        for (int i = 0; i < n; i++) {
            e[i].check(id,i);
        }

        cout << "Press Y to get another employee detail, Press N to exit" << endl;
        cin >> ch;
        if(ch == 'y' || ch == 'Y')
        {
             cout << "Enter employee id  :" << endl;
             cin >> id;
             for (int i = 0; i < n; i++) {
            e[i].check(id,i);
        }
        cout << "Press Y to get another employee detail, Press N to exit" << endl;
        if(ch == 'n' || ch == 'N')
            break;
        }
         if(ch == 'n' || ch == 'N')
            break;
    } while (1);

    return 0;
}
