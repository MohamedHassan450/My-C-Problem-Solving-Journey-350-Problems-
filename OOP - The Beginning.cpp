#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<vector>
#include<cctype>
#include<fstream>
#include<cstdlib>

using namespace std;

//(1)
class clsPerson
{

public:
	string FirstName; //Data Member
	string SecondName;

	string FullName() //Method Member
	{
		string FullName;
		FullName = FirstName + SecondName;
		return FullName;
	}

private:

	int SecretPinCode;

	int PinCode()
	{
		cout << "Enter Code ? ";
		cin >> SecretPinCode;

		return SecretPinCode;
	}

protected:

	int SecretPinCodeCanUsedInInhertance;

	int PinCode()
	{
		cout << "Enter Code ? ";
		cin >> SecretPinCodeCanUsedInInhertance;

		return SecretPinCodeCanUsedInInhertance;
	}

};

void TestFirstClass()
{
	clsPerson Person1, Person2;

	Person1.FirstName = "Mohamed";
	Person1.SecondName = " Hassan";
	cout << Person1.FullName() << endl;

	Person2.FirstName = "Lizarazu";
	Person2.SecondName = " Zagiany";
	cout << Person2.FullName() << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(8)(9)(10)
class clsPerson2
{
private:
	int _ID = 298715;
	string _FirstName;
	string _SecondName;
public:

	//Property Get not set to not be Change in main
	int GetID()
	{
		return _ID;
	}

	//Property set
	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	//Property Get
	string GetFirstName()
	{
		return _FirstName;
	}

	//Property set
	void SetSecondName(string SecondName)
	{
		_SecondName = SecondName;
	}

	//Property Get
	string GetSecondName()
	{
		return _SecondName;
	}

	string FullName()
	{
		return _FirstName + " " + _SecondName;
	}

	__declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;
	__declspec(property(get = GetSecondName, put = SetSecondName))string SecondName;
};

void Video8and9and10()
{
	clsPerson2 Person2;

	Person2.SetFirstName("Mohamed");
	Person2.SetSecondName("Hassan");

	cout << "ID = " << Person2.GetID() << endl;
	cout << "First Name = " << Person2.GetFirstName() << endl;
	cout << "Second Name = " << Person2.GetSecondName() << endl;
	cout << "Full Name = " << Person2.FullName() << endl;
	cout << endl;
	cout << endl;


	//insted of above 
	Person2.FirstName = "Mohamed";
	Person2.SecondName = "Hassan";

	cout << "First Name = " << Person2.FirstName << endl;
	cout << "Second Name = " << Person2.SecondName << endl;
	cout << "Full Name = " << Person2.FirstName + " " + Person2.SecondName << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(13)
class clsCalculator
{
private:

	int Result = 0;


public:

	void AddNumber(int Num)
	{

		Result = Result + Num;
		cout << "Result After Adding " << Num << " = " << Result << endl;

	}

	void MultyNumber(int Num)
	{

		Result = Result * Num;
		cout << "Result After Multiplay " << Num << " = " << Result << endl;

	}

	void SubtractNumber(int Num)
	{

		Result = Result - Num;

		cout << "Result After Subtract " << Num << " = " << Result << endl;

	}

	void DivdedNumber(int Num)
	{

		Result = Result / Num;

		cout << "Result After Divided " << Num << " = " << Result << endl;
	}



	void ClearResult()
	{
		Result = 0;

		cout << "Result Cleared :-) " << endl;
	}

};

void Video13()
{
	clsCalculator  Calculator;

	Calculator.AddNumber(100);


	Calculator.ClearResult();

	Calculator.AddNumber(100);


	Calculator.MultyNumber(3);


	Calculator.SubtractNumber(60);


	Calculator.DivdedNumber(2);


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(15)
class clsTesConstractour
{
private:
	string _City;
	string _Group;
	string _Bulding;

public:

	clsTesConstractour(string City, string Group, string Bulding)                 //That Called Constructor that fill Class By Defult if you dont fill it
	{
		cout << "________________________________________" << endl;
		cout << "________________________________________" << endl;
		cout << "\t\tAddress" << endl;
		cout << "________________________________________" << endl;
		cout << "________________________________________" << endl;

		cout << "City :" << setw(12) << City << endl;
		cout << "Goup :" << setw(10) << Group << endl;
		cout << "Bulding :" << setw(5) << Bulding << endl;
	}

	void SetAddressCity(string AddressCity)
	{
		_City = AddressCity;
	}

	void SetAddressGroup(string AddressGroup)
	{
		_Group = AddressGroup;
	}

	void SetAddressBulding(string AddressBulding)
	{
		_Bulding = AddressBulding;
	}

	void PrintAddress()
	{
		cout << "________________________________________" << endl;
		cout << "________________________________________" << endl;
		cout << "\t\tAddress" << endl;
		cout << "________________________________________" << endl;
		cout << "________________________________________" << endl;

		cout << "City :" << setw(10) << _City << endl;
		cout << "Goup :" << setw(10) << _Group << endl;
		cout << "Bulding :" << setw(10) << _Bulding << endl;
	}
};

void Video15()
{
	clsTesConstractour Adress("Rehab", "8th", "3");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(17)

class clsTestDestractour
{
public:
	clsTestDestractour()
	{
		cout << "I am Constructor" << endl;
	}

	~clsTestDestractour()
	{
		cout << "I am Destructour and I approverd that class after used deleted from memory" << endl;
	}
};

void Fun1()
{
	clsTestDestractour Test;
}

void Fun2()
{
	clsTestDestractour* Test2 = new clsTestDestractour;

	delete Test2; //Becasue it is new and i user pointer i must delete it manual
}

void Video17()
{
	Fun1();
	Fun2();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(18)
class clsTestStatic
{
public:

	int Normal;
	static int Counter;

	clsTestStatic()
	{
		Counter++;
	}

	void PrintStatic()
	{
		cout << "Normal Int = " << Normal << endl;
		cout << "Static Int = " << Counter << endl;
		cout << endl;
		cout << endl;

	}
};

int clsTestStatic::Counter = 0;

void Video18()
{
	clsTestStatic Static1, Static2, Static3;

	Static1.Normal = 10;
	Static2.Normal = 20;
	Static3.Normal = 30;

	Static1.PrintStatic();
	Static2.PrintStatic();
	Static3.PrintStatic();

	Static1.Counter = 100;
	Static2.Counter = 200; //When modfiy it is modfiy all


	Static1.PrintStatic();
	Static2.PrintStatic();
	Static3.PrintStatic();

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(19)
class clsTestStaticFun
{
public:
	static int  Func1()
	{
		return 20;
	}

	int  Func2()
	{
		return 20;
	}

};

void Video19()
{
	clsTestStaticFun INT;
	cout << clsTestStaticFun::Func1() << endl; //can call it witout object
	cout << INT.Func2() << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//HomeWork
class clsEmployee
{
private:
	string _FirstName;
	string _LastName;
	string _FullName;
	string _Department;
	string _Title;
	string _Email;
	string _Phone;
	int _Salary;
	string ID = "ID187545";

public:

	clsEmployee(string FirstName, string LastName, string Depatment, string Title, string Email, string Phone, int Salary)
	{
		_FirstName = FirstName;
		_LastName = LastName;
		_FullName = _FirstName + " " + _LastName;
		_Department = Depatment;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
	}

	void SetFirstName()
	{
		cout << endl;
		cout << "Enter Employee First Name ? ";
		cin >> _FirstName;
	}
	string GetFirstName()
	{
		cout << "First Name : " << endl;
		return _FirstName;
	}

	void SetLastName()
	{
		cout << endl;
		cout << "Enter Employee Second Name ? ";
		cin >> _LastName;
	}
	string GetLastName()
	{
		cout << "Second Name : " << endl;
		return _LastName;
	}

	void SetFullName()
	{
		_FullName = _FirstName + " " + _LastName;
	}
	string GetFullName()
	{
		cout << endl;

		cout << "Full Name : " << _FirstName + " " + _LastName << endl;
		return _FullName;
	}

	void SetDepartment()
	{
		cout << endl;
		cout << "Enter Employee Department? ";
		cin >> _Department;
	}
	string GetDepartment()
	{
		cout << endl;

		cout << "Depatrment : " << _Department << endl;
		return _Department;
	}

	void SetTitle()
	{
		cout << endl;
		cout << "Enter Employee Title? ";
		cin >> _Title;
	}
	string GetTitle()
	{
		cout << endl;

		cout << "Title : " << _Title << endl;
		return _Title;
	}

	void SetEmail()
	{
		cout << endl;
		cout << "Enter Employee Email? ";
		cin >> _Email;
	}
	string GetEmail()
	{
		cout << endl;

		cout << "Email : " << _Email << endl;
		return _Email;
	}

	void SetPhone()
	{
		cout << endl;
		cout << "Enter Employee Phone? ";
		cin >> _Phone;
	}
	string GetPhone()
	{
		cout << endl;
		cout << "Phone : " << _Phone << endl;
		return _Phone;
	}

	void SetSalary()
	{
		cout << endl;
		cout << "Enter Employee Salary? ";
		cin >> _Salary;
	}
	int GetSalary()
	{
		cout << endl;
		cout << "Salary : " << _Salary << endl;
		return _Salary;
	}

	string GetID()
	{
		cout << endl;
		cout << "ID : " << ID << endl;
		return ID;
	}

	void PrintInfo()
	{
		cout << "Employee Information" << endl;
		cout << "___________________________________________" << endl;
		cout << "First Name :" << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Name : " << _FirstName + " " + _LastName << endl;
		cout << "Department : " << _Department << endl;
		cout << "Title : " << _Title << endl;
		cout << "Email : " << _Email << endl;
		cout << "Phone : " << _Phone << endl;
		cout << "Salary : " << _Salary << endl;
	}
};

void HomeWork()
{
	clsEmployee Employee1("Mohamed", "Hassan", "IT", "CEO", "mohamed1126983220@gmail.com", "01126978651", 980000);

	Employee1.PrintInfo();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(21)(22)(23)(24)+HomeWork
class clsBaseClass
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsBaseClass(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	//Read Only Property
	int ID()
	{
		return _ID;
	}
	//Property Set
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	//Property Get
	string FirstName()
	{
		return _FirstName;
	};

	//Property Set
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	//Property Get
	string LastName()
	{
		return _LastName;
	}
	//Property Set
	void setEmail(string Email)
	{
		_Email = Email;
	}
	//Property Get
	string Email()
	{
		return _Email;
	}
	//Property Set
	void setPhone(string Phone)
	{
		_Phone = Phone;
	}
	//Property Get
	string Phone()
	{
		return _Phone;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	void Print()
	{
		cout << "\nInfo:";
		cout << "\n___________________";
		cout << "\nID         : " << _ID;
		cout << "\nFirstName  : " << _FirstName;
		cout << "\nLastName   : " << _LastName;
		cout << "\nFull Name  : " << FullName();
		cout << "\nEmail      : " << _Email;
		cout << "\nPhone      : " << _Phone;
		cout << "\n___________________\n";
	}
	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully toemail: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;
	}
	void SendSMS(string TextMessage)
	{
		cout << "\nThe following SMS sent successfully to phone: "
			<< _Phone;
		cout << "\n" << TextMessage << endl;
	}
};

class clsSubClass : public clsBaseClass
{
private:
	string _Department;
	string _Title;

public:

	clsSubClass(int ID, string FirstName, string LastName, string Email, string Phone, string Department, string Tiltle) :clsBaseClass(ID, FirstName, LastName, Email, Phone)
	{
		_Department = Department;
		_Title = Tiltle;
	}

	void setDepartment(string Department)
	{
		_Department = Department;
	}

	string GetDepartment()
	{
		return _Department;
	}

	void setTitle(string Title)
	{
		_Title = Title;
	}

	string GetTitle()
	{
		return _Title;
	}
	void Print()
	{
		clsBaseClass::Print();

		cout << "Title      : " << _Title << endl;
		cout << "Department : " << _Department << endl;

	}



};

class clsDeveloper : public clsSubClass
{
private:
	string _ProgramingLanguse;
public:

	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Department, string Tiltle, string ProgramingLanguse) :clsSubClass(ID, FirstName, LastName, Email, Phone, Department, Tiltle)
	{
		_ProgramingLanguse = ProgramingLanguse;
	}

	void SetProgramin(string ProgramingLanguse)
	{
		_ProgramingLanguse = ProgramingLanguse;
	}

	string GetPrograminglanguse()
	{
		return _ProgramingLanguse;
	}

	void Print()
	{
		clsSubClass::Print();
		cout << "___________________" << endl;
		cout << "Programing Languse : " << _ProgramingLanguse << endl;
	}
};

void Video21v22v23v24()
{
	clsDeveloper Develpoer(15, "Mohamed", "Hassan", "aborra@f.com", "056156565", "IT", "CIO", "C#");
	Develpoer.Print();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class clsPerson18
{
public:
	void FullName()
	{
		cout << "Mohamed Hassan" << endl;
	}
};

class clsEmployee18 : public clsPerson18
{
public:

	void Title()
	{
		cout << "CEO" << endl;
	}
};

void VideoTestUppCasting()
{
	clsEmployee18 Employee18;
	Employee18.FullName();

	//UppCasting BaseClass Has Access to Sub Class but only can use what sub inhert from
	clsPerson18* Person1 = &Employee18;
	Person1->FullName();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class clsA
{
public:
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};
//object sent by value, any updated will not b reflected
// on the original object
void Fun1(clsA A1)
{
	A1.x = 100;
}
//object sent by reference, any updated will be reflected
// on the original object
void Fun2(clsA& A1)
{
	A1.x = 300;
}

void PassingObjectToFunction()
{
	clsA A1;
	A1.x = 50;
	cout << "\nA.x before calling function1: \n";
	A1.Print();
	//Pass by value, object will not be afected.
	Fun1(A1);
	cout << "\nA.x after calling function1 byval: \n";
	A1.Print();
	//Pass by value, object will be afected.
	Fun2(A1);
	cout << "\nA.x after calling function2 byref: \n";
	A1.Print();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class clsd
{
public:
	//Parametarized Constructor
	clsd(int value)
	{
		x = value;
	}
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

void ClassVector()
{
	vector <clsd> v1;
	short NumberOfObjects = 5;
	// inserting object at the end of vector
	for (int i = 1; i <= NumberOfObjects; i++)
	{
		v1.push_back(clsd(i));
	}
	// printing object content
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class clsF
{
public:
	// dummy constructor
	clsF() {}

	//Parametarized Constructor
	clsF(int value)
	{
		x = value;
	}
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

void ClassArray()
{
	short NumberOfObjects = 5;
	// allocating dynamic array
	// of Size NumberOfObjects using new keyword
	clsF* arrA = new clsF[NumberOfObjects];
	// calling constructor
	// for each index of array
	for (int i = 0; i < NumberOfObjects; i++) 
	{
		arrA[i] = clsF(i);
	}
	// printing contents of array
	for (int i = 0; i < NumberOfObjects; i++) 
	{
		arrA[i].Print();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class clsEasyerArray
{
public:

	clsEasyerArray() {}


	clsEasyerArray(int value)
	{
		x = value;
	}

	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

void ArrayMoreEasy()
{
	int Num = 5;

	clsEasyerArray Array[2] = { clsEasyerArray(10),clsEasyerArray(20) };

	for (int i = 0; i < 2; i++)
	{
		Array[i].Print();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T > T VariableType(T Number1, T Number2, T Number3 = 0)
{
	Number3 = Number1 + Number2;
	return Number3;
}

void TestVariableTemplate()
{

	cout << VariableType<double>(5.9, 6.8) << endl;

	cout << VariableType<int>(5, 6) << endl;

	cout << VariableType<char>('h', 'f') << endl;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class Variable> class clsTestVariableClass
{
private:
	Variable _Number1;
	Variable _Number2;
public:

	clsTestVariableClass(Variable Number1, Variable Number2)
	{
		_Number1 = Number1;
		_Number2 = Number2;
	}

	Variable DoPlus()
	{
		return _Number1 + _Number2;
	}

	Variable DoSubstract()
	{
		return _Number1 - _Number2;
	}

	Variable DoMultyPlay()
	{
		return _Number1 - _Number2;
	}

	void Print()
	{

		cout << "Add = " << DoPlus() << endl;
		cout << "Substract = " << DoSubstract() << endl;
		cout << "MultuyPlay = " << DoMultyPlay() << endl;
		cout << endl;
		cout << endl;
	}
};

void VariableClass()
{
	clsTestVariableClass <int> INT(5, 10);
	INT.Print();

	clsTestVariableClass <double> Double(7.2, 9.9);
	Double.Print();


	clsTestVariableClass <char> Char('F', 'T');
	Char.Print();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

}