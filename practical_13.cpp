#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class employee
{
private:
    string name;
    int id;
    string qualification;
    float experience;
    long int contact;
    static float avgexp;

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
        avgexp = avgexp + experience;
        cout << "Enter contact number of the employee : " << endl;
        cin >> contact;

    }


    int check(int Id)
    {
        return (Id==id);

    }


 void putdata ()
    {
        cout << "Employee name  : " << name <<endl;
        cout << "Qualification  : " << qualification <<endl;
        cout << "Experience     : " << experience << " years"<< endl;
        cout << "Contact Number : " << contact << endl;

    }
    static float avg(int n,int n1)
    {
        return avgexp/(n+n1);
    }
};
float employee::avgexp=0;

class teaching_emaplyee : protected employee
{
    string designation;
    string specialization;
    string pay_scale;

public :

    void getdata()
    {
        employee :: getdata();
        fflush(stdin);
        cout << "enter designation " << endl;
        getline(cin, designation);
        cout << "enter specialization " << endl;
        getline(cin, specialization);
        cout << "enter pay scale " << endl;
        getline(cin, pay_scale);
    }

    void putdata()
    {
        employee :: putdata();
        cout << "Designation    :" << designation << endl;
        cout << "specialization :" << specialization << endl;
        cout << "pay scale      :" << pay_scale << endl;

    }
    int check(int Id)
    {
        if(employee ::check(Id))
        {
            putdata();
            cout<<endl;
            return true;
        }
        return false;
    }
};

class  non_teching_emplyee : protected employee
{
    double salary ;

public:

    void getdata()
    {
        employee::getdata();
        cout<<  "enter salary : " <<endl;
        cin >> salary;
    }

    void putdata()
    {
        employee::putdata();
        cout<<  "salary         : "<<salary;
    }

    int check(int Id)
    {
        if(employee::check(Id))
        {
            putdata();
            cout<<endl;
            return true;
        }
        return false;
    }

};


int main()
{
    int n,n1,i;
    int Id;
    char ch;
    int choice,exp;

    cout<<"enter the number of teaching employee from 1-500 : ";
    cin>>n;
    cout<<"enter the number of non teaching employee from 1-500 : ";
    cin>>n1;
    employee e[1000];
    teaching_emaplyee t[n];
    non_teching_emplyee nt[n1];
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout << "Enter data for " << i+1 << " teaching employee" <<endl;
        t[i].getdata();
        cout<<endl;
    }

    for(i=0; i<n1; i++)
    {
        cout << "Enter data for " << i+1 << " non teaching employee" <<endl;
        nt[i].getdata();
        cout<<endl;
    }

    system("cls");

    cout<<"(1) for employee details "<<endl;
    cout<<"(2) for average experience of employee "<<endl;

    cout<<"enter the choice : " << endl;
    cin>>choice;

    switch(choice)
    {
    case 1 :

        do
        {
            char idFound = false;

            cout <<endl<< "enter the employee id : ";
            cin >> Id;


            for (int i = 0; i < n || i < n1; i++)
                {

                    if(t[i].check(Id) || nt[i].check(Id))
                    {
                        idFound = true;
                        break;
                    }
                }

            if (!idFound)
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

    case 2 :
        cout<<endl<<"average experience : "<<employee::avg(n,n1);
        break;
    }

    return 0;

}
