#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
class employee
{
private :
    string name;
    int id;
    string qualification;
    float experience;
    long int contact;
    static float avgexp;

protected :

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
        avgexp = avgexp + experience;
        cout << "Enter contact number of the employee : " << endl;
        cin >> contact;
    }
    void putdata ()
    {
        cout << "Employee name  : " << name <<endl;
        cout << "Qualification  : " << qualification <<endl;
        cout << "Experience     : " << experience << " years"<< endl;
        cout << "Contact Number : " << contact << endl;
    }

    int check(int Id)
    {
        return (Id==id);

    }

public :

    static float avg(int n,int n1)
    {
        return avgexp/(n+n1);
    }

};
float employee::avgexp=0;

class teaching_emaplyee :  protected employee
{
private :
    string designation;
    string specialization;
    string pay_scale;


public :
    void gettempdata()
    {
        getdata();
        fflush(stdin);
        cout << "enter designation " << endl;
        getline(cin, designation);
        cout << "enter specialization " << endl;
        getline(cin, specialization);
        cout << "enter pay scale " << endl;
        getline(cin, pay_scale);
    }

    void puttempdata()
    {
        putdata();
        cout << "Designation    :" << designation << endl;

        cout << "specialization :" << specialization << endl;
        cout << "pay scale      :" << pay_scale << endl;

    }
    int searchtemp(int ID)
    {
        if(check(ID))
        {

            puttempdata();
            return 1; // Found
        }
        return 0;
//       else
//        cout << "ERROR : ENTERRED EMPLOYEE ID DOES NOT EXIST for "<< i+1<<" employee" << endl;

    }

};

class non_teching_emplyee : protected employee
{
    int salary;

public :
    int searchntemp(int ID)
    {
        if(check(ID))
        {

            putntempdata();
            return 1; // Found
        }
        return 0;
//       else
//        cout << "ERROR : ENTERRED EMPLOYEE ID DOES NOT EXIST for "<< i+1<<" employee" << endl;

    }
    void getntempdata()
    {
        getdata();
        cout << "enter salary (1000 - 30000) " << endl;
        cin >>salary;
    }
    void putntempdata()
    {
        putdata();
        cout << "salary        :" << salary << endl;
    }

};
int main()
{
    int id;
    int n,n1;
    employee e[1000];
    class teaching_emaplyee te[500];
    class non_teching_emplyee nte[500];
    cout << "Enter number of teaching employee between 0-500 :" << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cout << "Enter data for " << i+1 << " teaching employee" << endl<<endl;
        te[i].gettempdata();
        cin.ignore();
    }

    cout << "Enter number of non teaching employee between 0-500 :" << endl;
    cin >> n1;
    for(int i = 0; i<n1; i++)
    {
        cout << "Enter data for " << i+1 << " non teaching employee" <<endl;
        nte[i].getntempdata();
        cin.ignore();
    }
    system("cls");
    char ch;

    int choice;
    cout << "enter 1 for employee average experience and 2 for employee information "<< endl;
    cin >> choice;

    switch(choice)
    {
    case 1 :
        cout << "employee average experience is : " << employee::avg(n,n1);

        break;
    case 2 :

        do
        {
            cout << "Enter employee id  :" << endl;
            cin >> id;
            char idfound = false;
            // Check the entered ID for each employee
            char ptr = 1;

            if(ptr)
            {
                for (int i = 0; i < n || i < n1; i++)
                {
                    if(te[i].searchtemp(id) || nte[i].searchntemp(id))
                    {
                    idfound = true;
                    break;
                    }


            }
        }

//                else if(ptr) {
//                    for (int i = 0; i < n1; i++) {
//                        if(nte[i].searchntemp(id)) {
//                            idfound = true;
//                            break;
//                        }
//                    }
//                }
//        else
//            cout << "ERROR : ENTERRED EMPLOYEE ID DOES NOT EXIST for employee" << endl;
//


        if (!idfound)
            {
                cout << "ERROR!! ENTERED ID DOES NOT EXIST" << endl;
            }
            cout<<endl;
            cout << "Press Y to get another employee detail, Press N to exit" << endl;
            cin >> ch;
            cout<<endl;
        }
        while (ch == 'y' || ch == 'Y');
        break;
    }

    return 0;
}

