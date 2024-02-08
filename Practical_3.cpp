#include <iostream>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

class cars
{
    string modelName;
    float carPrice;
    string fuelType;
    int mileage;
    string transmission;
    double tankCapacity;
    int seatingCap;
    string airbag;

public :
    void getdata(void)
    {
        fflush(stdin);
        cout << "enter model name of "  <<  endl;
        getline(cin,modelName);

        cout << "enter car price of "  <<  endl;
        cin >> carPrice;
        fflush(stdin);

        cout << "enter fuel type " << endl;
        getline(cin, fuelType);

        cout << "enter car mileage of "  <<  endl;
        cin >> mileage;
        fflush(stdin);

        cout << "enter car transmission of "  <<  endl;
        getline(cin,transmission);

        cout << "enter car tank capacity of "  <<  endl;
        cin >> tankCapacity;
        fflush(stdin);

        cout << "enter car seating capacity of "  <<  endl;
        cin >> seatingCap;
        fflush(stdin);

        cout << "enter  airbags (yes/no) of "  <<  endl;
        getline(cin, airbag);

    }

    void displayCar(int i)
    {

        cout<< "\t ("<<i+1<<") " <<  modelName ;
    }
    void getData1()
    {
        cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left << "seating" << setw(13) << left << "airbag"<<endl ;
        cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
        cout<< endl<< setw(10) <<left  << modelName << setw(10) <<left<< fuelType << setw(10) <<left<< carPrice << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tankCapacity <<setw(13) << left << seatingCap << setw(13) << left << airbag<<endl ;
    }

    void case2(string ch)
    {

        if(ch == fuelType)
        {

            cout<< setw(10) <<left  << modelName << setw(10) <<left<< fuelType << setw(10) <<left<< carPrice << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tankCapacity <<setw(13) << left << seatingCap << setw(13) << left << airbag<<endl ;
        }

    }

    void cases3(float maxm)
    {
        if(carPrice <= maxm )
        {


            cout<< setw(10) <<left  << modelName << setw(10) <<left<< fuelType << setw(10) <<left<< carPrice << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tankCapacity <<setw(13) << left << seatingCap << setw(13) << left << airbag<<endl ;
        }
    }

};
int main()
{
    cars detail[999];
    int n;
    cout << "enter number of cars (1-999) : " << endl;
    cin >> n;
    fflush(stdin);

    for(int i = 0; i<=n-1 ; i++)
    {
        fflush(stdin);
        detail[i].getdata();
        fflush(stdin);
    }

    string ch;
    cout << "enter fuel type" << endl;
    getline(cin,ch);

    cout << endl << "ENTER YOUR MAXIMUM AFFORDABLE RANGE " << endl;
    float maxm;
    cin >> maxm;

    system("cls");

    int choice;

    cout << "WELCOME TO TATA MOTORS " << endl;
    cout << "GET THE CAR DETAILS AS PER YOUR PREFERNCE " << endl;
    cout << "Option 1 : Model name, Option 2 : Fuel type, Option 3 : Price range " << endl;
    cout << "enter your choice : " << endl;
    cin >> choice;





    switch(choice)
    {
    case 1:
        cout << "LIST OF TATA CARS " << endl << endl;
        for(int i = 0; i<n; i++)
        {
            detail[i].displayCar(i);
        }

        cout <<endl<< "choose your car to get details " << endl;
        int d;
        cin >> d;
        detail[d-1].getData1();
        break;
    case 2 :

        cout << "TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS "<< endl;

         cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left << "seating" << setw(13) << left << "airbag"<<endl ;
        cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
        for(int i = 0; i<n; i++)
        {
            detail[i].case2(ch);
        }
        break;
    case 3:

    {

    cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left << "seating" << setw(13) << left << "airbag"<<endl ;
        cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
        for (int i = 0; i < n; i++)
        {

            detail[i].cases3(maxm);
        }
        break;
    }


    default:
        cout << endl <<"invalid choice " << endl;
        break;
    }
    return 0;
}
