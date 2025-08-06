#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<vector>
#include<cctype>
#include<fstream>

using namespace std;


//Random Matrix(1)
void ReadNumber1(int  Array1111[3][3])
{

	int ReadNum;

	for (int i1 = 0; i1 < 3; i1++)
	{
		cout << "For " << i1 << " Row" << endl;

		for (int j1 = 0; j1 < 3; j1++)
		{
			cout << "Enter Number" << endl;
			cin >> ReadNum;
			Array1111[i1][j1] = ReadNum;
		}

	}



}

void PrintArray(int Array1111[3][3])
{

	printf("The following matrix is :\n");

	cout << Array1111[0][0] << setw(3) << Array1111[0][1] << setw(3) << Array1111[0][2] << endl;

	cout << Array1111[1][0] << setw(3) << Array1111[1][1] << setw(3) << Array1111[1][2] << endl;

	cout << Array1111[2][0] << setw(3) << Array1111[2][1] << setw(3) << Array1111[2][2] << endl;



}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Random Matrix in Last Idea(1 to 5)
int ReadRandomNumber2(int From, int To)
{


	int RandNum2 = rand() % (To - From + 1) + 1;

	return RandNum2;
}
void ReadRandomMatrix2(int Array2[3][3], short Row, short Coulam)
{
	for (short I2 = 0; I2 < Row; I2++)
	{
		for (short J2 = 0; J2 < Coulam; J2++)
		{
			Array2[I2][J2] = ReadRandomNumber2(1, 100);
		}
	}
}
void PrintRandomMatrix(int Array2[3][3], short Row, short Coulam)
{
	printf("The follownig random matrix :\n");

	for (short I2 = 0; I2 < Row; I2++)
	{
		for (short J2 = 0; J2 < Coulam; J2++)
		{
			cout << setw(4) << Array2[I2][J2];
		}
		cout << endl;
	}
	cout << "\n";

}


int SumCoulms(int Array2[3][3], short Row, short Coulam)
{
	int Sum = 0;

	for (int I3 = 0; I3 < Row; I3++)
	{
		Sum += Array2[I3][Coulam];
	}

	return Sum;
}
void PrintSumCoulms(int Array2[3][3], short Row)
{
	cout << "The Following Sum matrix Coulme :" << endl;

	for (int I3 = 0; I3 < Row; I3++)
	{
		cout << "Cloume " << I3 + 1 << " = " << SumCoulms(Array2, Row, I3) << endl;
	}
}
void PrintAndPutInOneDimenshionArrayOfSumCoulam(int Array[3], int Array2[3][3], short Row)
{
	for (int J3 = 0; J3 < Row; J3++)
	{
		Array[J3] = SumCoulms(Array2, Row, J3);
	}

	cout << "The Following Also Sum Of matrix Of Coulm but after put it  in one Deminshion array :" << endl;
	for (int H3 = 0; H3 < 3; H3++)
	{
		cout << "Coulm " << H3 + 1 << " = " << Array[H3] << endl;
	}
}



