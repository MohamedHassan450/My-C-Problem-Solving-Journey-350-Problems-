#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include<vector>
#include "Library.h"
#include<cctype>
#include<fstream>

using namespace std;
using namespace Library;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Sum(int a, int b) 
{
    int s=0;
    s = a + b;

    return s;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int ReadNumber1()
{
    int Number;

    cout << "Enter Number " << endl;
    cin >> Number;

    while (cin.fail())
    {
        cin.clear();                                                      //Forgive me  
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   //Delet Line that i Write 

        cout << "Invalid Value , Please enter number" << '\n';
        cin >> Number;

    }

    return Number;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Numarstic(int B, int Q, int Z = 0, int J = 0)
{
    return (B + Q + Z + J);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MyNum(int G, int H)
{
    return (G + H);
}

int MyNum(int G, int H, int K)
{
    return(G + H + K);

}
int MyNum(int G, int H, int K, int M)
{
    return(G + H + K + M);
}

double MyNum(double V, double X)
{
    return(V + X);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//To Test Call Stack(Herachy)
void Function4()
{
    cout << "Hi I'm function4 " << endl;
}
void Function3()
{
    Function4();
}
void Function2()
{
    Function3();
}
void Function1()
{
    Function2();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Recrision                                          //Not Prefferd to use Because it Has a Limitaion ex:Call Stack error
void PrintNumerastic(int N, int  M)
{
    if (N <= M)
    {
        cout << N << endl;
        PrintNumerastic(N + 1, M);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Static Variable
void MyFunction()
{
    static int Num = 1;
    cout << "Static Variable : " << Num << endl;

    Num++;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Auto Variable
void MyFunctionAuto()
{
    auto X = 10; //Will make it automaticaly int
    auto Y = 12.5; //Will make it automaticaly float or double
    auto Z = "Mohamed Hassan"; //Will make it automaticaly string

    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//HomeWork On Vector
int ReadNumber(vector <int>& VNum)
{
    int Number;

    string YesOrNo = "Yes";

    do
    {
        printf("\nPlease enter number \n");
        cin >> Number;
        VNum.push_back(Number);
        printf("Do you want add more ? Yes or No ?\n");
        cin >> YesOrNo;

    } while (YesOrNo == "Yes" || YesOrNo == "yes");


    return Number;

}

void PrintArray(vector <int>& VNum)
{
    cout << "\nVector Number : \n";
    for (int i : VNum)
    {
        cout << i << endl;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct stEmploye
{
    string Name;
    string JobTitle;
    float Salary;
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct stGamesInfo
{
    string Name;
    string Rate;
    string ReleaseDate;
};

void ReadStruct(vector<stGamesInfo>& vGamesInfo)
{
    stGamesInfo GamesInfo;

    string YesOrNoVStruct = "Yes";

    do
    {
        printf("Enter Game Name\n");
        getline(cin, GamesInfo.Name);
        printf("Enter Release Year\n");
        getline(cin, GamesInfo.ReleaseDate);
        printf("Enter Game Rateing\n");
        getline(cin, GamesInfo.Rate);

        vGamesInfo.push_back(GamesInfo);

        cout << endl;

        printf("Do you want to enter anthor game ? Yes or No ? \n");
        cin >> YesOrNoVStruct;

    } while (YesOrNoVStruct == "Yes" || YesOrNoVStruct == "yes");

}

void PrintStructVentor(vector<stGamesInfo>& vGamesInfo)
{
    cout << endl;
    printf("Games Vector");

    for (stGamesInfo Game : vGamesInfo)
    {
        cout << "Name : " << Game.Name << endl;
        cout << "Release Date : " << Game.ReleaseDate << endl;
        cout << "Rating : " << Game.Rate << endl;

        cout << endl;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MyFunctuionByRefrence(int& X125)
{
    X125++;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////










int main()
{
    //To test Debugning 
    int arr[5] = { 200,100,50,25,30 };
    int a, b, c;

    a = 10;
    b = 20;

    a++;
    ++b;

    c = a + b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << endl;
        a = a + a * i;
    }

    c = Sum(a, b);
    cout << c << endl;

    cout << "__________________________________________________________________________" << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //To test Library 
   int MyNumber = Library::ReadNumber();
   cout << "Number enterd is " << MyNumber << endl;

    cout << Library::Sum2Numbers(10, 20) << endl;

    cout << "__________________________________________________________________________" << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int Number;
    string PostiveOrNegative;

    cout << "Enter Number " << endl;
    cin >> Number;

    PostiveOrNegative = (Number == 0) ? " Zero " : (Number > 0) ? "Postive Number " : "Negative Number ";

    cout << PostiveOrNegative << endl;

    cout << "__________________________________________________________________________" << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int ARR[] = { 1,2,3,4,5 };

    for (int i : ARR)
    {
        cout << i << endl;
    }

    cout << "__________________________________________________________________________" << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Number is " << ReadNumber1() << endl;

    cout << "__________________________________________________________________________" << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Result : " << (12 & 25) << endl;    //12 = 00001100 , 25 = 00011001 

    cout << "Result : " << (12 | 25) << endl;   //12 = 00001100 , 25 = 00011001


    cout << "__________________________________________________________________________" << endl;

   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << Numarstic(10, 10) << endl;
    cout << Numarstic(10, 10, 10) << endl;
    cout << Numarstic(10, 10, 10, 10) << endl;

    cout << "__________________________________________________________________________" << endl;

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << MyNum(10, 10) << endl;
    cout << MyNum(10, 10, 10) << endl;
    cout << MyNum(10, 10, 10, 10) << endl;
    cout << MyNum(10.7, 10.4) << endl;

    cout << "__________________________________________________________________________" << endl;

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Function1();

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Recrision
    PrintNumerastic(1, 10);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Static Variable
    MyFunction();
    MyFunction();
    MyFunction();

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Auto Variable
    MyFunctionAuto();

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int	Page = 1;
    int TotalPage = 10;

    printf("Page number  %d \n", Page);
    printf("Page %d to %d \n", Page, TotalPage);

    printf("Page %0*d \n", 2, Page);
    printf("Page %0*d \n", 3, Page);
    printf("Page %0*d \n", 4, Page);

    printf("Sum = %d + %d = %d \n", Page, TotalPage, Page + TotalPage);
    printf("Sum = %d + %d = %d \n", 10, 20, 10 + 20);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float PI = 3.14159265;

    printf("Float number is %f \n", PI);
    printf("Float number is %.f \n", PI);
    printf("Float number is %.*f \n", 1, PI);
    printf("Float number is %.*f \n", 2, PI);
    printf("Float number is %.3f \n", PI);

    float NumberFolat1 = 7.2;
    float NumberFolat2 = 2.8;

    printf("Result = %.*f + %.*f = %.f \n", 1, NumberFolat1, 1, NumberFolat2, NumberFolat1 + NumberFolat2);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char MyName[] = "Mohamed Hassan";
    char FavGame[] = "The Witcher 3";

    printf("My name is %s \n", MyName);
    printf("My favriot game is %s \n", FavGame);

    char SPrnit = 'S';

    printf("Width of %c \n", SPrnit);
    printf("Width of %*c \n", 1, SPrnit);
    printf("Width of %*c \n", 2, SPrnit);
    printf("Width of %*c \n", 3, SPrnit);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "|________|________________________|__________|" << endl;
    cout << "| Number |         Name           |   Mark   |" << endl;
    cout << "|________|________________________|__________|" << endl;

    cout << "|" << setw(9) << "1|" << setw(19) << " Cost Accounting" << setw(6) << "|" << setw(10) << 95 << "|" << endl;
    cout << "|" << setw(9) << "2|" << setw(12) << "  Goverment Accounting" << setw(3) << "|" << setw(10) << 85 << "|" << endl;
    cout << "|" << setw(9) << "3|" << setw(12) << "  internaional Ecnomic" << setw(3) << "|" << setw(10) << 85 << "|" << endl;
    cout << "|" << setw(9) << "4|" << setw(12) << " IS " << setw(13) << "|" << setw(10) << 95 << "|" << endl;
    cout << "|" << setw(9) << "5|" << setw(12) << " HR " << setw(13) << "|" << setw(10) << 80 << "|" << endl;
    cout << "|" << setw(9) << "6|" << setw(12) << " Ecnomic in Arabic " << setw(6) << "|" << setw(10) << 80 << "|" << endl;
    cout << "|____________________________________________|" << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int array[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << "  ";
        }

        cout << endl;
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int Arr[10][10];

    for (int iH = 1; iH < 11; iH++)
    {
        for (int jH = 1; jH < 11; jH++)
        {
            printf("%0*d ", 2, iH * jH);

        }

        printf("\n");
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> VNum = { 10,20,30,40,50 };

    for (int Num : VNum)
    {


        printf("Vector Number = %d \n", Num);
    }


    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> Vnumarastic;

    Vnumarastic.push_back(10);
    Vnumarastic.push_back(20);
    Vnumarastic.push_back(30);
    Vnumarastic.push_back(40);

    for (int Number33 : Vnumarastic)
    {
        printf("%d \n", Number33);
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //HomeWork on Vector
    vector <int> VNum;

    ReadNumber(VNum);
    PrintArray(VNum);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <stEmploye> vEmploye;

    stEmploye Employeinfo;

    Employeinfo.Name = "Mohamed Hassan";
    Employeinfo.JobTitle = "Ceo";
    Employeinfo.Salary = 430000;
    vEmploye.push_back(Employeinfo);

    Employeinfo.Name = "Aya Hassan";
    Employeinfo.JobTitle = "Law Manger";
    Employeinfo.Salary = 150000;
    vEmploye.push_back(Employeinfo);

    Employeinfo.Name = "Mohamed Abu Hadhoud";
    Employeinfo.JobTitle = "IT Manger";
    Employeinfo.Salary = 250000;
    vEmploye.push_back(Employeinfo);

    for (stEmploye PrintEmploye : vEmploye)
    {

        cout << "Name : " << PrintEmploye.Name << endl;
        cout << "Title : " << PrintEmploye.JobTitle << endl;
        cout << "Salary : " << PrintEmploye.Salary << endl;
        printf("\n\n");


    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <stGamesInfo> vGamesinfo;

    ReadStruct(vGamesinfo);
    PrintStructVentor(vGamesinfo);

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> VNumber2;

    VNumber2.push_back(10);
    VNumber2.push_back(20);
    VNumber2.push_back(30);
    VNumber2.push_back(40);
    VNumber2.push_back(50);

    VNumber2.pop_back();
    VNumber2.pop_back();
    VNumber2.pop_back();
    VNumber2.pop_back();
    VNumber2.pop_back();

    if (!VNumber2.empty())
    {
        VNumber2.pop_back();
    }

    printf("Vectors Number : \n");

    for (int i9 : VNumber2)
    {
        cout << i9 << endl;
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> VNumber3;

    VNumber3.push_back(10);
    VNumber3.push_back(20);
    VNumber3.push_back(30);
    VNumber3.push_back(40);
    VNumber3.push_back(50);

    cout << "How Many Element in Array: " << VNumber3.size() << endl;

    cout << "First Element: " << VNumber3.front() << endl;

    cout << "Last Element: " << VNumber3.back() << endl;

    cout << "Capacity: " << VNumber3.capacity() << endl;

    cout << "Empty or Not: " << VNumber3.empty() << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int A125 = 10;

    MyFunctuionByRefrence(A125);

    cout << "Function By Refrence = " << A125 << endl;
    cout << "Address = " << &A125 << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Pointer
    int a = 10;
   

    cout << a << endl;
    cout << &a << endl;

    int* p = &a;

    cout << p << endl;
    cout << *p << endl;

    *p = 20;

    cout << a << endl;
    cout << *p << endl;

    a = 30;

    cout << a << endl;
    cout << *p << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    int arryuu[5] = { 1,2,3,4,5 };
    int* puu;

    puu = arryuu;
    printf("Adresses :\n");
    cout << puu << endl;
    cout << puu + 1 << endl;
    cout << puu + 2 << endl;
    cout << puu + 3 << endl;
    cout << puu + 4 << endl;


    printf("Value :\n");
    cout << *puu << endl;
    cout << *puu + 1 << endl;
    cout << *puu + 2 << endl;
    cout << *puu + 3 << endl;
    cout << *puu + 4 << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void* poiter;
    float f1 = 20;
    poiter = &f1;

    cout << poiter << endl;
    cout << *(static_cast<float*>(poiter)) << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int* pointer;
    float* pointer1;

    pointer = new int;
    pointer1 = new float;

    *pointer = 12;
    *pointer1 = 12.7;

    cout << *pointer << endl;
    cout << *pointer1 << endl;

    delete pointer;
    delete pointer1;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> Num = { 1,2,3,4,5 };

    for (const int i00 : Num)
    {
        cout << i00 << " ";
    }
    cout << endl;

    for (int i01 : Num)
    {
        i01 = 20;
        cout << i01 << " ";
    }
    cout << endl;

    Num[1] = 30;
    Num.at(2) = 40;
    Num.at(3) = 50;

    for (int i02 : Num)
    {
        cout << i02 << " ";

    }
    cout << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> Num011 = { 1,2,3,4,5 };

    vector <int>::iterator iter;

    for (iter = Num011.begin(); iter != Num011.end(); iter++)
    {
        cout << *iter << endl;
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    vector <int> Num0111 = { 1,2,3,4,5 };

    try
    {
        cout << Num0111.at(5);
    }
    catch (...)
    {
        cout << "Try catch" << endl;
    }

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    string S1 = "My Name is Mohamed Hassan , I am the Richest of all time.";

    cout << S1.length() << endl;

    cout << S1.at(3) << endl;

    cout << S1.append(" OMK") << endl;

    cout << S1.insert(10, " Sir,") << endl;

    cout << S1.substr(10, 20) << endl;

    cout << S1.find("Sir") << endl;

    string Ask = "Yes";
    if (S1.find("Anklaeve") == S1.npos)
    {
        cout << "Not found" << endl;
        cout << "Do you want to put it " << endl;
        cin >> Ask;

        if (Ask == "yes" || Ask == "Yes")
        {
            S1.append(". Anklaeve");
            cout << S1 << endl;
        }
    }

    S1.push_back('.X');
    cout << S1 << endl;

    S1.pop_back();
    cout << S1 << endl;

    S1.clear();
    cout << S1 << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char C1 = toupper('a');
    char C2 = tolower('A');

    cout << "Will change from a to A" << C1 << endl;
    cout << "Will change from A to a" << C2 << endl;

    cout << "Is (A) upper char = " << isupper('A') << endl;

    cout << "Is (A) upper char = " << islower('A') << endl;

    cout << "Is Punction = " << ispunct('#') << endl;

    cout << "Is Digit from 0 to 9 = " << isdigit('4') << endl;

    cout << "__________________________________________________________________________" << endl;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    //Return for C++ Level 2 to contune (Files) and (Time) Videos 


}