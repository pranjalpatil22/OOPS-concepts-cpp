#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;

class car
{
    string model_name;
    string fuel_type;
    float price;
    float mileage;
    string transmission;
    float tank_capacity;
    int seat;
    string airbags;
    public :

            void getdata(string mn , string ft ,float p , float ml , string tran , float tc,int s,string ar)
            {
                model_name = mn;
                fuel_type = ft;
                price = p;
                mileage = ml;
                transmission = tran;
                tank_capacity= tc;
                seat= s;
                airbags=ar;
            }
            void car_list(int i)
            {
                cout<<"("<<i+1<<") "<<model_name<< "  ";
            }
            void car_info()
            {
             cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left<< "seat" <<setw(13) << left  << "airbag"<<endl ;
             cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
             cout<< setw(10) <<left  << model_name << setw(10) <<left<< fuel_type << setw(10) <<left<< price << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tank_capacity <<setw(13) << left<< seat <<setw(13) << left << airbags<<endl ;
            }
            void fuel_type_car(string choice2)
            {
                if(choice2==fuel_type)
                {
                    cout<< setw(10) <<left  << model_name << setw(10) <<left<< fuel_type << setw(10) <<left<< price << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tank_capacity <<setw(13) << left<< seat <<setw(13) << left << airbags<<endl ;
                }

            }
            void affodabal_price(int p)
            {
                if(price<=p)
                cout<< setw(10) <<left  << model_name << setw(10) <<left<< fuel_type << setw(10) <<left<< price << setw(10) << left << mileage << setw(15) << left << transmission << setw(17) << left << tank_capacity <<setw(13) << left<< seat <<setw(13) << left << airbags<<endl ;
            }
};

int main()
{

    int n,i,p;
    string choice2;

    car c[100];

    ifstream inf("cardata.txt");        //create the object named inf

    if (!inf) {                         //checking that file is able to open or not
		cout << "Unable to open file";  //if unable program will be ended.
		return 1;
	}
    int count=0;                        //for counting no. of created objects
	cout<<"File opened successfully\n";
	string model_name,fuel_type, trans, airbag;
	string price, mileage, tc;
	float price1, mileage1, tc1;
	string seating;
	int seating1;
	while(inf)          //read from the text file
    {
        getline(inf,model_name,',');            //3rd syntax of getline()
        //cout<<"model name = "<<model_name<<endl;
        getline(inf,fuel_type,',');
        //cout<<"fuel Type = "<<fuel_type<<endl;
        getline(inf,price,',');
        price1 = stof(price);                   //conversion of string to float
        //cout<<"Price = "<<price1<<endl;
        //price1 = stof(price);
        getline(inf,mileage,',');
        mileage1 = stof(mileage);
        //cout<<"mileage = "<<mileage1<<endl;
        getline(inf,trans,',');
        //cout<<"Transmission = "<<trans<<endl;
        getline(inf,tc,',');
        tc1 = stof(tc);
        //cout<<"Tank Capacity = "<<tc1<<endl;
        getline(inf,seating,',');
        seating1 = stod(seating);                   //string to integer
        //cout<<"Seating = "<<seating1<<endl;
        getline(inf,airbag,';');
        //cout<<"Airbags = "<<airbag<<endl;
        //cout<<endl;
        c[count].getdata(model_name,fuel_type,price1,mileage1,trans,tc1,seating1,airbag);
        count++;

    }

    inf.close();

    getch();
    count--;
    system("cls");
    int choice;
    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"GET THE CAR DETAILS AS PER YOUR PREFERANCE"<<endl;
    cout<<"(1) Model Name (2) Fuel Type (3) Price Range"<<endl<<endl;
    cout<<"ENTER YOUR OPTION : ";
    cin >>choice;

    cout<<endl<<"----------------------"<<endl;

    switch(choice)
    {
        case 1:

         cout<<"LIST OF TATA MOTORS"<<endl;
         for(int i=0;i<count;i++)
         c[i].car_list(i);

         cout<<endl<<endl<<"ENTER YOUR OPTION : ";
         int choice1;
         cin>>choice1;

         c[choice1-1].car_info();

        break;

        case 2:
            cout<<"TATA MOTORS ARE AVAILABAL WITH FUEL OPTIONS "<<endl;
            cout<<"(1) Petrol (2) Diesel (3) CNG (4) Electric"<<endl<<endl;
            cout<<endl<<endl<<"ENTER YOUR OPTION : ";
            fflush(stdin);
            getline(cin,choice2);
                cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left<< "seat" <<setw(13) << left  << "airbag"<<endl ;
             cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
            for(int i=0;i<count;i++)
            c[i].fuel_type_car(choice2);
        break;

        case 3:
            cout<<"ENTER YOUR MAXIMUM AFFODABLE RANGE IN LAKHS :  ";
            cin>>p;
            cout<<endl;
             cout<< setw(10) <<left  << "model" << setw(10) <<left<< "fuel" << setw(10) <<left<< "price" << setw(10) << left << "Mileage" << setw(15) << left << "transmission" << setw(17) << left << "tank capacity" <<setw(13) << left<< "seat" <<setw(13) << left  << "airbag"<<endl ;
             cout << setw(20) << "  " << setw(10) << left << "(lakhs)" << setw(10) << left << "(Km/L)" << setw(15) << left << " " << setw(17) << left << "(Liters)" << setw(13) << left << "capacity"<< endl;
            for(int j=0;j<count;j++)
            c[j].affodabal_price(p);
    }

    return 0;
}
