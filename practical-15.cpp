#include <iostream>
#include <iomanip>
using namespace std;

class product
{
protected :
    int id;
    string name;
    string manufacturer;
    double price;
public :
    product(int Id,string Name,string Manufacturer, double Price)
    {
        id = Id;
        name = Name;
        manufacturer = Manufacturer;
        price = Price;
    }
    virtual void putdata() = 0;

};
class smartwatch : protected product
{
protected :
    double dialSize;
public :
    smartwatch(int Id,string Name,string Manufacturer, double Price, double DialSize) : product(Id, Name, Manufacturer, Price)
    {
        dialSize = DialSize;
    }

    void putdata()
    {
        cout << "Id : "<< id  <<  " Name : "<< name  <<" Manufacturer : " << manufacturer  << " Price : "<< price;
        cout << " dial size : "<< dialSize << endl;
    }
};

class bedsheet : protected product
{
protected :
    double width;
    double height;
public :
    bedsheet(int Id,string Name,string Manufacturer, double Price, double Width, double Height) : product(Id,Name,Manufacturer,Price)
    {
        width = Width;
        height = Height;
    }

    void putdata()
    {
        cout  <<"ID : "<< id  << " Name : "<< name  << " manufacturer : " << manufacturer  <<" Price : " << price;
        cout << " Width : " << width <<" Height :" << height << endl;
    }
};
int main()
{
    int choice,id;
    string name, manufacturer;
    double price, height, width, dialsize;
    cout << "enter 1 : smart watch menu \nenter 2 : bedsheet menu" << endl;
    cin >> choice;
    fflush(stdin);

    switch(choice)
    {
    case 1 :
        cout << "***** ENTER BEDSHEET DATA *****" << endl << endl;
        cout << "Enter product id : " << endl;
        cin >> id;
        fflush(stdin);
        cout << "Enter product name: " << endl;
        getline(cin,name);
        fflush(stdin);
        cout << "Enter product manufacturer : " << endl;
        getline(cin, manufacturer);
        cout << "Enter product price : " << endl;
        cin >> price;
        cout << "Enter product width : " << endl;
        cin >> width;
        cout << "Enter product height : " << endl;
        cin >> height;
        {
            bedsheet b(id,name,manufacturer,price,width,height);
            b.putdata();
        }
        break;
    case 2 :
        cout << "***** ENTER smart watch DATA *****" << endl << endl;
        cout << "Enter product id : " << endl;
        cin >> id;
        fflush(stdin);
        cout << "Enter product name: " << endl;
        getline(cin,name);


        cout << "Enter product manufacturer : " << endl;
        getline(cin, manufacturer);
        cout << "Enter product price : " << endl;
        cin >> price;
        cout << "Enter product dialsize : " << endl;
        cin >> dialsize;
        {

            smartwatch s(id,name,manufacturer,price,dialsize);
            s.putdata();
        }
        break;
    default :
        cout << "enter valid input ! " << endl;
    }

    return 0;
}
