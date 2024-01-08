#include <iomanip>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{

//    int credit = 3;
//    float sgpa, sum = 0.0;
//    char grade[2][4];
//
//    int grades[3][2];
//
//    string student_id;
//    cout << "Enter your student ID: " << endl;
//    getline(cin, student_id);
//    string name;
//    cout << "Enter your name: " << endl;
//    getline(cin, name);
//    int sem;
//    cout << "Enter the number of semesters you have completed: " << endl;
//    cin >> sem;
//    char subjects[3][50];
//
//    fflush(stdin);
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "enter subject name of "<< i+1 <<":" << endl;
//        cin.getline(subjects[i], 50);
//    }
//
//    int marks[3][2];
//    cout << "enter marks for theory and practical assessment " << endl;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cout << "enter marks for subject " << i + 1
//                 << " for theory and practical assessment " << endl;
//            cin >> marks[i][j];
//        }
//        cout << "\n";
//    }
//
//    for (int i = 0; i < 3; i++)
//    {
//
//        for(int j = 0; j<2 ; j++)
//        {
//            if(marks[i][j] >= 80)
//            {
//                grades[i][j] = 10;
//            }
//            else if(marks[i][j] >= 73 && marks[i][j] < 80)
//            {
//                grades[i][j] = 9;
//            }
//            else if (marks[i][j] >= 66 && marks[i][j] <73)
//            {
//                    grades[i][j] = 8;
//            }
//            else if (marks[i][j] >= 60 && marks[i][j] <66)
//            {
//            grades[i][j]= 7;
//
//            }
//            else if (marks[i][j] >= 55 && marks[i][j] <60)
//            {
//             grades[i][j] = 6;
//
//            }
//            else if (marks[i][j] >= 50 && marks[i][j] <55)
//            {
//             grades[i][j] = 5;
//
//            }
//            else if (marks[i][j] >= 45 && marks[i][j] <50)
//            {
//
//                grades[i][j] = 4;
//            }
//            else
//            {
//
//                grades[i][j] = 0;
//            }
//        }
//    }
//
//for(int i =0;i<3;i++)
//{
//    for(int j =0;j <2;j++)
//    {
//        sum = sum + grades[i][j];
//
//    }
//
//}
//
//cout << "sum is : " << sum << endl;
//
//sgpa = (float)(credit*sum) / 18;
//
//
//
//cout <<  "student ID    : " << student_id << endl;
//cout <<  "student Name  : " << name << endl;
//cout <<  "semester      : " << sem << endl;
//
//
//cout << setw(40) << "theory     practical" << endl;
//for(int i = 0;i <3 ; i++)
//{
//    for(int j = 0 ; j<2 ;j++)
//    {
//        for(int k=0;k<4;k=k++)
//
//        {
//            if(grades[i][j] = 10)
//            grade[i][k] = 'AA';
//           else if(grades[i][j] = 9)
//            grade[i][j] = 'AB';
//           else if(grades[i][j] = 8)
//            grade[i][k] = 'BB';
//            else if(grades[i][j] = 7)
//            grade[i][k] = 'BC';
//            else if(grades[i][j] = 6)
//            grade[i][k] = 'CC';
//           else if(grades[i][j] = 5)
//            grade[i][k] = 'CD';
//            else if(grades[i][j] = 4)
//            grade[i][k] = 'DD';
//            else grade[i][j] = 'FF';
//    }
//        }
//}
//fflush(stdin);
//cout << subjects[0] << setw(27)<< grade[0][0]<<grade[0][1] << "\t" <<grade[0][2]<<grade[0][3] <<endl;
//cout << subjects[1] << setw(27)<< grade[1][0]<<grade[1][1] << "\t" <<grade[1][2]<<grade[1][3] <<endl;
//cout << subjects[2] << setw(27)<< grade[2][0]<<grade[2][1] << "\t" <<grade[2][2]<<grade[2][3] <<endl;
//cout <<  "sgpa          :" << sgpa << endl;

    char s_id[8];
    string s_name, sub[10];
    int sem, credit[10], i,j;
    int marks[10][2];

    //input of student details
    cout<<"Enter Details Of Student"<<endl<<"Student ID : ";
    cin>>s_id;
    fflush(stdin);

    cout<<"Student Name : ";
    cin>>s_name;
    fflush(stdin);

    cout<<"Semester : ";
    cin>>sem;
    fflush(stdin);

    int n;

    //input no of sub
    cout<<"Enter No of Subject : ";
    cin>>n;
    fflush(stdin);

    //input of subject names and credit
    for(i=0;i<n;i++)
    {
     cout<<"Enter Name of subject "<<i+1<<" : ";
     getline(cin,sub[i]);
     fflush(stdin);
     cout<<"Enter Credit : ";
     cin>>credit[i];
     fflush(stdin);
    }

    //entering marks of student
    for(i=0; i<n; i++)
    {
        for(j=0; j<1; j++)
        {
            cout<<"Enter Marks for Subject "<<i+1<<" : "<<endl;
            cout<<"Theory : ";
            cin>>marks[i][j];
            fflush(stdin);
            cout<<"Practical : ";
            cin>>marks[i][j+1];
            fflush(stdin);
        }
    }

    int grade_point[n][2];

    //print marksheet
    cout<<endl<<"Result of the Student is generated successfully."<<endl;

    system("cls");

    cout<<setw(30)<<"CHARUSAT"<<endl;
    cout<<"Student ID   : "<<s_id<<endl;
    cout<<"Student Name : "<<s_name<<endl;
    cout<<"Semester     : "<<sem<<endl;
    cout<<setw(38)<<"Theory"<<setw(15)<<"Practical"<<endl;

    //calculate grade_point and display grade
    for(i=0; i<n; i++)
    {
        cout<<left<<setw(35)<<sub[i];
        for(j=0; j<=1; j++)
        {
            if(marks[i][j]>=80)
            {
                cout<<setw(12)<<"AA";
                grade_point[i][j]=10;
            }
            else if(marks[i][j]>=73)
            {
                cout<<setw(12)<<"AB";
                grade_point[i][j]=9;
            }
            else if(marks[i][j]>=66)
            {
                cout<<setw(12)<<"BB";
                grade_point[i][j]=8;
            }
            else if(marks[i][j]>=60)
            {
                cout<<setw(12)<<"BC";
                grade_point[i][j]=7;
            }
            else if(marks[i][j]>=55)
            {
                cout<<setw(12)<<"CC";
                grade_point[i][j]=6;
            }
            else if(marks[i][j]>=50)
            {
                cout<<setw(12)<<"CD";
                grade_point[i][j]=5;
            }
            else if(marks[i][j]>=45)
            {
                cout<<setw(12)<<"DD";
                grade_point[i][j]=4;
            }
            else
            {
                cout<<setw(12)<<"FF";
                grade_point[i][j]=0;
            }
        }
        cout<<endl;
    }

    int total_credit=0;
    //calculate total credit
    for(i=0;i<n;i++)
    {
        total_credit=total_credit + credit[i];
    }

    float sgpa=0;

    //calculate sgpa
    for(i=0;i<n;i++)
    {
        for(j=0;j<=1;j++)
        {
         sgpa= sgpa + (grade_point[i][j]*credit[i]);
        }
    }

    sgpa = sgpa/(total_credit*2);

    //print sgpa
    cout<<endl<<"SGPA : "<<fixed<<setprecision(2)<<sgpa;


}
