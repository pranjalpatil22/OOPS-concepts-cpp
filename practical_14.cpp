#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class literature
{
    int unique_id;
    string title;

public:
    void getdata()
    {
        cout << "enter unique id : ";
        cin >> unique_id;
        fflush(stdin);
        cout << "enter title     : ";
        getline(cin, title);
    }
    void putdata() const
    {
        cout << setw(12) << left << unique_id << setw(50) << left << title;
    }
};

class e_literature : virtual protected literature
{
protected :
    string doi;

public:
    void getdata()
    {
        fflush(stdin);
        cout << "enter Doi : ";
        getline(cin, doi);
    }
    void putdata() const
    {
        cout << setw(12) << left << doi;
    }
};

class hard_bound : virtual protected literature
{

    int copies;

public:
    void getdata()
    {
        cout << "enter no of copies : ";
        cin >> copies;
    }
    void putdata() const
    {
        cout << left << copies;
    }
};

class book : protected e_literature, protected hard_bound
{
protected :
    int isbn;

public:
    void getdata()
    {
        literature::getdata();
        cout << "enter ISBN number : ";
        cin >> isbn;
        char choice;
        cout << "(E)copy or (H)ardbound : ";
        cin >> choice;
        if (choice == 'E' || choice == 'e')
        {
            e_literature::getdata();
        }
        else
        {
            hard_bound::getdata();
        }
    }
    void putdata() const
    {
         literature::putdata();
        cout << setw(12) << left << isbn;
        if (doi != "")
        {
            e_literature::putdata();
        }
        else
        {
            hard_bound::putdata();

        }
        cout << "\n";
    }

};

class magazine :  protected e_literature,  protected hard_bound
{

    int issn;

public:
    void getdata()
    {
        literature::getdata();
        cout << "enter ISSN number : ";
        cin >> issn;
        char choice;
        cout << "(E)copy or (H)ardbound : ";
        cin >> choice;
        if (choice == 'E' || choice == 'e')
        {
            e_literature::getdata();
        }
        else
        {
            hard_bound::getdata();
        }
    }
    void putdata() const
    {
        literature::putdata();
        cout << setw(12) << left << issn;
        if (doi != "")
        {
            e_literature::putdata();
        }
        else
        {
            hard_bound::putdata();
        }
        cout << endl;
    }

};

int main()
{
    book b[100];
    magazine m[100];
    char ch;
    int i = -1, k = -1;
    do
    {
        cout << "Enter 1 to add book data" << endl;
        cout << "Enter 2 to add magazine data" << endl;
        cout << "Enter 3 to list all books" << endl;
        cout << "Enter 4 to list all magazines" << endl;

        int choice;
        cout << endl
             << "Enter the choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            i++;
            b[i].getdata();
            cout << "-------------------------------------------------------" << endl;
            break;

        case 2:
            k++;
            m[k].getdata();
            cout << "-------------------------------------------------------" << endl;
            break;

        case 3:
            cout << "***** list of books *******" << endl;
            cout << setw(12) << left << "ID" << setw(50) << left << "Title" << setw(12) << left << "ISBN" << "DOI" << endl;
            for (int j = 0; j <= i; j++)
            {
                b[j].putdata();
            }
            break;

        case 4:
            cout << "***** list of magazines *******" << endl;
            cout << setw(12) << left << "ID" << setw(50) << left << "Title" << setw(12) << left << "ISSN" << "DOI/copies" << endl;
            for (int j = 0; j <= k; j++)
            {
                m[j].putdata();
            }
            break;

        default:
            cout << endl
                 << "Enter valid choice!!";
        }
        cout << endl
             << "Enter 'm' to go to the main menu. Press any other key to exit: ";
        cin >> ch;
        cout << endl;

    }
    while (ch == 'm' || ch == 'M');

    return 0;
}