int SumRows(int Array2[3][3], short Row, short Coulam)
{
	int Sum = 0;

	for (int I2 = 0; I2 < Coulam; I2++)
	{
		Sum += Array2[Row][I2];
	}

	return Sum;
}
void PrintSumRow(int Array2[3][3], short Row, short Coulam)
{
	cout << "The Following Sum matrix Row :" << endl;

	for (int i2 = 0; i2 < Row; i2++)
	{
		cout << "Row " << i2 + 1 << " = " << SumRows(Array2, i2, Coulam) << endl;;
	}

}
void PrintAndPutInOneDimenshionArrayOfSumRow(int OneArray[3], int Array2[3][3], short Coulam)
{
	for (int Put = 0; Put < 3; Put++)
	{
		OneArray[Put] = SumRows(Array2, Put, Coulam);
	}

	cout << "The Following Also Sum Of matrix of Row but after put it  in one Deminshion array :" << endl;
	for (int Paste = 0; Paste < 3; Paste++)
	{
		cout << "Row " << Paste + 1 << " = " << OneArray[Paste] << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Random MAtrix(6)
void PutInArrary6(int Array6[3][3], short Row, short Coulem)
{
	int Sum = 0;

	for (int I6 = 0; I6 < Row; I6++)
	{
		for (int j6 = 0; j6 < Coulem; j6++)
		{
			Sum++;
			Array6[I6][j6] = Sum;
		}
	}
}

void PrintArray6(int Array6[3][3], short Row, short Coulem)
{
	cout << "The Following 3x3 Matrix from 1 to 9:" << endl;
	for (int I6 = 0; I6 < Row; I6++)
	{
		for (int j6 = 0; j6 < Coulem; j6++)
		{
			cout << setw(2) << Array6[I6][j6] << "   ";
		}
		cout << endl;

	}
	cout << endl;


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Random MAtrix(7)
void PutInArrary7(int Array7[3][3], short Row7, short Coulem7)
{
	int Sum = 0;

	for (int I6 = 0; I6 < Row7; I6++)
	{
		for (int j6 = 0; j6 < Coulem7; j6++)
		{
			Sum++;
			Array7[I6][j6] = Sum;
		}
	}
}

void TrasnportArry7(int TransportArray[3][3], int Array7[3][3], short Row7, short Coulem7)
{
	for (int I7 = 0; I7 < Row7; I7++)
	{
		for (int J7 = 0; J7 < Coulem7; J7++)
		{
			TransportArray[J7][I7] = Array7[I7][J7];
		}
	}
}

void PrintArray7(int Array7[3][3], short Row7, short Coulem7)
{
	cout << "The Following 3x3 Matrix from 1 to 9 but in trasport:" << endl;
	for (int I7 = 0; I7 < Row7; I7++)
	{
		for (int J7 = 0; J7 < Coulem7; J7++)
		{
			cout << setw(2) << Array7[I7][J7] << "   ";
		}
		cout << endl;

	}


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Random Matrix multiplay(8)
int RandomNumber8(int From, int To)
{
	int Rand;

	Rand = rand() % (To - From + 1) + From;

	return Rand;
}

void ReadRandomMatrix81(int Array81[3][3], short Row81, short Coulem81)
{
	for (int I8 = 0; I8 < 3; I8++)
	{
		for (int J8 = 0; J8 < Coulem81; J8++)
		{
			Array81[I8][J8] = RandomNumber8(1, 10);
		}
	}
}

void ReadRandomMatrix82(int Array82[3][3], short Row82, short Coulem82)
{
	for (int I82 = 0; I82 < Row82; I82++)
	{
		for (int J82 = 0; J82 < Coulem82; J82++)
		{
			Array82[I82][J82] = RandomNumber8(1, 10);
		}
	}
}

void PrintRandomNumber(int Array8[3][3], int Array82[3][3], short Row8, short Coulem8)
{
	cout << "The First Matrix : " << endl;
	for (int I8 = 0; I8 < Row8; I8++)
	{
		for (int J8 = 0; J8 < Coulem8; J8++)
		{
			cout << setw(3) << Array8[I8][J8] << "    ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "The Second Matrix : " << endl;
	for (int I82 = 0; I82 < Row8; I82++)
	{
		for (int J82 = 0; J82 < 3; J82++)
		{
			cout << setw(3) << Array82[I82][J82] << "    ";

		}
		cout << endl;
	}
}

void PrintTwoMatrixMultiplay(int Array8[3][3], int Array82[3][3], short Row8222, short Coulem822)
{
	cout << endl;
	printf("The following multiplay matrix : \n");
	for (int I8 = 0; I8 < Row8222; I8++)
	{
		for (int J8 = 0; J8 < Coulem822; J8++)
		{
			cout << setw(3) << Array8[I8][J8] * Array82[I8][J8] << "    ";
		}
		cout << endl;
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Random Matrix (11)
int ReadRandomNumber(int From, int To)
{
	int Rand;

	Rand = rand() % (To - From + 1) + From;

	return Rand;
}

void PutInMatrix(int Array32[3][3], short Row, short Coulm)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			Array32[i][j] = ReadRandomNumber(1, 10);
		}
	}
}

void PutInMatrix2(int Array2[3][3], short Row, short Coulm)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			Array2[i][j] = ReadRandomNumber(1, 10);
		}
	}
}



void PrintMatrix(int Array32[3][3], int Array2[3][3], short Row, short Coulm)
{
	cout << "The Following first Matrix : " << endl;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			cout << setw(3) << Array32[i][j];
		}
		cout << endl;
	}

	cout << "The Following Second first Matrix : " << endl;

	for (int i2 = 0; i2 < Row; i2++)
	{
		for (int j2 = 0; j2 < Coulm; j2++)
		{
			cout << setw(3) << Array2[i2][j2];
		}
		cout << endl;
	}

}

int SumMatrix1(int Array32[3][3], short Row, short Coulm)
{
	int Sum = 0;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			Sum += Array32[i][j];
		}
	}

	return Sum;
}

int SumMatrix2(int Array2[3][3], short Row, short Coulm)
{
	int Sum2 = 0;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			Sum2 += Array2[i][j];
		}
	}

	return Sum2;
}

void PrintIfMatrix1Equal2OrNot(int Array32[3][3], int Array2[3][3], short Row, short Coulm)
{
	if (SumMatrix1 == SumMatrix2)
	{
		printf("Matrix Are Equal");
	}
	else
	{
		printf("Matrix Are Not Equal");
	}

}

