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
int ReadNumber()
{
	int Number1;

	cout << "Enter Number  less than billion ? " << endl;
	cin >> Number1;

	return Number1;

}

string ConvertNumberToWord(int Number1)
{
	if (Number1 == 0)
	{
		return "";
	}

	if (Number1 >= 1 && Number1 <= 19)
	{
		string array1[] = { "","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
		return array1[Number1];
	}

	if (Number1 >= 20 && Number1 <= 100)
	{
		string array20[] = { "" ,"","Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety ", " one Hundred " };
		return array20[Number1 / 10] + "" + ConvertNumberToWord(Number1 % 10);
	}

	if (Number1 >= 101 && Number1 <= 1000)
	{
		string array100[] = { "","", "Two hundred", "Three hundred", "Four hundred", "Five hundred", "Six hundred", "Seven hundred", "Eight hundred", "Nine hundred", "One thousand" };
		return array100[Number1 / 100] + " " + ConvertNumberToWord(Number1 % 100);

	}

	if (Number1 >= 1001 && Number1 <= 19000)
	{
		string array1000[] = { "" , "",	"Two thousand",	"Three thousand",	"Four thousand",	"Five thousand",	"Six thousand",	"Seven thousand",	"Eight thousand",	"Nine thousand",	"Ten thousand",	"Eleven thousand",	"Twelve thousand","Thirteen thousand",	"Fourteen thousand",	"Fifteen thousand",	"Sixteen thousand",	"Seventeen thousand",	"Eighteen thousand",	"Nineteen thousand" };
		return array1000[Number1 / 1000] + " " + ConvertNumberToWord(Number1 % 1000);
	}

	if (Number1 >= 20000 && Number1 <= 100000)
	{
		string array20000[] = { "" , "","Twen","Thirty","Forty","Fifty","Six","Seventy","Eighty","Ninety","Onehundred" };
		return array20000[Number1 / 10000] + " " + ConvertNumberToWord(Number1 % 10000);
	}
	if (Number1 >= 101000 && Number1 <= 1000000)
	{
		string array100000[] = { "","","Two hundred thousand","Three hundred thousand","Four hundred thousand","Five hundred thousand","Six hundred thousand","Seven hundred thousand","Eight hundred thousand","Nine hundred thousand","One million" };
		return array100000[Number1 / 100000] + " " + ConvertNumberToWord(Number1 % 100000);
	}

	if (Number1 > 1000000 && Number1 <= 19000000)
	{
		string array19000000[] = { "","","Two million", "Three million", "Four million", "Five million", "Six million", "Seven million", "Eight million", "Nine million", "Ten million", "Eleven million", "Twelve million", "Thirteen million", "Fourteen million", "Fifteen million", "Sixteen million", "Seventeen million", "Eighteen million", "Nineteen million" };
		return array19000000[Number1 / 1000000] + " " + ConvertNumberToWord(Number1 % 1000000);
	}
	if (Number1 > 19000000 && Number1 <= 100000000)
	{
		string array20000000[] = { "", "","Twenty million","Thirty million","Forty million","Fifty million","Sixty million","Seventy million","Eighty million","Ninety million","One hundred million" };
		return array20000000[Number1 / 10000000] + " " + ConvertNumberToWord(Number1 % 10000000);
	}
	if (Number1 > 100000000 && Number1 <= 1000000000)
	{
		string array1Billion[] = { "","","Two hundred million","Three hundred million","Four hundred million","Five hundred million","Six hundred million","Seven hundred million","Eight hundred million","Nine hundred million","One billion" };
		return array1Billion[Number1 / 100000000] + " " + ConvertNumberToWord(Number1 % 100000000);
	}

}

void Problem1() 
{
	//(1)
	int Number1 = ReadNumber();

	cout << ConvertNumberToWord(Number1) << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(2)
int ReadNumber2()
{
	int Number2;

	cout << "Enter year to see it is leap or not ? " << endl;
	cin >> Number2;

	return Number2;

}

bool IfItLeap(int Number2)
{
	Number2 / 4;
	if ((Number2 % 2) == 1)
	{
		return false;
	}
	else if ((Number2 % 2) == 0)
	{
		return true;
	}

}

void Problem2()
{
	//(2)
	int Number2 = ReadNumber2();

	if (IfItLeap(Number2))
	{
		cout << "it is leap year" << endl;
	}
	else
	{
		cout << "it is not leap year" << endl;

	}

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(3)
int ReadNumber3()
{
	int Number2;

	cout << "Enter year to see it is leap or not ? " << endl;
	cin >> Number2;

	return Number2;

}

int  IfItLeapReturn366(int Number3)
{
	Number3 / 4;
	if ((Number3 % 2) == 1)
	{
		Number3 = 365;
		return Number3;
	}
	else if ((Number3 % 2) == 0)
	{
		Number3 = 366;
		return Number3;

	}
};

int CalculateHours(int Days)
{
	int Hours = 24;
	Hours = Hours * Days;

	return Hours;
}

int ClaculateMinuts(int Hours)
{
	int Minutes = 60;

	Minutes = Minutes * Hours;

	return Minutes;

}

int ClaculateSeconds(int Minutes)
{
	int Seconds = 60;

	Seconds = Seconds * Minutes;

	return Seconds;
}

void Problem3()
{
	//(3)
	int Number3 = ReadNumber3();
	int Days = IfItLeapReturn366(Number3);
	int Hours = CalculateHours(Days);
	int Minutes = ClaculateMinuts(Hours);
	int Seconds = ClaculateSeconds(Minutes);

	cout << "Year " << Number3 << " = " << Days << " Days" << endl;
	cout << "Year " << Number3 << " = " << Hours << " Hours" << endl;
	cout << "Year " << Number3 << " = " << Minutes << " Minutes" << endl;
	cout << "Year " << Number3 << " = " << Seconds << " Seconds" << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(5)
int ReadYear5()
{
	int Year5;
	cout << "Enter Year ? ";
	cin >> Year5;

	return Year5;
}

short ReadMonth()
{
	short HowManyMonth;
	cout << "Enter  Month ? ";
	cin >> HowManyMonth;

	return HowManyMonth;
}

int LeapOrNot(int Year5)
{
	Year5 / 4;
	return (Year5 % 2 == 0 ? 366 : 365);
}

short MonthDays(int Year5, short WhichMonth)
{
	if (LeapOrNot(Year5) == 366 && WhichMonth == 2)
	{
		return 29;
	}
	if (LeapOrNot(Year5) == 365 && WhichMonth == 2)
	{
		return 28;
	}
	if ((LeapOrNot(Year5) == 365 || LeapOrNot(Year5) == 366) && (WhichMonth == 1 || WhichMonth == 3 || WhichMonth == 5 || WhichMonth == 7 || WhichMonth == 8 || WhichMonth == 10 || WhichMonth == 12))
	{
		return 31;
	}
	if ((LeapOrNot(Year5) == 365 || LeapOrNot(Year5) == 366) && (WhichMonth == 4 || WhichMonth == 6 || WhichMonth == 9 || WhichMonth == 11))
	{
		return 30;
	}
	else
	{
		return 405;
	}
}

int HoursInMonth(short MonthDays5)
{
	return (MonthDays5 * 24);
}

int MinutesInMonth(int Hours5)
{
	return(Hours5 * 60);
}

int SecondsInMonth(int Minutes5)
{
	return (Minutes5 * 60);
}

void Problem5()
{
	//(5)
	int Year5 = ReadYear5();
	short WhichMonth = ReadMonth();
	short MonthDays5 = MonthDays(Year5, WhichMonth);
	int Hours5 = HoursInMonth(MonthDays5);
	int Minutes5 = MinutesInMonth(Hours5);
	int Second5 = SecondsInMonth(Minutes5);

	if (MonthDays5 == 28 || MonthDays5 == 29 || MonthDays5 == 30 || MonthDays5 == 31)
	{
		cout << "Month " << WhichMonth << " = " << MonthDays5 << " Days " << endl;
		cout << "Month " << WhichMonth << " = " << Hours5 << " Hours " << endl;
		cout << "Month " << WhichMonth << " = " << Minutes5 << " Minutes " << endl;
		cout << "Month " << WhichMonth << " = " << Second5 << " Seconds " << endl;
	}
	else if (MonthDays5 == 405)
	{
		cout << "Wrong Number :-(" << endl;
	}


	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(7)
int ReadYear6()
{
	int Year6;
	cout << "Enter Year ? ";
	cin >> Year6;

	return Year6;
}
short ReadMonth6()
{
	short HowManyMonth6;
	cout << "Enter  Month ? ";
	cin >> HowManyMonth6;

	return HowManyMonth6;
}
short ReadDay6()
{
	short Day6;
	cout << "Enter  Day ? ";
	cin >> Day6;

	return Day6;
}

int CalculateWhenDate6(int Year6, short Month6, short Day6)
{
	int a, y, m, d;

	a = ((14 - Month6) / 12);
	y = Year6 - a;
	m = Month6 + 12 * a - 2;
	d = (Day6 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

	return d;

}

string WhichDay(int ClaculateDay)
{
	string ArrayDayName[] = { "Sunday","Monday" ,"Tuesday","Wednesday" , "Thursday" , "Friday", "Saturday" };

	for (int I = 0; I < ClaculateDay; I++)
	{
		if (I = ClaculateDay)
		{
			return ArrayDayName[I];
		}
	}

}

void Problem7()
{
	//(7)
	int Year6 = ReadYear6();
	short Month6 = ReadMonth6();
	short Day6 = ReadDay6();
	int ClaculateDay = CalculateWhenDate6(Year6, Month6, Day6);
	cout << endl;

	cout << "Date  :  " << Day6 << "/" << Month6 << "/" << Year6 << endl;
	cout << "Day in Week  :  " << ClaculateDay << endl;
	cout << "Day Name  :  " << WhichDay(ClaculateDay) << endl;


	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(10)
int ReadYear11()
{
	int Year11;

	cout << "Enter Year ? ";
	cin >> Year11;
	cout << endl;

	return Year11;
}
int ReadMonth11()
{
	int Month11;

	cout << "Enter Month ? ";
	cin >> Month11;
	cout << endl;

	return Month11;
}
int ReadDay11()
{
	int Day11;

	cout << "Enter Day ? ";
	cin >> Day11;
	cout << endl;

	return Day11;
}


int LeapOrNot11(int Year11)
{
	Year11 / 4;
	return (Year11 % 2 == 0 ? 366 : 365);
}

int TotalFromJanuaryToMonthEntered11(int CheckLeapOrNot11, int Month11, int Day11)
{
	int LeapArray[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int NotLeapArray[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int SumForLeap = 0;
	int SumForNotLeap = 0;


	if (CheckLeapOrNot11 == 366)
	{
		for (int I10 = 0; I10 < Month11 - 1; I10++)
		{
			SumForLeap = SumForLeap + LeapArray[I10];
		}
		SumForLeap = SumForLeap + Day11;
		return SumForLeap;
	}
	else	if (CheckLeapOrNot11 == 365)
	{
		for (int I100 = 0; I100 < Month11 - 1; I100++)
		{
			SumForNotLeap = SumForNotLeap + NotLeapArray[I100];
		}
		SumForNotLeap = SumForNotLeap + Day11;
		return SumForNotLeap;

	}
	else
	{
		cout << "Wrong Year :-(";
	}


}

struct Three
{
	short  Day;
	short Month;
	int Year;
};

Three ConvertNumberToDate(int TotalDays, int Day11, int Month11, int Year11)
{
	Three Date;
	int NotLeapArray[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int Month[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };



	for (int I = 0; I <= NotLeapArray[11]; I++)
	{
		TotalDays = TotalDays - NotLeapArray[I];

		if (TotalDays == 2 || TotalDays < 2)
		{
			Date.Day = Day11;
			Date.Month = Month[I];
			Date.Year = Year11;
			break;
		}

	}



	return Date;


}

void PrintDate(Three Date)
{
	cout << "Act Like You Take the number above and convert it to date" << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

void Problem10()
{

	//(10)
	int Year11 = ReadYear11();
	int Month11 = ReadMonth11();
	int Day11 = ReadDay11();
	int CheckLeapOrNot11 = LeapOrNot11(Year11);
	int TotalDays = TotalFromJanuaryToMonthEntered11(CheckLeapOrNot11, Month11, Day11);


	cout << "From Month (1) To Month (" << Month11 << "/" << Day11 << ") = " << TotalDays << endl;

	Three Date = ConvertNumberToDate(TotalDays, Day11, Month11, Year11);
	PrintDate(Date);

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(12)
struct Date12
{
	short Day12;
	short Month12;
	int Year12;
};

short ReadDay12()
{
	short Day12;
	cout << "Enter Day? ";
	cin >> Day12;
	return Day12;
}

short ReadMonth12()
{
	short Month12;
	cout << "Enter Month? ";
	cin >> Month12;
	return Month12;
}

int ReadYear12()
{
	int Year12;
	cout << "Enter Year? ";
	cin >> Year12;
	return Year12;
}

int ReadDaysWillAdded12()
{
	int AddDays12;
	cout << "Enter Days to add? ";
	cin >> AddDays12;
	return AddDays12;
}

Date12 ReadFullDateInStruct()
{
	Date12 Date;
	Date.Day12 = ReadDay12();
	Date.Month12 = ReadMonth12();
	Date.Year12 = ReadYear12();
	return Date;
}

bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

vector<int> GetDaysInMonth(int year)
{
	if (IsLeapYear(year))
		return { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	else
		return { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
}

Date12 AddDays(Date12 Date, int DaysToAdd)
{
	auto daysInMonth = GetDaysInMonth(Date.Year12);
	Date.Day12 += DaysToAdd;

	while (Date.Day12 > daysInMonth[Date.Month12 - 1])
	{
		Date.Day12 -= daysInMonth[Date.Month12 - 1];
		Date.Month12++;
		if (Date.Month12 > 12)
		{
			Date.Month12 = 1;
			Date.Year12++;
			daysInMonth = GetDaysInMonth(Date.Year12);
		}
	}

	return Date;
}


void Problem12()
{
	//(12)
	Date12 Date122 = ReadFullDateInStruct();
	int DaysToAdd = ReadDaysWillAdded12();
	Date12 DateAfterAdded = AddDays(Date122, DaysToAdd);

	cout << "New Date: " << DateAfterAdded.Day12 << "/" << DateAfterAdded.Month12 << "/" << DateAfterAdded.Year12 << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(13)
struct Date13
{
	short Day13;
	short Month13;
	short Year13;
};

short ReadDay111()
{
	short Day;
	cout << "First Date:" << endl;
	cout << "Enter Day ?";
	cin >> Day;
	return Day;
}
short ReadMonth111()
{
	short Month;
	cout << "Enter Month ?";
	cin >> Month;
	return Month;
}
int ReadYear()
{
	short Year;
	cout << "Enter Year ?";
	cin >> Year;
	return Year;
}
Date13 FirstDate()
{
	Date13 Date;

	Date.Day13 = ReadDay111();
	Date.Month13 = ReadMonth111();
	Date.Year13 = ReadYear();

	return Date;
}

short ReadDay222()
{
	short Day;
	cout << endl;
	cout << "Second Date:" << endl;
	cout << "Enter Day ?";
	cin >> Day;
	return Day;
}
short ReadMonth222()
{
	short Month;
	cout << "Enter Month ?";
	cin >> Month;
	return Month;
}
int ReadYear222()
{
	short Year;
	cout << "Enter Year ?";
	cin >> Year;
	return Year;
}
Date13 SecondDate()
{
	Date13 Date;

	Date.Day13 = ReadDay222();
	Date.Month13 = ReadMonth222();
	Date.Year13 = ReadYear222();

	return Date;
}

string WhichBigger(Date13 FirstYear, Date13 SecondYear)
{
	return (FirstYear.Year13 < SecondYear.Year13) ? "First Date Befor Second Date" : (FirstYear.Year13 > SecondYear.Year13) ? "Second Date Befor First Date" : (FirstYear.Month13 < SecondYear.Month13) ? "First Date Befor Second Date" : (FirstYear.Month13 > SecondYear.Month13) ? "Second Date Befor First Date" : (FirstYear.Day13 < SecondYear.Day13) ? "First Date Befor Second Date " : (FirstYear.Day13 > SecondYear.Day13) ? "Second Date Befor First Date" : (FirstYear.Day13 == SecondYear.Day13) ? "Date are Equal" : "Wrong Date";
}

void Problem13()
{
	//(13)
	Date13 FirstYear = FirstDate();
	Date13 SecondYear = SecondDate();

	cout << WhichBigger(FirstYear, SecondYear) << endl;


	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(15)
struct Date155
{
	short Day13;
	short Month13;
	short Year13;
};

short ReadDay15()
{
	short Day;
	cout << "First Date:" << endl;
	cout << "Enter Day ?";
	cin >> Day;
	return Day;
}
short ReadMonth15()
{
	short Month;
	cout << "Enter Month ?";
	cin >> Month;
	return Month;
}
int ReadYear15()
{
	short Year;
	cout << "Enter Year ?";
	cin >> Year;
	return Year;
}
Date155 Date15()
{
	Date155 Date;

	Date.Day13 = ReadDay15();
	Date.Month13 = ReadMonth15();
	Date.Year13 = ReadYear15();

	return Date;
}

string CheckDay(Date155 CheckLast)
{
	return ((CheckLast.Month13 == 1 || CheckLast.Month13 == 3 || CheckLast.Month13 == 5 || CheckLast.Month13 == 7 || CheckLast.Month13 == 8 || CheckLast.Month13 == 10 || CheckLast.Month13 == 12) && (CheckLast.Day13 == 31)) ? "It is Last Day in Month" : ((CheckLast.Month13 == 4 || CheckLast.Month13 == 6 || CheckLast.Month13 == 9 || CheckLast.Month13 == 11) && (CheckLast.Day13 == 30)) ? "It is Last Day in Month" : ((CheckLast.Month13 == 2) && (CheckLast.Day13 == (29)) && ((CheckLast.Year13 / 4) % 2 == 0)) ? "It is Last Day in Month" : ((CheckLast.Month13 == 2) && (CheckLast.Day13 == (28)) && ((CheckLast.Year13 / 4) % 2 == 1)) ? "It is Last Day in Month" : "It is Not Last Day in Month";
}

string ChecklastYear(Date155 CheckLast)
{
	return (CheckLast.Month13 == 12) ? "It is Last Month in Year" : "It is Not Last Month int Year";
}

void Problem15()
{
	//(15)
	Date155 CheckLast = Date15();

	cout << CheckDay(CheckLast) << endl;
	cout << ChecklastYear(CheckLast) << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//From (20) To (32)
struct Date16
{
	short Day13;
	short Month13;
	short Year13;
};

short ReadDay16()
{
	short Day;
	cout << "First Date:" << endl;
	cout << "Enter Day ?";
	cin >> Day;
	return Day;
}
short ReadMonth16()
{
	short Month;
	cout << "Enter Month ?";
	cin >> Month;
	return Month;
}
int ReadYear16()
{
	short Year;
	cout << "Enter Year ?";
	cin >> Year;
	return Year;
}
Date16 Date166()
{
	Date16 Date;

	Date.Day13 = ReadDay16();
	Date.Month13 = ReadMonth16();
	Date.Year13 = ReadYear16();

	return Date;
}

bool CheckDay(Date16 CheckLast)
{
	return ((CheckLast.Month13 == 1 || CheckLast.Month13 == 3 || CheckLast.Month13 == 5 || CheckLast.Month13 == 7 || CheckLast.Month13 == 8 || CheckLast.Month13 == 10 || CheckLast.Month13 == 12) && (CheckLast.Day13 == 31)) ? true : ((CheckLast.Month13 == 4 || CheckLast.Month13 == 6 || CheckLast.Month13 == 9 || CheckLast.Month13 == 11) && (CheckLast.Day13 == 30)) ? true : ((CheckLast.Month13 == 2) && (CheckLast.Day13 == (29)) && ((CheckLast.Year13 / 4) % 2 == 0)) ? true : ((CheckLast.Month13 == 2) && (CheckLast.Day13 == (28)) && ((CheckLast.Year13 / 4) % 2 == 1)) ? true : false;
}

bool ChecklastMonthInYear(Date16 CheckLast)
{
	return (CheckLast.Month13 == 12) ? true : false;
}

bool IsLeapYear16(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short MonthDays16(Date16 CheckLast)
{
	if (IsLeapYear16(CheckLast.Year13) && CheckLast.Month13 == 2)
	{
		return 29;
	}
	if (IsLeapYear16(CheckLast.Year13) == false && CheckLast.Month13 == 2)
	{
		return 28;
	}
	if ((IsLeapYear16(CheckLast.Year13) || IsLeapYear16(CheckLast.Year13) == false) && (CheckLast.Month13 == 1 || CheckLast.Month13 == 3 || CheckLast.Month13 == 5 || CheckLast.Month13 == 7 || CheckLast.Month13 == 8 || CheckLast.Month13 == 10 || CheckLast.Month13 == 12))
	{
		return 31;
	}
	if ((IsLeapYear16(CheckLast.Year13) || IsLeapYear16(CheckLast.Year13) == false) && (CheckLast.Month13 == 4 || CheckLast.Month13 == 6 || CheckLast.Month13 == 9 || CheckLast.Month13 == 11))
	{
		return 30;
	}
	else
	{
		return 405;
	}
}


Date16 IncreaseByOneDay(Date16 CheckLast)
{
	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckDay(CheckLast))
		{
			CheckLast.Day13 = 1;
			CheckLast.Month13 = 1;
			CheckLast.Year13++;
		}
		else
		{
			CheckLast.Day13++;
		}
	}
	else
	{
		if (CheckDay(CheckLast) == true)
		{
			CheckLast.Day13 = 1;
			CheckLast.Month13++;
		}
		else
		{
			CheckLast.Day13++;
		}
	}

	return CheckLast;
}

Date16 IncreaseByTenDays(Date16 CheckLast)
{

	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckDay(CheckLast))
		{
			CheckLast.Day13 = 10;
			CheckLast.Month13 = 1;
			CheckLast.Year13++;
		}
		else
		{
			CheckLast.Day13 = CheckLast.Day13 + 10;
		}
	}
	else
	{
		if (CheckDay(CheckLast) == true)
		{
			CheckLast.Day13 = 10;
			CheckLast.Month13++;
		}
		else
		{
			CheckLast.Day13 = CheckLast.Day13 + 10;
		}
	}

	return CheckLast;

}

Date16 IncreaseByOneWeek(Date16 CheckLast)
{
	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckDay(CheckLast))
		{
			CheckLast.Day13 = 7;
			CheckLast.Month13 = 1;
			CheckLast.Year13++;
		}
		else
		{
			CheckLast.Day13 = CheckLast.Day13 + 7;
		}
	}
	else
	{
		if (CheckDay(CheckLast) == true)
		{
			CheckLast.Day13 = 7;
			CheckLast.Month13++;
		}
		else
		{
			CheckLast.Day13 = CheckLast.Day13 + 7;
		}
	}

	return CheckLast;
}

Date16 IncreaseByTenWeeks(Date16 CheckLast)
{

	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckDay(CheckLast))
		{
			CheckLast.Year13++;
			if (IsLeapYear16(CheckLast.Year13))
			{
				CheckLast.Month13 = 3;
				CheckLast.Day13 = 10;
			}
			else
			{
				CheckLast.Month13 = 3;
				CheckLast.Day13 = 9;
			}

		}
		else
		{
			for (int i = 1; i < 71; i++)
			{
				CheckLast.Day13++;
				if (CheckLast.Day13 > MonthDays16(CheckLast))
				{
					if (ChecklastMonthInYear(CheckLast))
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13 = 1;
						CheckLast.Year13++;
					}
					else
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13++;
					}
				}
			}
		}
	}
	else if (ChecklastMonthInYear(CheckLast) == false)
	{
		if (CheckDay(CheckLast))
		{
			CheckLast.Day13 = 1;
			CheckLast.Month13++;

			for (int i = 1; i < 70; i++)
			{
				CheckLast.Day13++;
				if (CheckLast.Day13 > MonthDays16(CheckLast))
				{
					if (ChecklastMonthInYear(CheckLast))
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13 = 1;
						CheckLast.Year13++;
					}
					else
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13++;
					}
				}
			}
		}
		else if (CheckDay(CheckLast) == false)
		{


			for (int i = 1; i < 70; i++)
			{
				CheckLast.Day13++;
				if (CheckLast.Day13 > MonthDays16(CheckLast))
				{
					if (ChecklastMonthInYear(CheckLast))
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13 = 1;
						CheckLast.Year13++;
					}
					else
					{
						CheckLast.Day13 = 1;
						CheckLast.Month13++;
					}
				}
			}
		}


	}

	return CheckLast;
}

Date16 IncreaseByOneMonth(Date16 CheckLast)
{

	if (ChecklastMonthInYear(CheckLast))
	{

		CheckLast.Month13 = 1;
		CheckLast.Year13++;
	}
	else if (ChecklastMonthInYear(CheckLast) == false)
	{
		CheckLast.Month13++;

	}

	return CheckLast;
}

Date16 IncreaseByTenMonth(Date16 CheckLast)
{

	if (ChecklastMonthInYear(CheckLast))
	{

		CheckLast.Month13 = 10;
		CheckLast.Year13++;
	}
	else if (ChecklastMonthInYear(CheckLast) == false)
	{
		for (int i = 1; i < 10; i++)
		{
			CheckLast.Month13++;
			if (CheckLast.Month13 == 12)
			{
				CheckLast.Month13 = 1;
				CheckLast.Year13++;
			}
		}
	}

	return CheckLast;
}

Date16 IncreaseByOneYear(Date16 CheckLast)
{
	CheckLast.Year13++;
	return CheckLast;
}

Date16 IncreaseByTenYear(Date16 CheckLast)
{
	CheckLast.Year13 = CheckLast.Year13 + 10;
	return CheckLast;
}

void ProblemFrom20To32()
{
	Date16 CheckLast2 = Date166();

	Date16 IncreaseOneDay = IncreaseByOneDay(CheckLast2);

	Date16 IncreaseOneWeek = IncreaseByOneWeek(CheckLast2);

	Date16 IncreaseTenDays = IncreaseByTenDays(CheckLast2);

	Date16 IncreaseTenWeek = IncreaseByTenWeeks(CheckLast2);

	Date16 IncreaseOneMonth = IncreaseByOneMonth(CheckLast2);

	Date16 IncreaseTenMonth = IncreaseByTenMonth(CheckLast2);

	Date16 IncreaseOneYear = IncreaseByOneYear(CheckLast2);

	Date16 IncreaseTenYear = IncreaseByTenYear(CheckLast2);

	cout << "Increase By one Day : " << IncreaseOneDay.Day13 << "/" << IncreaseOneDay.Month13 << "/" << IncreaseOneDay.Year13 << endl;
	cout << "Increase By Ten Days : " << IncreaseTenDays.Day13 << "/" << IncreaseTenDays.Month13 << "/" << IncreaseTenDays.Year13 << endl;
	cout << "Increase By one Week : " << IncreaseOneWeek.Day13 << "/" << IncreaseOneWeek.Month13 << "/" << IncreaseOneWeek.Year13 << endl;
	cout << "Increase By Ten Weeks : " << IncreaseTenWeek.Day13 << "/" << IncreaseTenWeek.Month13 << "/" << IncreaseTenWeek.Year13 << endl;
	cout << "Increase By one Month : " << IncreaseOneMonth.Day13 << "/" << IncreaseOneMonth.Month13 << "/" << IncreaseOneMonth.Year13 << endl;
	cout << "Increase By Ten Month : " << IncreaseTenMonth.Day13 << "/" << IncreaseTenMonth.Month13 << "/" << IncreaseTenMonth.Year13 << endl;
	cout << "Increase By one Year : " << IncreaseOneYear.Day13 << "/" << IncreaseOneYear.Month13 << "/" << IncreaseOneYear.Year13 << endl;
	cout << "Increase By Ten Year : " << IncreaseTenYear.Day13 << "/" << IncreaseTenYear.Month13 << "/" << IncreaseTenYear.Year13 << endl;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//From (33) To (46)
//And More and More Better form shit above
struct Date33
{
	short Day33;
	short Month33;
	short Year33;
};

short ReadDay33()
{
	short Day;
	cout << "First Date:" << endl;
	cout << "Enter Day ?";
	cin >> Day;
	return Day;
}
short ReadMonth33()
{
	short Month;
	cout << "Enter Month ?";
	cin >> Month;
	return Month;
}
int ReadYear33()
{
	short Year;
	cout << "Enter Year ?";
	cin >> Year;
	return Year;
}
Date33 Date333()
{
	Date33 Date;

	Date.Day33 = ReadDay33();
	Date.Month33 = ReadMonth33();
	Date.Year33 = ReadYear33();

	return Date;
}

bool CheckDay(Date33 CheckLast)
{
	return ((CheckLast.Month33 == 1 || CheckLast.Month33 == 3 || CheckLast.Month33 == 5 || CheckLast.Month33 == 7 || CheckLast.Month33 == 8 || CheckLast.Month33 == 10 || CheckLast.Month33 == 12) && (CheckLast.Day33 == 31)) ? true : ((CheckLast.Month33 == 4 || CheckLast.Month33 == 6 || CheckLast.Month33 == 9 || CheckLast.Month33 == 11) && (CheckLast.Day33 == 30)) ? true : ((CheckLast.Month33 == 2) && (CheckLast.Day33 == (29)) && ((CheckLast.Year33 / 4) % 2 == 0)) ? true : ((CheckLast.Month33 == 2) && (CheckLast.Day33 == (28)) && ((CheckLast.Year33 / 4) % 2 == 1)) ? true : false;
}

bool ChecklastMonthInYear(Date33 CheckLast)
{
	return (CheckLast.Month33 == 1) ? true : false;
}

bool IsLeapYear16(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short MonthDays16(Date33 CheckLast)
{
	if (IsLeapYear16(CheckLast.Year33) && CheckLast.Month33 == 2)
	{
		return 29;
	}
	if (IsLeapYear16(CheckLast.Year33) == false && CheckLast.Month33 == 2)
	{
		return 28;
	}
	if ((IsLeapYear16(CheckLast.Year33) || IsLeapYear16(CheckLast.Year33) == false) && (CheckLast.Month33 == 1 || CheckLast.Month33 == 3 || CheckLast.Month33 == 5 || CheckLast.Month33 == 7 || CheckLast.Month33 == 8 || CheckLast.Month33 == 10 || CheckLast.Month33 == 12))
	{
		return 31;
	}
	if ((IsLeapYear16(CheckLast.Year33) || IsLeapYear16(CheckLast.Year33) == false) && (CheckLast.Month33 == 4 || CheckLast.Month33 == 6 || CheckLast.Month33 == 9 || CheckLast.Month33 == 11))
	{
		return 30;
	}
	else
	{
		return 405;
	}
}

Date33 DecreaseByOneDay(Date33 CheckLast)
{
	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckLast.Day33 == 1)
		{
			CheckLast.Day33 = 31;
			CheckLast.Month33 = 12;
			CheckLast.Year33--;
		}
		else
		{
			CheckLast.Day33--;
		}
	}
	else
	{
		if (CheckLast.Day33 == 1)
		{
			CheckLast.Day33 = MonthDays16(CheckLast);
			CheckLast.Month33--;
		}
		else
		{
			CheckLast.Day33--;
		}
	}

	return CheckLast;
}

Date33 DecreseByTenDays(Date33 CheckLast)
{
	if (ChecklastMonthInYear(CheckLast))
	{
		if (CheckLast.Day33 == 1)
		{
			CheckLast.Month33 = 12;
			CheckLast.Year33--;
			CheckLast.Day33 = MonthDays16(CheckLast) - 10;

		}
		else
		{
			for (int i = 11; i > 1; i--)
			{
				CheckLast.Day33--;
				if (CheckLast.Day33 <= 1)
				{
					CheckLast.Year33--;
					CheckLast.Month33 = 12;
					CheckLast.Day33 = MonthDays16(CheckLast);
				}
			}
		}
	}
	else
	{
		if (CheckLast.Day33 == 1)
		{
			CheckLast.Day33 = MonthDays16(CheckLast);
			CheckLast.Month33--;
			CheckLast.Day33 -= 10;
		}
		else
		{
			for (int i = 10; i >= 1; i--)
			{
				CheckLast.Day33--;
				if (CheckLast.Day33 <= 1)
				{

					CheckLast.Month33--;
					CheckLast.Day33 = MonthDays16(CheckLast);
				}
			}
		}
	}

	return CheckLast;
}

Date33 DecreseByOneWeeks(Date33 CheckLast)
{
	for (int i = 7; i >= 1; i--)
	{
		CheckLast = DecreaseByOneDay(CheckLast);
	}

	return CheckLast;
}

Date33 DecreseByTenWeeks(Date33 CheckLast)
{
	for (int i = 7; i >= 1; i--)
	{
		CheckLast = DecreseByTenDays(CheckLast);

	}
	CheckLast.Day33 = CheckLast.Day33 + 2;

	return CheckLast;
}

Date33 DecreseByOneMonth(Date33 CheckLast)
{
	for (int i = MonthDays16(CheckLast); i >= 1; i--)
	{
		CheckLast = DecreaseByOneDay(CheckLast);
	}

	return CheckLast;
}

Date33 DecreseByTenMonth(Date33 CheckLast)
{
	for (int i = 10; i >= 1; i--)
	{
		CheckLast.Month33 = CheckLast.Month33 - 1;
		if (CheckLast.Month33 == 1)
		{
			CheckLast.Year33--;
			CheckLast.Month33 = 12;
		}
	}

	return CheckLast;
}

void ProblemFrom33To46()
{
	Date33 Date = Date333();

	Date33 Date1 = DecreaseByOneDay(Date);
	cout << "Decrease by One Day : " << Date1.Day33 << "/" << Date1.Month33 << "/" << Date1.Year33 << endl;

	Date33 Date2 = DecreseByTenDays(Date1);
	cout << "Decrease by Ten Days : " << Date2.Day33 << "/" << Date2.Month33 << "/" << Date2.Year33 << endl;

	Date33 Date3 = DecreseByOneWeeks(Date2);
	cout << "Decrease by One Week : " << Date3.Day33 << "/" << Date3.Month33 << "/" << Date3.Year33 << endl;

	Date33 Date4 = DecreseByTenWeeks(Date3);
	cout << "Decrease by Ten Weeks : " << Date4.Day33 << "/" << Date4.Month33 << "/" << Date4.Year33 << endl;

	Date33 Date5 = DecreseByOneMonth(Date4);
	cout << "Decrease by One Month : " << Date5.Day33 << "/" << Date5.Month33 << "/" << Date5.Year33 << endl;

	Date33 Date6 = DecreseByTenMonth(Date5);
	cout << "Decrease by Ten Months : " << Date6.Day33 << "/" << Date6.Month33 << "/" << Date6.Year33 << endl;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//From (47) To (53)
struct Date47
{
	short Day;
	short Month;
	short Year;
};

int ReadYear47()
{
	int Year11;

	cout << "Enter Year ? ";
	cin >> Year11;
	cout << endl;

	return Year11;
}
int ReadMonth47()
{
	int Month11;

	cout << "Enter Month ? ";
	cin >> Month11;
	cout << endl;

	return Month11;
}
int ReadDay47()
{
	int Day11;

	cout << "Enter Day ? ";
	cin >> Day11;
	cout << endl;

	return Day11;
}
Date47 Date44()
{
	Date47 Date;

	Date.Day = ReadDay47();
	Date.Month = ReadMonth47();
	Date.Year = ReadYear47();

	return Date;
}

bool IsLeapYear47(Date47 Date)
{
	return (Date.Year % 4 == 0 && Date.Year % 100 != 0) || (Date.Year % 400 == 0);
}

int CalculateWhatDayIsName(Date47 Date)
{
	if (IsLeapYear47(Date))
	{
		int a, y, m, d;

		Date.Year++;
		a = ((14 - Date.Month) / 12);
		y = Date.Year - a;
		m = Date.Month + 12 * a - 2;
		d = (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

		return d;
	}
	else
	{
		int a, y, m, d;

		a = ((14 - Date.Month) / 12);
		y = Date.Year - a;
		m = Date.Month + 12 * a - 2;
		d = (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

		return d;
	}
}

string WhichDay(int ClaculateDay)
{
	string ArrayDayName[] = { "Sunday","Monday" ,"Tuesday","Wednesday" , "Thursday" , "Friday", "Saturday" };

	for (int I = 0; I <= ClaculateDay; I++)
	{
		if (I = ClaculateDay)
		{
			return ArrayDayName[I];
		}
	}

}

bool ItIsWeekEnd(string DayName)
{
	return (DayName == "Friday" || DayName == "Saturday") ? true : false;
}

void PrintWeekEndOrNot(string DayName)
{
	cout << endl;
	cout << "Is is Week End ? " << endl;
	if (ItIsWeekEnd(DayName))
		cout << "Yes,It is Week End";
	else
		cout << "No,It is not Week End";
}

void PrintIfBussinessDayOrNot(string DayName)
{
	cout << endl;
	cout << endl;
	cout << "Is is Bussiness Day ? " << endl;
	if (ItIsWeekEnd(DayName))
		cout << "No,It is not a Business Day";
	else
		cout << "Yes,It is a Business Day";
}

int ClculateHowMuchForEndOFWeek(Date47 Date)
{
	int HowLongForEndOFWeekEnd = 0;

	HowLongForEndOFWeekEnd = 7 - CalculateWhatDayIsName(Date);

	return HowLongForEndOFWeekEnd;
}

void ProblemFrom47To53()
{

	Date47 Date = Date44();
	int ClaculateDay = CalculateWhatDayIsName(Date);
	string DayName = WhichDay(ClaculateDay);
	cout << "Today is " << DayName << "," << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	int HowLongForEndOFWeek = ClculateHowMuchForEndOFWeek(Date);
	cout << "Days until End of Week , (" << HowLongForEndOFWeek << ")" << endl;
	PrintWeekEndOrNot(DayName);
	PrintIfBussinessDayOrNot(DayName);
	cout << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(54)
struct Date54
{
	short Day;
	short Month;
	short Year;
};

short ReadDay54()
{
	short Day;
	cout << "Vacation Starts :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonth54()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYear54()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
Date54 FirstDate54()
{
	Date54 Date;

	Date.Day = ReadDay54();
	Date.Month = ReadMonth54();
	Date.Year = ReadYear54();

	return Date;
}

short ReadDay542()
{
	short Day;
	cout << endl;
	cout << "Vacation Ends:" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonth542()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYear542()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
Date54 SecondDate54()
{
	Date54 Date;

	Date.Day = ReadDay542();
	Date.Month = ReadMonth542();
	Date.Year = ReadYear542();

	return Date;
}

bool IsLeapYear54(Date54 Date)
{
	return (Date.Year % 4 == 0 && Date.Year % 100 != 0) || (Date.Year % 400 == 0);
}

short MonthDays54(Date54 Date)
{
	if (IsLeapYear54(Date) && Date.Month == 2)
	{
		return 29;
	}
	if (!IsLeapYear54(Date) && Date.Month == 2)
	{
		return 28;
	}
	if (Date.Month == 1 || Date.Month == 3 || Date.Month == 5 || Date.Month == 7 || Date.Month == 8 || Date.Month == 10 || Date.Month == 12)
	{
		return 31;
	}
	if (Date.Month == 4 || Date.Month == 6 || Date.Month == 9 || Date.Month == 11)
	{
		return 30;
	}
	else
	{
		return 0;
	}
}

int CalculateWhatDayIsName(Date54 Date)
{
	int a, y, m, d;

	a = ((14 - Date.Month) / 12);
	y = Date.Year - a;
	m = Date.Month + 12 * a - 2;
	d = (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

	return d;
}

string WhichDay(int ClaculateDay)
{
	string ArrayDayName[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	return ArrayDayName[ClaculateDay];
}

int ClaculateWeekEndDays(Date54 Date1, Date54 Date2, int ClaculateDay)
{
	int Counter = 0;

	while (Date1.Day != Date2.Day || Date1.Month != Date2.Month || Date1.Year != Date2.Year)
	{
		if (WhichDay(ClaculateDay) != "Friday" && WhichDay(ClaculateDay) != "Saturday")
		{
			Counter++;
		}

		Date1.Day++;
		if (Date1.Day > MonthDays54(Date1))
		{
			Date1.Day = 1;
			Date1.Month++;
			if (Date1.Month > 12)
			{
				Date1.Month = 1;
				Date1.Year++;
			}
		}

		ClaculateDay = (ClaculateDay + 1) % 7;
	}

	return Counter;
}

void Problem54()
{
	Date54 Date1 = FirstDate54();
	Date54 Date2 = SecondDate54();
	int ClaculateDay = CalculateWhatDayIsName(Date1);
	int DayNameInSecond = CalculateWhatDayIsName(Date2);

	cout << endl;

	cout << "Vacation starts on " << WhichDay(ClaculateDay) << ", " << Date1.Day << "/" << Date1.Month << "/" << Date1.Year << endl;
	cout << "Vacation ends on " << WhichDay(DayNameInSecond) << ", " << Date2.Day << "/" << Date2.Month << "/" << Date2.Year << endl;

	cout << endl;

	cout << "Actual Vacation Days: " << ClaculateWeekEndDays(Date1, Date2, ClaculateDay) << endl;
	cout << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(58)

struct PeriodOne1
{
	short Day;
	short Month;
	short Year;
};

short ReadDayPeriodOne()
{
	short Day;
	cout << "Start of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonthPeriodOne()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYearPeriodOne()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
PeriodOne1 FirstDatePeriodOne()
{
	PeriodOne1 Date;

	Date.Day = ReadDayPeriodOne();
	Date.Month = ReadMonthPeriodOne();
	Date.Year = ReadYearPeriodOne();

	return Date;
}

short ReadDayPeriodOne2()
{
	short Day;
	cout << endl;
	cout << "End of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonthPeriodOne2()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYearPeriodOne2()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
PeriodOne1 SecondDatePeriodOne2()
{
	PeriodOne1 Date;

	Date.Day = ReadDayPeriodOne2();
	Date.Month = ReadMonthPeriodOne2();
	Date.Year = ReadYearPeriodOne2();

	return Date;
}

//////////////////////////////////////////////////

struct PeriodTwo
{
	short Day;
	short Month;
	short Year;
};

short ReadDayPeriodTwo()
{
	short Day;
	cout << "Start of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonthPeriodTwo()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYearPeriodTwo()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
PeriodTwo FirstDatePeriodTwo()
{
	PeriodTwo Date;

	Date.Day = ReadDayPeriodTwo();
	Date.Month = ReadMonthPeriodTwo();
	Date.Year = ReadYearPeriodTwo();

	return Date;
}

short ReadDayPeriodTwo2()
{
	short Day;
	cout << endl;
	cout << "End of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonthPeriodTwo2()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYearPeriodTwo2()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
PeriodTwo SecondDatePeriodTwo2()
{
	PeriodTwo Date;

	Date.Day = ReadDayPeriodTwo2();
	Date.Month = ReadMonthPeriodTwo2();
	Date.Year = ReadYearPeriodTwo2();

	return Date;
}

//////////////////////////////////////////////////

bool CheckOverLap(PeriodOne1 Date1, PeriodOne1 Date2, PeriodTwo  Date3, PeriodTwo  Date4)
{
	if (Date1.Year == Date3.Year) return true;
	if (Date1.Month == Date3.Month) return true;
	if (Date1.Day > Date2.Day || Date3.Day > Date4.Day) return true;

	bool condition1 = Date1.Day <= Date3.Day && Date3.Day <= Date2.Day;
	bool condition2 = Date1.Day <= Date4.Day && Date4.Day <= Date2.Day;
	bool condition3 = Date3.Day <= Date1.Day && Date1.Day <= Date4.Day;
	bool condition4 = Date3.Day <= Date2.Day && Date2.Day <= Date4.Day;

	return (condition1 && condition2) || (condition3 && condition4);
}


void PrintOverLapOrNot(PeriodOne1 Date1, PeriodOne1 Date2, PeriodTwo  Date3, PeriodTwo  Date4)
{
	cout << endl;

	if (CheckOverLap(Date1, Date2, Date3, Date4) == false)
	{
		cout << "No,It is not Over Lap" << endl;
	}
	else
	{
		cout << "Yes,It is Over Lap" << endl;

	}
}

void Problem58()
{
	cout << "Date 1:-" << endl;
	PeriodOne1 Date1 = FirstDatePeriodOne();
	PeriodOne1 Date2 = SecondDatePeriodOne2();
	cout << endl;
	cout << endl;
	cout << "Date 2 :-";
	PeriodTwo  Date3 = FirstDatePeriodTwo();
	PeriodTwo  Date4 = SecondDatePeriodTwo2();
	PrintOverLapOrNot(Date1, Date2, Date3, Date4);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//62
struct Date62
{
	short Day;
	short Month;
	short Year;
};

short ReadDay62()
{
	short Day;
	cout << "Start of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonth62()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYear62()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;



}
Date62 FirstDate62()
{
	Date62 Date;

	Date.Day = ReadDay62();
	Date.Month = ReadMonth62();
	Date.Year = ReadYear62();

	return Date;
}

short ReadDay622()
{
	short Day;
	cout << endl;
	cout << endl;
	cout << "End of Period :" << endl;
	cout << "Enter Day ? ";
	cin >> Day;
	return Day;
}
short ReadMonth622()
{
	short Month;
	cout << "Enter Month ? ";
	cin >> Month;
	return Month;
}
int ReadYear622()
{
	short Year;
	cout << "Enter Year ? ";
	cin >> Year;
	return Year;
}
Date62 SecondDate62()
{
	Date62 Date;

	Date.Day = ReadDay622();
	Date.Month = ReadMonth622();
	Date.Year = ReadYear622();

	return Date;
}

bool IsLeapYear62(Date62 Date)
{
	return (Date.Year % 4 == 0 && Date.Year % 100 != 0) || (Date.Year % 400 == 0);
}

short MonthDays54(Date62 Date)
{
	if (IsLeapYear62(Date) && Date.Month == 2)
	{
		return 29;
	}
	if (!IsLeapYear62(Date) && Date.Month == 2)
	{
		return 28;
	}
	if (Date.Month == 1 || Date.Month == 3 || Date.Month == 5 || Date.Month == 7 || Date.Month == 8 || Date.Month == 10 || Date.Month == 12)
	{
		return 31;
	}
	if (Date.Month == 4 || Date.Month == 6 || Date.Month == 9 || Date.Month == 11)
	{
		return 30;
	}
	else
	{
		return 0;
	}
}

bool CheckValidOrNot(Date62 Date1, Date62 Date2)
{
	return (Date2.Year < Date1.Year) ? true : ((Date1.Month > 12) ? true : ((Date1.Day > MonthDays54(Date1)) ? true : false));
}

void ValidOrNot(Date62 Date1, Date62 Date2)
{
	if (CheckValidOrNot(Date1, Date2))
		cout << "Yes,It is Valid Date" << endl;
	if (CheckValidOrNot(Date1, Date2) == false)
		cout << "No,It isn't Valid Date" << endl;
}

void Problem62()
{
	Date62 Date1 = FirstDate62();
	Date62 Date2 = SecondDate62();
	ValidOrNot(Date1, Date2);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(64)
struct Date63
{
	short Day;
	short Month;
	short Year;
};

string StringDate()
{
	string ReadDate;

	cout << "Enter Date Day/Month/Year ? ";
	getline(cin, ReadDate);

	return ReadDate;
}

Date63 ReadDayAfterSplit(string DateString)
{
	int Postion = 0;
	string Splitar = "/";
	string Word = "";
	int Num;

	Date63 Date;

	while (Postion = DateString.find(Splitar), std::string::npos)
	{

		Word = DateString.substr(0, Postion);

		if (Word != "")
		{
			Num = stoi(Word);

			Date.Day = Num;
		}
		DateString.erase(0, Postion + Splitar.length());

		break;

	}

	while (Postion = DateString.find(Splitar), std::string::npos)
	{

		Word = DateString.substr(0, Postion);

		if (Word != "")
		{
			Num = stoi(Word);

			Date.Month = Num;
		}
		DateString.erase(0, Postion + Splitar.length());

		break;

	}

	while (Postion = DateString.find(Splitar), std::string::npos)
	{

		Word = DateString.substr(0, Postion);

		if (Word != "")
		{
			Num = stoi(Word);

			Date.Year = Num;
		}
		DateString.erase(0, Postion + Splitar.length());

		break;

	}

	return Date;
}

void Problem64()
{
	string DateString = StringDate();
	Date63 ReadDay = ReadDayAfterSplit(DateString);

	cout << "Day = " << ReadDay.Day << endl;
	cout << "Month = " << ReadDay.Month << endl;
	cout << "Year = " << ReadDay.Year << endl;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


short ReadNumber9874()
{
	short Num;
	cout << "Enter Number ? ";
	cin >> Num;

	return Num;

}

short RandomNumber(short from, short to)
{
	short Num;

	Num = rand() % (to - from + 1) + from;

	return Num;

}

string ActionByComputer()
{
	short Number = RandomNumber(1, 3);
	return (Number == 1) ? "Rock" : (Number == 2) ? "Paper" : (Number == 3) ? "Scissor" : "Nothing";
}

string ActionByPerson()
{
	short Number = ReadNumber9874();
	return (Number == 1) ? "Rock" : (Number == 2) ? "Paper" : (Number == 3) ? "Scissor" : "Nothing";
}

string Winner(string Person, string System)
{




	string Win = "You Win";
	string lose = "You Lose";
	string Tie = "Tie";

	return (Person == "Paper" && System == "Rock") ? Win : (Person == "Rock" && System == "Scissor") ? Win : (Person == "Scissor" && System == "Scissor ") ? Tie : (Person == "Paper" && System == "Paper") ? Tie : lose;


}

void PrintMenu()
{
	cout << "Choose : " << endl;;
	cout << "Rock = 1 " << endl;
	cout << "Paper = 2" << endl;
	cout << "Scissor = 3 " << endl;
	cout << endl;

	string Person = ActionByPerson();
	string System = ActionByComputer();

	cout << endl;
	cout << "You       = " << Person << endl;
	cout << "Computer  = " << System << endl;
	cout << endl;
	cout << Winner(Person, System) << endl;
}

void ThaGame()
{
	bool Contunie = true;

	while (Contunie)
	{
		system("cls");
		PrintMenu();
		cout << endl;
		cout << "Anthor Round ? Y or N ?";
		char YorN;
		cin >> YorN;
		if (YorN != 'Y' || YorN != 'y')
		{
			Contunie == false;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{


	system("pause >0");

}