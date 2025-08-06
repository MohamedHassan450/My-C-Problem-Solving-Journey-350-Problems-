#include <iostream>//for use std,cout,cin,etc,etc
#include <cmath>//for use function
#include<string>//for string
using namespace std;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int x = 300;//Global value line 485

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void myFunction()//its called procedure becuase it does'not has a value //its like a small program in the big program //Line 446
{

	cout << "This is My first Function :-)" << endl;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


string myFunctionstring()//its called return value Function
{
	return  "This is My first return value Function :-)";


}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int myFunctionint()
{
	int x = 10;
	int y = 20;

	return x * y;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int MySumFunction(int NUM21, int NUM22)
{

	return NUM21 + NUM22;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


enum Color { Red, Green, Yellow, Black };
enum Diraction { South, North, East, West };
enum Week { Sun, Mon, Tu, Wen, Th, Fri, Sat };

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct stOwner
{
	string FullName;
	string Phone;
};

struct information
{
	string Name;
	string PhoneNumber;
	string City;
	string Country;
	string Gender;
	int Age;
	int MonthlySalary;
	int YearlySalary = MonthlySalary * 12;


};

struct car
{
	string Brand;
	string Model;
	int Year;
	stOwner Owner;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 }; //line 575

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


enum enCountry333 { Egypt = 1, Plastaian = 2, Jordan = 3, Algeria = 4, Other = 5 }; //Line 622

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 //Line 794

void ReadArrayData(int Array[100], int& Lenght)
{
	cout << "Enter Number between 1 to 100" << endl;
	cin >> Lenght;

	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << "Enter Number " << i + 1 << endl;
		cin >> Array[i];
	}
}

void PrintArrayData(int Array[100], int& Lenght)
{

	for (int i = 0; i <= Lenght - 1; i++)
	{
		cout << "Number [ " << i + 1 << " ] : = " << Array[i] << endl;

	}


}

int CalulateArrayData(int Array[100], int& Lenght)
{
	int Sum = 0;

	for (int i = 0; i <= Lenght - 1; i++)
	{
		Sum += Array[1];
	}

	return Sum;
}  

int AvrageArrayData(int Array[100], int& Lenght)
{

	return (float)CalulateArrayData(Array, Lenght) / Lenght;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//line 525
int ReadMyNumber(int From, int  To) 
{
	int Number95;

	cout << "Enter number from " << From << " to " << To << endl;
	cin >> Number95;

	while (Number95<From || Number95>To)
	{
		cout << "Wrong Number " << endl;
		cout << "Enter number from " << From << "to" << To << endl;
		cin >> Number95;

	}

	return Number95;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Line 885
int ReadMyNumberByDo(int From67, int To67)
{

	int Num67;

	do
	{
		cout << "Please enter your age and must be between " << From67 << " to " << To67 << endl;
		cin >> Num67;
	} while (Num67 < From67 || Num67 > To67);

	return Num67;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int  main()

{

	std::cout << "Mohamed Hassan\n" << std::endl;

	std::cout << "king of the north " << "king mohmedov\n\n ";

	std::cout << "the result of " << "35+10 = " << 35 + 10 << endl << endl;

	cout << "***********************************************************************************" << endl << endl;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "M1\\M2\n\n "; // used [\\] to make backslash

	cout << "M1\tM2 \n\n "; // used [\t] to leave four spaces 

	cout << "My name is \"Mohamed\"\n\n"; // used [\"\"} to make word  between double qutation

	cout << "\a\n\n"; // used [\a] to ring bell when open

	char Myletter = '\''; // used [\'] to make singal qutation
	cout << Myletter << endl << endl;

	cout << "***********************************************************************************" << endl << endl;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	short int MyAge = 45;
	cout << MyAge << endl << endl;
	cout << "I am " << MyAge << " years old\n\n";
	MyAge = 27;
	cout << MyAge << endl << endl;

	float Myfloatnumber = 7.534;
	double Mydoublefloatnumber = 21.89;
	bool Mybooleannumber = true;
	string Mytext = "Mohamed";
	char Mycharacterletter = 'M'; //there is also [wchar_t] but i cant use it yet like ج \\ there is also void which  mean [empty]


	cout << Myfloatnumber << endl;
	cout << Mydoublefloatnumber << endl;
	cout << Mybooleannumber << endl;
	cout << Mytext << endl;
	cout << Mycharacterletter << endl << endl;

	int x = 5, y = 10, sum = x + y;
	cout << sum << endl << endl;

	const int minutesperhour = 60;// constant cant be edited or change
	const float PI = 3.14;

	cout << "***********************************************************************************" << endl << endl;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int ex1;                           //contain of [-2,147,483,648}to{2,147,483,648} 4byte
	signed int ex2;                    //they are the same because[int] is signed by defult 

	unsigned int ex3;                 // contain of {4,294,967,295} 4byte

	short int ex4;                   //contain of {-32,768]to[32,768] 2byte
	unsigned short int ex5;         // contain of {65,536}            2byte  

	long int ex6;                  //contain of [-(2^63)] to [(2^63)-1}        8byte
	unsigned long int ex7;         // contain of [18,446,744,073,709,551,615)  8byte

	char ex8;                      //contain of [-127] to [127]
	unsigned char ex9;             //contain of [255]


	double distance = 56E12;           //56E12=56*10^12
	cout << distance << endl << endl;

	cout << "The size of bool by byte" << sizeof(bool) << "\n";
	cout << "The size of char by byte" << sizeof(char) << "\n";
	cout << "The size of int by byte" << sizeof(int) << "\n";
	cout << "The size of short int by byte" << sizeof(short int) << "\n";
	cout << "The size of long int by byte" << sizeof(long int) << "\n";
	cout << "The size of long long int by byte" << sizeof(long long int) << "\n";
	cout << "The size of float by byte" << sizeof(float) << "\n";
	cout << "The size of double by byte" << sizeof(double) << "\n";
	cout << "The size of long double by byte" << sizeof(long double) << "\n";

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int A = 20, B = 10;

	cout << "A + B =" << A + B << endl;
	cout << "A - B =" << A - B << endl;
	cout << "A * B =" << A * B << endl;
	cout << "A / B =" << A / B << endl;
	cout << "A % B =" << A % B << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int A13 = 10;
	int B13 = 10;

	A13++;
	B13--;

	cout << "A = " << A13 << endl;
	cout << "B = " << B13 << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int A12 = 10;
	int B12 = A12++;

	cout << "B = " << B12 << endl;
	cout << "A = " << A12 << endl;

	B12 = ++A12;
	cout << "B = " << B12 << endl;
	cout << "A = " << A12 << endl;

	cout << "***********************************************************************************" << endl << endl;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int A11 = 10;
	int B11 = 20;

	A11 += B11;//A=A+B
	cout << "A = " << A << endl;

	A11 -= B11;//A=A-B
	cout << "A = " << A << endl;

	A11 *= B11;//A=A*B
	cout << "A = " << A << endl;

	A11 /= B11;//A=A/B
	cout << "A = " << A << endl;

	A11 %= B11;//A=A%B
	cout << "A = " << A << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	int A17 = 10;
	int B17 = 20;

	cout << (A17 == B17) << endl;//Does A = B
	cout << (A17 != B17) << endl;//Does A not= B
	cout << (A17 > B17) << endl;//Does A bigger than B
	cout << (A17 < B17) << endl;//Does A smaller than B
	cout << (A17 >= B17) << endl;//Does A =or bigger than B
	cout << (A17 <= B17) << endl;//Does A =or smaller than B

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	bool A65 = 1; //true
	bool B65 = 0; //false

	cout << (A65 && B65) << endl;  //true and false=false
	cout << (A65 || B65) << endl;  //true or false=true
	cout << !(A65 && B65) << endl;  //true and false=not false = true
	cout << !(A65 || B65) << endl;  //true or false=not true = false
	cout << !A65 << endl;  //Not true = false
	cout << !B65 << endl;  //Not false = true

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Squre Root
	double x14 = 64;

	cout << "Square root value of 64 is " << sqrt(64) << endl;
	cout << "Square root value of 50 is " << sqrt(50) << endl;

	cout << "***********************************************************************************" << endl << endl;


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Round
	cout << "Round of 2.4 = " << round(2.4) << endl;
	cout << "Round of 2.5 = " << round(2.5) << endl;
	cout << "Round of Squrt(50) = " << round(sqrt(50)) << endl;
	cout << "Round(2.4) + Round(5.6) = " << round(2.4) + round(5.6) << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Power
	int x17 = 2;
	int y17 = 4;

	cout << pow(x17, y17) << endl;   //[x17] is base because it first and [y17] is power
	cout << pow(4, 3) << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Ceil & Floor
	cout << "Ceil Of (2.9) =  " << ceil(2.9) << endl;
	cout << "Floor Of (2.9) = " << floor(2.9) << endl;

	cout << "Ceil of (-2.9) = " << ceil(-2.9) << endl;
	cout << "Floor Of (-2.9) = " << floor(-2.9) << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Absolute Value
	cout << "Absolute Value of -10 = " << abs(-10) << endl;  //Change any negtavie number to positive
	cout << "Absolute Value of 10 = " << abs(10) << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	struct stOwner
//	{                                                                //Stracure//
//		string FullName;
//		string Phone;
//	};

//	struct car
//	{
//		string Brand;
//		string Model;
//		int Year;
//		stOwner Owner;

//	};
	car Mycar1;

	Mycar1.Brand = "Kia::";
	Mycar1.Model = "GrandSerato::";
	Mycar1.Year = 2022;
	Mycar1.Owner.FullName = "::Hanna Hamed Ali";


	cout << Mycar1.Brand << Mycar1.Model << Mycar1.Year << Mycar1.Owner.FullName << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//Write and past program
	information Client1;

	Client1.Name;
	Client1.Age;
	Client1.City;
	Client1.Country;
	Client1.MonthlySalary;
	Client1.YearlySalary;
	Client1.PhoneNumber;

	cout << "Enter Client Name" << endl;
	cin >> Client1.Name;

	cout << "Enter Client Age" << endl;
	cin >> Client1.Age;

	cout << "Enter Client City" << endl;
	cin >> Client1.City;

	cout << "Enter Client Country" << endl;
	cin >> Client1.Country;

	cout << "Enter Client Gender" << endl;
	cin >> Client1.Gender;

	cout << "Enter Client Monthly Salary" << endl;
	cin >> Client1.MonthlySalary;

	cout << "Enter Client Phone Number" << "\n";
	cin >> Client1.PhoneNumber;

	cout << "Name ; " << Client1.Name << endl;
	cout << "Age ; " << Client1.Age << endl;
	cout << "City ; " << Client1.City << endl;
	cout << "Country ; " << Client1.Country << endl;
	cout << "Gender ; " << Client1.Gender << endl;
	cout << "Monthly Salary ; " << Client1.MonthlySalary << endl;
	cout << "Yearly Salary ; " << Client1.YearlySalary << endl;
	cout << "Phone Numer ; " << Client1.PhoneNumber << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//enum
	Color MyColor;
	MyColor = Color::Green;

	Diraction MyDiraction;
	MyDiraction = Diraction::West;

	Week MyWeek;
	MyWeek = Week::Sun;

	cout << MyColor << "\n";
	cout << MyDiraction << "\n";
	cout << MyWeek << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Converstion form int to double
	int NUM22;
	double NUM23 = 18.99;

	NUM22 = NUM23; //Implecit Conversion from double to int

	NUM22 = int(NUM23); //Explicit Converstion

	NUM22 = (int)NUM23;  //Ecplicit Conv


	cout << NUM22 << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Must us #include <string>
	//converstion from string to any other
	string NUM42 = "123.482";

	int NUMint = stoi(NUM42); //Converstion from string to int
	float NUMfloat = stof(NUM42);//Converstion from string to Float
	double NUMdouble = stod(NUM42);//Converstion from string to doubel

	cout << NUMint << endl;
	cout << NUMfloat << endl;
	cout << NUMdouble << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Convertison any other to string 
	int NUM77 = 18;
	double NUM78 = 18.34;
	string St1;
	string St2;

	St1 = to_string(NUM77);
	St2 = to_string(NUM78);

	cout << St1 << endl;
	cout << St2 << endl;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//String Tricks
	string MYstring305 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The Lenght of string is " << MYstring305.length() << endl;//How many character in the stiring

	cout << MYstring305[2] << endl;//will print char 2 in string = C

	string MYSTRING305 = "10";
	string MYSTRING306 = "20";
	string MYSTRING307 = MYSTRING305 + MYSTRING306;

	cout << MYSTRING307 << endl;//will be 1020

	int MYSTRING308 = stoi(MYSTRING305) + stoi(MYSTRING306);

	cout << MYSTRING308 << endl;//will be 30

	string FULLNAME310;

	getline(cin, FULLNAME310);//to read any thing after click space
	cout << FULLNAME310;

	cout << "***********************************************************************************" << endl << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int Result6;
	Result6 = myFunctionint();

	myFunction();
	cout << myFunctionstring() << endl;
	cout << Result6 << endl;

		cout << "***********************************************************************************" << endl << endl;

   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << MySumFunction(10, 20) << endl;
		int NUM21, NUM22;
		cin >> NUM21;
		cin >> NUM22;
		cout << MySumFunction(NUM21, NUM22) << endl;

		cout << "***********************************************************************************" << endl << endl;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << ::x<< endl; //from global x

		cout << "***********************************************************************************" << endl << endl;

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int NUM67 = 1000;

		cout << NUM67 << endl;//Called BY Value
		cout << &NUM67 << endl;// if you ad [&] will give you number address in hexa and called by Reffrence

		cout << "***********************************************************************************" << endl << endl;

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//Array
		int z[5] = { 22, 35, 76, 92, 322 };

		cout << z[0] << endl;
		cout << z[1] + z[4] << endl;
		cout << z[2] << endl;
		cout << z[3] << endl;
		cout << z[4] << endl;

		cout << "***********************************************************************************" << endl << endl;

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		double GradesOfStudeuntss[3];

		cout << "Please Enter Grade third " << endl;
		cin >> GradesOfStudeuntss[0];
		cout << "Please Enter Grade second " << endl;
		cin >> GradesOfStudeuntss[1];
		cout << "Please Enter Grade third " << endl;
		cin >> GradesOfStudeuntss[2];

		double Average22 = (GradesOfStudeuntss[0] + GradesOfStudeuntss[1] + GradesOfStudeuntss[2]) / 3;
		cout << "Your Average of your Grades is " << Average22 << endl;


		cout << "***********************************************************************************" << endl << endl;


 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int q12;

		cout << "Enter Number" << endl;
		cin >> q12;

		if (q12 >= 10)
		{
			cout << " True Number is Greater " << endl;
		}
		else
		{
			cout << " False Number Not Greater " << endl;
		}

		cout << "***********************************************************************************" << endl << endl;

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int Time11;

		cout << "Enter Time" << endl;
		cin >> Time11;

		if (Time11 < 12)
		{
			cout << "Good Morning" << endl;

		}
		else if (Time11 < 20)
		{
			cout << "Good Day" << endl;

		}
		else
		{
			cout << "Good Evening" << endl;

		};

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << "****************************\n";
		cout << "Please Chose the number of your color?\n";
		cout << "(1) Red\n";
		cout << "(2) Blue\n";
		cout << "(3) Green\n";
		cout << "(4) Yellow\n";
		cout << "****************************\n\n";
		cout << "Your Choice? ";

		int c;
		enScreenColor Color;

		cin >> c;
		Color = (enScreenColor)c;

		if (Color == enScreenColor::Red)
		{
			system("color 4F");

		}
		else if (Color == enScreenColor::Blue)
		{
			system("color 1F");
		}
		else if (Color == enScreenColor::Green)
		{
			system("color 2F");
		}
		else if (Color == enScreenColor::Yellow)
		{
			system("color 6F");
		}

		else

		{
			system("color 4F");
		};

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << "*********************************" << endl;
		cout << "Please enter your country\n";
		cout << "Enter (1) if Egypt \n";
		cout << "Enter (2) if Plastaian \n";
		cout << "Enter (3) if Jordan \n";
		cout << "Enter (4) if Algeria \n";
		cout << "Enter (5) if Other \n";
		cout << "*********************************" << endl;

		int c21;
		enCountry333 Countrary333;

		cin >> c21;
		Countrary333 = (enCountry333)c21;

		if (Countrary333 == enCountry333::Egypt)
		{
			cout << "You country is Egypt\n";
		}
		else if (Countrary333 == enCountry333::Plastaian)
		{
			cout << "You country is Plastaian\n";

		}
		else if (Countrary333 == enCountry333::Jordan)
		{
			cout << "You country is Jordan\n";
		}
		else if (Countrary333 == enCountry333::Algeria)
		{
			cout << "You country is Algeria\n";
		}
		else if (Countrary333 == enCountry333::Other)
		{
			cout << "You country is Other\n";
		}
		else
		{
			cout << "You country is Other\n";

		};

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		//Switch case
		cout << "*********************************" << endl;
		cout << "Please enter your country\n";
		cout << "Enter (1) if Egypt \n";
		cout << "Enter (2) if Plastaian \n";
		cout << "Enter (3) if Jordan \n";
		cout << "Enter (4) if Algeria \n";
		cout << "Enter (5) if Other \n";
		cout << "*********************************" << endl;

		int c26;
		enCountry333 Countrary3377;

		cin >> c26;
		Countrary3377 = (enCountry333)c26;

		switch (Countrary3377)
		{
		case 1:
			cout << "Your country is Egypt\n";
			break;
		case 2:
			cout << "Your country is Plastaian\n";
			break;
		case 3:
			cout << "Your country is Jordan\n";
			break;
		case 4:
			cout << "Your country is Algeria\n";
			break;
		case 5:
			cout << "Your country is Other\n";
			break;
		default:
			cout << "Wrong Number\n";

		}


		cout << "***********************************************************************************" << endl << endl;


		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		for (int byd = 1; byd <= 5; byd++)
		{
			cout << "Allah" << byd << endl;
		}

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int Array[100];
		int Lenght = 0;
		ReadArrayData(Array, Lenght);
		PrintArrayData(Array, Lenght);

		cout << "***************************************************\n" << endl;
		cout << "Sum = " << CalulateArrayData(Array, Lenght) << endl;
		cout << "Average = " << AvrageArrayData(Array, Lenght) << endl;

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		for (int i = 1; i <= 10; i++)
		{

			cout << "Number = " << i << endl;

			for (int j = 1; j <= 10; j++)
			{

				cout << j << "*" << i << "=" << j * i << endl;

			}
		}

		cout << "***********************************************************************************" << endl << endl;

	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << "Your number is " << ReadMyNumber(18, 45) << endl;

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		cout << " Your Age is  " << ReadMyNumberByDo(18, 45) << endl;

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int arr68[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
		int SerchFor;

		cout << "Choose number " << endl;
		cout << " { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } " << endl;
		cin >> SerchFor;


		for (int i68 = 0; i68 <= 10; i68++)
		{
			cout << "We are at intration " << i68 << endl << endl;

			if (arr68[i68] == SerchFor)
			{
				cout << "Number found at intration " << i68 << endl;
				break;
			}

		}

		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		int sum33 = 0;
		int Number33 = 0;

		for (int i33 = 1; i33 <= 5; i33++)
		{
			cout << "Enter number less than 50 " << endl;
			cin >> Number33;
			cout << "************************************" << endl;

			if (Number33 > 50)
			{
				cout << "Wrong number enter number less than 50" << endl;
				continue;
			}

			int Total33;

			Total33 = sum33 += Number33;
			cout << Total33 << endl;
		}
		
		cout << "***********************************************************************************" << endl << endl;

		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




};