bool MatrixTypical(int Array[3][3], int Array2[3][3], short Row, short Coulm)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Coulm; j++)
		{
			if (Array[i][j] != Array2[i][j])
			{

				return false;
			}

		}
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Check Scalar(14)
bool CheckMatrix14(int Matrix14[3][3], short Row, short Colum)
{
	int  NumMustBeZero = Matrix14[0][0];

	for (int I14 = 0; I14 < Row; I14++)
	{
		for (int J14 = 0; J14 < Colum; J14++)
		{
			if (I14 == J14 && Matrix14[I14][J14] != NumMustBeZero)
			{
				return false;
			}
			else if (I14 != J14 && Matrix14[I14][J14] != 0)
			{
				return false;
			}


		}
	}

	return true;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Check How Many(15)
int ReadNumber15()
{
	int Number15;

	cout << "Enter Number to Search Matrix" << endl;
	cin >> Number15;

	return Number15;
}

int CheckMatrix15(int Matrix15[3][3], int N15, short Row, short Colum)
{

	int Sum = 0;

	for (int I14 = 0; I14 < Row; I14++)
	{
		for (int J14 = 0; J14 < Colum; J14++)
		{
			if (Matrix15[I14][J14] == N15)
			{
				Sum++;
			}
			else if (Matrix15[I14][J14] != N15)
			{
				false;
			}

		}
	}

	return Sum;
}

void PrintMatrix15(int Matrix15[3][3], int N15, int N155)
{
	for (int I15 = 0; I15 < 3; I15++)
	{
		for (int J15 = 0; J15 < 3; J15++)
		{
			cout << setw(3) << Matrix15[I15][J15];
		}

		cout << endl;
	}

	cout << "Number " << N15 << " Was in Matrix " << N155 << " times" << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Check Spares(16)
int CheckHowManyZero16(int Matrix16[3][3])
{
	int ZeroCounter = 0;
	for (int I16 = 0; I16 < 3; I16++)
	{
		for (int J16 = 0; J16 < 3; J16++)
		{
			if (Matrix16[I16][J16] == 0)
			{
				ZeroCounter++;
			}
		}

	}

	return ZeroCounter;
}

int CheckHowManyNotZero16(int Matrix16[3][3])
{
	int NotZeroCounter = 0;
	for (int I16 = 0; I16 < 3; I16++)
	{
		for (int J16 = 0; J16 < 3; J16++)
		{
			if (Matrix16[I16][J16] != 0)
			{
				NotZeroCounter++;
			}
		}

	}

	return NotZeroCounter;
}

void PrintMatrix16(int Matrix16[3][3], int Zero16, int NotZero16)
{
	cout << "Matrix : " << endl;

	for (int I15 = 0; I15 < 3; I15++)
	{
		for (int J15 = 0; J15 < 3; J15++)
		{
			cout << setw(3) << Matrix16[I15][J15];
		}

		cout << endl;
	}

	if (Zero16 > NotZero16)
	{
		printf("It is Sparse");
	}
	else if (Zero16 < NotZero16)
	{
		printf("It is not Sparse");

	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Check Matrix(17)
int ReadNumber17()
{
	int Number17;

	cout << "Enter Number to see it is in matrix or not ?" << endl;
	cin >> Number17;

	return Number17;
}

bool CheckNumInMatrixOrNot(int Matrix17[3][3], int Check17, short Row, short Colum)
{
	for (int I17 = 0; I17 < Row; I17++)
	{
		for (int J17 = 0; J17 < Colum; J17++)
		{
			if (Matrix17[I17][J17] == Check17)
			{
				return true;
				break;
			}
			else if (Matrix17[I17][J17] != Check17)
			{
				false;
			}

		}

	}
}

void PrintMatrix17(int Matrix17[3][3], short Row, short Colum)
{
	cout << "Following Matrix : " << endl;

	for (int I17 = 0; I17 < Row; I17++)
	{
		for (int J17 = 0; J17 < Colum; J17++)
		{
			cout << setw(3) << Matrix17[I17][J17];
		}

		cout << endl;
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Similar Number(18)

void CheckIFThereIsSimilar(int Matrix18[3][3], int Matrix188[3][3])
{
	cout << "Similar Numbers " << endl;

	for (int I18 = 0; I18 < 3; I18++)
	{
		for (int J18 = 0; J18 < 3; J18++)
		{
			for (int O18 = 0; O18 < 3; O18++)
			{
				for (int K18 = 0; K18 < 3; K18++)
				{
					if (Matrix18[I18][J18] == Matrix188[O18][K18])
					{
						cout << setw(3) << Matrix18[I18][J18];
					}

				}

			}

		}

	}
}

void PrintMatrix18(int Matrix18[3][3], int Matrix188[3][3])
{
	printf("First Matrix\n");

	for (int I18 = 0; I18 < 3; I18++)
	{
		for (int J18 = 0; J18 < 3; J18++)
		{
			cout << setw(3) << " " << Matrix18[I18][J18];
		}
		printf("\n");

	}
	printf("\n");

	printf("Second Matrix\n");
	for (int I188 = 0; I188 < 3; I188++)
	{
		for (int J188 = 0; J188 < 3; J188++)
		{
			cout << setw(3) << " " << Matrix188[I188][J188];
		}
		printf("\n");

	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Fibonacci(21)
void CalculateFibonacci(short Count)
{
	int Sum = 0;
	int Prev1 = 0;
	int Prev2 = 1;

	cout << "Fibonacci : " << endl;
	for (int I21 = 0; I21 < Count; I21++)
	{
		Sum = Prev1 + Prev2;

		cout << Sum << "     ";
		Prev1 = Prev2;
		Prev2 = Sum;
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Fibonacci(22)
void CalculateFibonacci22(int Count, int Prev1, int Prev2)
{
	int Sum = 0;


	if (Count > 0)
	{
		Sum = Prev1 + Prev2;

		cout << Sum << "     ";
		Prev1 = Prev2;
		Prev2 = Sum;
		CalculateFibonacci22(Count - 1, Prev1, Prev2);
	}


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//First Letter of each word(23)
string ReadLine()
{
	string FullName1;
	cout << "Enter your full name" << endl;
	getline(cin, FullName1);

	return  FullName1;

}

void CalculateFirsWord(string FullName)
{
	bool IsFirstLetter = true;

	for (int I23 = 0; I23 < FullName.length(); I23++)
	{
		if (FullName[I23] != ' ' && IsFirstLetter)
		{
			cout << FullName[I23] << endl;
		}
		IsFirstLetter = (FullName[I23] == ' ' ? true : false);
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Make it upper letter(24)
string ReadLine24()
{
	string FullName1;
	cout << "Enter your full name" << endl;
	getline(cin, FullName1);

	return  FullName1;

}

void CalculateFirsWord24(string FullName)
{
	bool IsFirstNumber = true;

	for (int I23 = 0; I23 < FullName.length(); I23++)
	{
		if (FullName[I23] != ' ' && IsFirstNumber)
		{
			FullName[I23] = toupper(FullName[I23]);

		}
		IsFirstNumber = (FullName[I23] == ' ' ? true : false);
	}
	cout << FullName << endl;



}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Change char (27)
char ReadChar()
{
	char Name;
	cout << "Enter full name" << endl;
	cin >> Name;

	return Name;
}

char ChangeAllChar(char Name25)
{
	if (islower(Name25))
	{
		Name25 = toupper(Name25);
	}
	else
	{
		Name25 = tolower(Name25);
	}

	return Name25;
	//or use this return islower(Name25) ? toupper(Name25) : tolower(Name25);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(29)
string ReadFullName29()
{
	string Number29;

	cout << "Enter your full name" << endl;
	getline(cin, Number29);

	return Number29;
}

void PrintLength29(string N29)
{
	cout << endl;
	cout << "Name: " << N29 << endl;
	cout << "String Length: " << N29.length() << endl;

}

int PrintCapitalLetter29(string N29)
{
	int Sum = 0;


	for (int I29 = 0; I29 < N29.length(); I29++)
	{
		if (N29[I29] = isupper(N29[I29]));
		{
			Sum += N29[I29];
		}
	}

	return Sum;
}

int PrintSmallLetters(string N29)
{
	short SmallCounter = 0;

	for (short I299 = 0; I299 < N29.length(); I299++)
	{
		if (N29[I299] = islower(N29[I299]));
		{
			SmallCounter++;
		}
	}

	return SmallCounter;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(30)(31)
string ReadFullName30()
{
	string Number29;

	cout << "Enter your full name" << endl;
	getline(cin, Number29);

	return Number29;
}

char ReadCharInFullName()
{
	char Number30;

	cout << "Enter Char you looking for " << endl;
	cin >> Number30;

	return Number30;

}

void PrintLength300(string N300)
{
	cout << endl;
	cout << "Name: " << N300 << endl;
	cout << "String Length: " << N300.length() << endl;

}

int ReadChar(string N300, char N30)
{
	int counter = 0;
	for (int I30 = 0; I30 < N300.length(); I30++)
	{
		if (N300[I30] == N30)
		{
			counter++;
		}
	}

	return counter;

}

int ReadBigChar(string N300, char N30)
{
	int counter = 0;
	for (int I30 = 0; I30 < N300.length(); I30++)
	{
		if (N300[I30] = tolower(N300[I30]) == N30)
		{
			counter++;
		}
	}

	return counter;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(33)
char ReadChar()
{
	char Read;
	printf("Enter  Char \n");
	cin >> Read;

	return Read;
}


bool CheckVowel(char C32)
{
	if (C32 == char('a') || C32 == char('o') || C32 == char('u') || C32 == char('e') || C32 == char('i'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(35)(36)
string ReadFullName35()
{
	string Name35;

	cout << "Enter Full Name" << endl;
	getline(cin, Name35);

	return Name35;
}

void PrintNamed25(string N25)
{
	for (int I25 = 0; I25 < N25.length(); I25++)
	{
		if (N25[I25] != ' ')
		{
			cout << N25[I25];
		}
		else if (N25[I25] == ' ')
		{
			cout << "\n";
		}

	}
}

int PrintHowManyWord25(string N25)
{
	int Counter = 1;
	for (int I25 = 0; I25 < N25.length(); I25++)
	{
		if (N25[I25] == ' ')
		{
			Counter++;
		}
	}
	return Counter;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//In Proffional Way(35)
string ReadFullName355()
{
	string Name355;

	cout << "Enter Full Name " << endl;
	getline(cin, Name355);
	cout << endl;

	return Name355;
}

void PrintName355(string Name355)
{
	int postion = 0;
	string Space = " ";
	string Sword;

	while ((postion = Name355.find(Space)) != std::string::npos)
	{
		Sword = Name355.substr(0, postion);

		if (Sword != " ")
		{
			cout << Sword << endl;
		}

		Name355.erase(0, postion + Space.length());
	}

	if (Name355 != Space)
	{
		cout << Name355 << endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Put Word in Vector(37)
string ReadFullName37()
{
	string Name37;

	cout << "Enter Full Name " << endl;
	getline(cin, Name37);
	cout << endl;

	return Name37;
}

vector <string> SplitFunction(string Name37)
{
	vector <string> SF37;
	string Word37;
	string Space37 = " ";
	int Postion37 = 0;

	while ((Postion37 = Name37.find(Space37)) != std::string::npos) //to Make Postion == Space
	{
		Word37 = Name37.substr(0, Postion37); // Make Word = From first word(0) to First Space (Postion37)

		if (Word37 != " ")
		{
			SF37.push_back(Word37);
		}

		Name37.erase(0, Postion37 + Space37.length());
	}
	if (Name37 != " ")// for put last word in arry
	{
		SF37.push_back(Name37);
	}

	return SF37;
}

void PrintVector(vector <string> SF37)
{
	cout << "Tokens = " << SF37.size() << endl;

	for (string& i37 : SF37)
	{
		cout << i37 << endl;
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Trim(38)
string TrimLeft(string S1)
{

	for (int I38 = 0; I38 < S1.length(); I38++)
	{
		if (S1[I38] != ' ')
		{
			return S1.substr(I38, S1.length() - I38);
		}
	}

	return "";
}

string TrimRight(string S1)
{
	for (int J38 = S1.length() - 1; J38 >= 0; J38--)
	{
		if (S1[J38] != ' ')
		{
			return S1.substr(0, J38 + 1);
		}
	}

	return "";

}

string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Put in string from vector(39)
string PutInString(vector <string> SendToString, string Space)
{
	string TakeFromVector;

	for (string& I39 : SendToString)
	{
		TakeFromVector = TakeFromVector + I39 + Space;
	}
	return TakeFromVector.substr(0, TakeFromVector.length() - Space.length()); //you can use without substr but it used to delete last space in word
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Put in string from Array(40)
string PutInStringButSentByArray(string Array39[3], string Space)
{
	string TakeFromString;
	for (int I40 = 0; I40 < 3; I40++)
	{
		TakeFromString = TakeFromString + Array39[I40] + Space;
	}
	return TakeFromString.substr(0, TakeFromString.length() - Space.length());
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Revers Word(41)
string ReadFullName()
{
	string Name41;
	cout << "Enter Full Name " << endl;
	getline(cin, Name41);

	return Name41;
}

vector <string> PutStringOnVectorToReverse(string Info41)
{
	vector <string> Vector41;
	string Word41;
	string Space = " ";
	int Postiosn41 = 0;

	while ((Postiosn41 = Info41.find(Space)) != std::string::npos)
	{
		Word41 = Info41.substr(0, Postiosn41);
		if (Word41 != " ");
		{
			Vector41.push_back(Word41);
		}
		Info41.erase(0, Postiosn41 + Space.length());
	}
	if (Word41 != Space)
	{
		Vector41.push_back(Word41);
	}

	return Vector41;

}

string ReversVector(string Info41)
{
	vector <string> Word;
	string S2 = "";
	Word = PutStringOnVectorToReverse(Info41);

	vector<string>::iterator iter = Word.end();

	while (iter != Word.begin())
	{
		iter--;

		S2 += *iter + "";
	}
	S2 = S2.substr(0, S2.length() - 1);

	return S2;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Replace(42)
string ReadSeantance42()
{
	string Sentance;
	cout << "Where are you from ?" << endl;
	getline(cin, Sentance);

	return Sentance;
}

string ChangeWord(string Sentance42)
{
	string Pigs41 = "Pigs Nation";
	string USA41 = "USA";
	int Postion;


	Postion = Sentance42.find("USA");


	while (Postion != std::string::npos)
	{
		Sentance42 = Sentance42.replace(Postion, USA41.length(), Pigs41);
		Postion = Sentance42.find("USA");

	}



	return Sentance42;
}

void FindUSA(string Sentance42)
{
	if (Sentance42.find("USA"))
	{
		ChangeWord(Sentance42);
		cout << Sentance42 << endl;
	}
	else
	{
		cout << Sentance42 << endl;
	}

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Delete Punction(44)
string ReadSeantance44()
{
	string Sentance;
	cout << "Where are you from ?" << endl;
	getline(cin, Sentance);

	return Sentance;
}

string CheckPunkation(string Sentance44)
{
	string s1 = "";
	for (int I44 = 0; I44 < Sentance44.length(); I44++)
	{
		if (!ispunct(Sentance44[I44]))
		{
			s1 = s1 + Sentance44[I44];
		}
	}

	return s1;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Form string to struct(46)
struct Information46
{
	string FullName;
	string PhoneNumber;
	string AccountNumber;
	string PinCode;
	double AccountBalance;

};

vector <string> PutInVector46(string CleintInfo46)
{
	string Word46;
	string Space46 = "#//#";
	vector <string> ReciveWord;
	short Postion = 0;

	while ((Postion = CleintInfo46.find(Space46)) != std::string::npos)
	{
		Word46 = CleintInfo46.substr(0, Postion);

		if (Word46 != "")
		{
			ReciveWord.push_back(Word46);
		}

		CleintInfo46.erase(0, Postion + Space46.length());


	}
	if (CleintInfo46 != "")
	{
		ReciveWord.push_back(CleintInfo46);
	}

	return ReciveWord;
}

Information46 PutInStruct(string CleintInfo46)
{

	Information46 Cleint46;
	vector <string> ReciveWord;
	ReciveWord = PutInVector46(CleintInfo46);

	Cleint46.FullName = ReciveWord[0];
	Cleint46.PhoneNumber = ReciveWord[1];
	Cleint46.AccountNumber = ReciveWord[2];
	Cleint46.PinCode = ReciveWord[3];
	Cleint46.AccountBalance = stod(ReciveWord[4]);//from string to double

	return Cleint46;
}

void PrintStruct46(Information46 Cleint46)
{
	printf("Cleint Information\n\n");
	cout << "Name : " << Cleint46.FullName << endl;
	cout << "Phone Number : " << Cleint46.PhoneNumber << endl;
	cout << "Account Number : " << Cleint46.AccountNumber << endl;
	cout << "Pin Code : " << Cleint46.PinCode << endl;
	cout << "Account Balance : " << Cleint46.AccountBalance << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//(47)
struct Information47
{
	string FullName;
	string PhoneNumber;
	string AccountNumber;
	string PinCode;
	double AccountBalance;

};

Information47 ReadCleintInfo()
{
	Information47 Client47;


	cout << "Enter Account Number ? ";
	getline(cin >> ws, Client47.AccountNumber);

	cout << "Enter Pin Code ? ";
	getline(cin, Client47.PinCode);

	cout << "Enter Full Name  ? ";
	getline(cin, Client47.FullName);

	cout << "Enter Phone Number ? ";
	getline(cin, Client47.PhoneNumber);

	cout << "Enter Account Balance ? ";
	cin >> Client47.AccountBalance;


	return Client47;
}

string ConvertStructToString(Information47 Cleint)
{
	string Add = "";

	Add = Add + Cleint.AccountNumber + "#//#";
	Add = Add + Cleint.PinCode + "#//#";
	Add = Add + Cleint.FullName + "#//#";
	Add = Add + Cleint.PhoneNumber + "#//#";
	Add = Add + to_string(Cleint.AccountBalance);

	return Add;
}

void AddCleintToFile(string sCleint)
{
	fstream MyFile;

	MyFile.open("Cleints.txt", ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << sCleint << endl;
		MyFile.close();
	}
}

void AddNewCleint()
{

	Information47 Cleint = ReadCleintInfo();
	string sCleint = ConvertStructToString(Cleint);
	AddCleintToFile(sCleint);
}

void DoYouWantAdd()
{
	char AddMore = 'Y';
	do
	{
		system("cls");

		printf("Adding New Client\n");
		AddNewCleint();


		cout << "Cleint Add Sucsesfully,Do you wnat to add more client ? Y/N ?" << endl;
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//ReadCleints(48)
const string FileName = "Cleints.txt";

struct sCleint
{
	string AccountName;
	string PinCode;
	string FullName;
	string PhoneNumber;
	bool MarkAccount = false;
	unsigned  Balance;
};

vector <string> SplitFunction48(string Line)
{
	short Postion;
	string Word;
	string Space = "#//#";
	vector <string> SplitWord;

	while ((Postion = Line.find(Space)) != std::string::npos)
	{
		Word = Line.substr(0, Postion);
		if (Word != "")//Not empty
		{
			SplitWord.push_back(Word);
		}

		Line.erase(0, Postion + Space.length());

	}

	if (Line != "")
	{
		SplitWord.push_back(Line);
	}

	return SplitWord;
}

sCleint ConvertVectorIntoStruct(string Line)
{


	vector <string> TakeFromSplit;
	TakeFromSplit = SplitFunction48(Line);
	sCleint Cleint;

	Cleint.AccountName = TakeFromSplit[0];
	Cleint.PinCode = TakeFromSplit[1];
	Cleint.FullName = TakeFromSplit[2];
	Cleint.PhoneNumber = TakeFromSplit[3];
	Cleint.Balance = stod(TakeFromSplit[4]);

	return Cleint;

}

vector <sCleint> ReadFromFile()
{


	vector <sCleint> SaveCleint;

	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		sCleint Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertVectorIntoStruct(Line);
			SaveCleint.push_back(Client);
		}


	}MyFile.close();

	return  SaveCleint;

}

void PrintSaveClient(sCleint vCleint)
{
	cout << "|" << setw(20) << left << vCleint.AccountName;
	cout << "|" << setw(15) << left << vCleint.PinCode;
	cout << "|" << setw(20) << left << vCleint.FullName;
	cout << "|" << setw(30) << left << vCleint.PhoneNumber;
	cout << "|" << setw(30) << left << vCleint.Balance;

}

void PrintClientList(vector <sCleint> SaveCleint)
{
	cout << setw(40) << "Cleints (" << SaveCleint.size() << ") " << "Cleint List" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	cout << endl;
	cout << setw(20) << left << "|Account Name";
	cout << setw(20) << left << "|Pin Code";
	cout << setw(20) << left << "|Full Name";
	cout << setw(30) << left << "|Phone Number";
	cout << setw(30) << left << "|Balance";
	cout << endl;
	cout << endl;


	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;



	for (sCleint vCleint : SaveCleint)
	{
		PrintSaveClient(vCleint);
	}

}

/////////////////////////////////////////////////

//2
bool FindAccount(string SearchAccountNumber, sCleint& Cleint)
{
	vector<sCleint>vCleint;
	vCleint = ReadFromFile();

	for (sCleint C : vCleint)
	{
		if (C.AccountName == SearchAccountNumber)
		{
			Cleint = C;
			return true;
		}
	}
	return false;
}//2

//3
void PrinFound(sCleint Cleint)
{
	cout << "\n";
	printf("The following cleint information:\n\n");
	cout << "Account Name : " << Cleint.AccountName << endl;
	cout << "Cleint Name : " << Cleint.FullName << endl;
	cout << "Phone Number : " << Cleint.PhoneNumber << endl;
	cout << "Pin Code : " << Cleint.PinCode << endl;
	cout << "Account Balance : " << Cleint.Balance << endl;
}

//1
string ReadAccountNumber()//1
{
	string CleintNumber;

	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	printf("Enter Account Number ? ");
	getline(cin, CleintNumber);

	return CleintNumber;
}

//5
bool DeletAccountNumber(string SearchAccountNumber, vector <sCleint> SaveCleint)
{
	sCleint Cleint;
	char Answer = 'n';

	if (FindAccount(SearchAccountNumber, Cleint))
	{
		PrinFound(Cleint);
		cout << "Are you sure you want delete this client? y/n ?" << endl;
		cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{
			MarkAccountForDelete(SearchAccountNumber, SaveCleint);
			SaveCleintDataToFile(SaveCleint);

			SaveCleint = ReadFromFile();

			cout << "Account Deleted Sucessfully" << endl;

			return true;
		}
		else
		{
			cout << "Wrong Account Number" << endl;

			return false;
		}
	}

}

//3
bool MarkAccountForDelete(string SearchAccountNumber, vector <sCleint> SaveCleint)
{
	for (sCleint D50 : SaveCleint)
	{
		if (D50.AccountName == SearchAccountNumber)
		{
			D50.MarkAccount = true;
			return true;
		}


	}return false;
}

//4
vector <sCleint> SaveCleintDataToFile(vector <sCleint> SaveCleint)
{


	fstream MyFile;

	MyFile.open(FileName, ios::out);//Read Mode
	string DataLine;

	if (MyFile.is_open())
	{
		for (sCleint Cleint : SaveCleint)
		{
			if (Cleint.MarkAccount == false)
			{
				DataLine = ConvertRecordToLine(Cleint);
				MyFile << DataLine << endl;

			}
		}
	}MyFile.close();
}

//Help 4
string ConvertRecordToLine(sCleint Client, string Seperator = "#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountName + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.FullName + Seperator;
	stClientRecord += Client.PhoneNumber + Seperator;
	stClientRecord += to_string(Client.Balance);
	return stClientRecord;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////















































int main()
{
	//Random Matrix(1)
	int Array1111[3][3];
	ReadNumber1(Array1111);
	PrintArray(Array1111);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Random Matrix in Last Idea(1 to 5)
	int Array2[3][3];
	int OneArray[3];
	int Array[3];

	srand((unsigned)time(NULL));

	ReadRandomMatrix2(Array2, 3, 3);
	PrintRandomMatrix(Array2, 3, 3);

	PrintSumRow(Array2, 3, 3);
	PrintAndPutInOneDimenshionArrayOfSumRow(OneArray, Array2, 3);

	PrintSumCoulms(Array2, 3);
	PrintAndPutInOneDimenshionArrayOfSumCoulam(Array, Array2, 3);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Random Matrix(6)
	int Array6[3][3];

	PutInArrary6(Array6, 3, 3);
	PrintArray6(Array6, 3, 3);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Random Matrix(7)
	int Array7[3][3];
	int TransoprtArray[3][3];



	PutInArrary7(Array7, 3, 3);
	TrasnportArry7(TransoprtArray, Array7, 3, 3);
	PrintArray7(TransoprtArray, 3, 3);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Random Matrix multiplay(8)
	srand((unsigned)time(NULL));

	int Array8[3][3];
	int Array82[3][3];


	ReadRandomMatrix81(Array8, 3, 3);
	ReadRandomMatrix82(Array82, 3, 3);

	PrintRandomNumber(Array8, Array82, 3, 3);
	PrintTwoMatrixMultiplay(Array8, Array82, 3, 3);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Random Matrix(11)
	srand((unsigned)time(NULL));

	int Array32[3][3];
	int Array2[3][3];

	PutInMatrix(Array32, 3, 3);
	PutInMatrix2(Array2, 3, 3);

	PrintMatrix(Array32, Array2, 3, 3);

	cout << "\n";
	PrintIfMatrix1Equal2OrNot(Array32, Array2, 3, 3);
	cout << "\n";

	cout << endl;
	if (MatrixTypical)
		printf("Matrix not typical");
	else
		printf("Matrix typical");

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Check Scalar(14)
	int Matrix14[3][3] = { {9,0,0},{0,9,0},{0,0,9} };

	if (CheckMatrix14(Matrix14, 3, 3) == true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Check How Many(15)
	int Matrix15[3][3] = { {9,0,0},{0,9,0},{0,0,9} };

	int N15 = ReadNumber15();
	int N155 = CheckMatrix15(Matrix15, N15, 3, 3);


	PrintMatrix15(Matrix15, N15, N155);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Check Spares(16)
	int Matrix16[3][3] = { {9,9,9},{0,9,0},{0,0,9} };

	int Zero16 = CheckHowManyZero16(Matrix16);
	int NotZero16 = CheckHowManyNotZero16(Matrix16);

	PrintMatrix16(Matrix16, Zero16, NotZero16);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   //Check Matrix(17) 
	int Matrix17[3][3] = { {77,31,44},{21,68,13},{93,42,57} };

	int Check17 = ReadNumber17();

	PrintMatrix17(Matrix17, 3, 3);

	if (CheckNumInMatrixOrNot(Matrix17, Check17, 3, 3) == true)
	{
		printf("Number is there");
	}
	else
	{
		printf("Number is not there");

	}

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Similar Number(18)
	int Matrix18[3][3] = { {77,88,44},{21,68,13},{93,42,57} };
	int Matrix188[3][3] = { {77,88,11},{57,42,65},{68,87,94} };

	PrintMatrix18(Matrix18, Matrix188);
	CheckIFThereIsSimilar(Matrix18, Matrix188);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
    //Fibonacci(21)
	CalculateFibonacci(10);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	 //Fibonacci(22)
	cout << "Fibonacci : " << endl;
	CalculateFibonacci22(10, 0, 1);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//First Letter of each word(23)
	CalculateFirsWord(ReadLine());

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Make it upper letter(24)
	CalculateFirsWord24(ReadLine24());

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
    //Change char (27)
	char Name25 = ReadChar();

	cout << ChangeAllChar(Name25);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(29)
	string N29 = ReadFullName29();

	PrintLength29(N29);
	cout << "Capital letters: " << PrintCapitalLetter29(N29) << endl;
	cout << "Small letters: " << PrintSmallLetters(N29) << endl;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(30)(31)
	string N300 = ReadFullName30();
	char N30 = ReadCharInFullName();

	PrintLength300(N300);
	cout << ReadChar(N300, N30) << endl;
	cout << ReadBigChar(N300, N30) << endl;


	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(33)
	char C32 = ReadChar();

	if (CheckVowel(C32) == true)
	{
		cout << "it is a vowel" << endl;
	}
	else if (CheckVowel(C32) == false)
	{
		cout << "it is not a vowel" << endl;
	}

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(35)(36)
	string N25 = ReadFullName35();

	printf("\n");
	cout << "Your Name in different line :" << endl;
	PrintNamed25(N25);

	printf("\n\n");
	cout << "There is " << PrintHowManyWord25(N25) << " word in your Name " << endl;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//Proffetionl Way(35)
	string Name355 = ReadFullName355();
	PrintName355(Name355);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Put word in vector (37)
	string Name37 = ReadFullName37();
	vector <string> SF37 = SplitFunction(Name37);

	PrintVector(SF37);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Trim(38)
	string S1 = "     Mohamed Hassan      ";

	cout << "Befor Trim :" << S1 << endl;
	cout << endl;
	cout << "Trim Left :" << TrimLeft(S1) << endl;
	cout << "Trim Right :" << TrimRight(S1) << endl;
	cout << "Trim Left and Right :" << Trim(S1) << endl;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Put in string from vector(39)
	vector <string> SendToString = { "Mohamed","Omar","Islam" };
	string Space;
	cout << PutInString(SendToString, "###");
	//Put in string from Array(40)
	string Array39[3] = { "Mohamed","Omar","Islam" };
	cout << PutInStringButSentByArray(Array39, ",");

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Revers(41)
	string Info41 = ReadFullName();
	vector <string> Word;
	cout << ReversVector(Info41) << endl;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
    //Replace(42)
	string Sentance42 = ReadSeantance42();

	FindUSA(ChangeWord(Sentance42));

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(44)
	string Sentance44 = ReadSeantance44();
	cout << CheckPunkation(Sentance44) << endl;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(46)
	string ClientInfo46 = "Mohamed Hassan#//#01126983220#//#A787#//#7304#//#5500";
	vector <string> ReciveWord = PutInVector46(ClientInfo46);
	Information46 Cleint46 = PutInStruct(ClientInfo46);
	printf("Line Information\n ");
	cout << ClientInfo46 << "\n" << endl;
	PrintStruct46(Cleint46);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(47)
	DoYouWantAdd();

	system("pause>0");
	return 0;

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Read Cleint(48)
	vector <sCleint> SaveCleint = ReadFromFile();
	PrintClientList(SaveCleint);

	sCleint Cleint;
	string SearchAccountNumber = ReadAccountNumber();//Search for Client

	if (FindAccount(SearchAccountNumber, Cleint))
	{
		PrinFound(Cleint);
	}
	else
	{
		cout << "Cleint (" << SearchAccountNumber << ") not Found" << endl;
	}


	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//(50)
	string SearchAccountNumber = ReadAccountNumber();//Search for Client

	DeletAccountNumber(SearchAccountNumber, SaveCleint);

	cout << "__________________________________________________________________________________________________________" << endl;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
