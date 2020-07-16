#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Helper function:swift the original decimal number to unsigned binary number.
string decimalToUnsign(int a, int L)
{
	string result = "";
	int r;
	while (a>0)
	{
		r = a%2;
		if(r == 1)
			result = "1" + result;
		else
			result = "0" + result;
		a /= 2;
	}
	int n = result.length();

	if (L >= n) {
		for(int i=0; i<L-n; i++)
			result = "0" + result;
			
	} 
	else 
	{
		string temp ="";
		for(int j = n-L; j < n; j++)
			temp += result[j];
		result = temp;
	}

	return result;
}

//Function 1
string decimalToTwosComplementString(int a, int L)
{
	string result = "";
	
	if (a >= 0) {
		result = decimalToUnsign(a, L);
	} 
	else 
	{
		a = a * -1;
		result = decimalToUnsign(a, L);
		//flip
		string temp ="";
		for(int k=0; k<L; k++)
		{
			
			if (result[k]=='0')
				temp += "1";
			else
				temp += "0";
		}
		result = temp;
		//add 1
		string temp1 = "";
		for(int i = L-1; i>=0; i--)
		{
			if (result[i] == '0')
			{
				temp1 = "1" + temp1;
				break;
			} else {

				temp1 += "0";
			}	
		}
		int size = temp1.length();
		for(int i=L-size-1; i>=0; i--)
		{
			temp1 = result[i] + temp1;
		}
		result = temp1;
	}
	return result;
}

//Function 2
int twosComplementStringToDecimal(string C)
{
	int num = 0;
	
	if (C[0] == '0')
	{
		int index = 0;
		for(int i= C.length()-1; i>=0; i--)
		{
			if(C[C.length()-1] == '1' && i == C.length()-1)
				num = 1;

			else if(C[i] == '1')
			{
				int temp = 1;
				for(int j = 0; j<index; j++)
					temp *= 2;
				num += temp;
			}
			index++;
		}
	} 
	else 
	{
		string st ="";
		for(int k=0; k < C.length(); k++)
		{
			if (C[k]=='0')
				st += "1";
			else
				st += "0";
		}

		C = st;
		
		//add 1
		string temp1 = "";
		for(int i = C.length()-1; i>=0; i--)
		{
			if (C[i] == '0')
			{
				temp1 = "1" + temp1;
				break;
			} 
			else 
			{
				temp1 += "0";
			}	
		}
		int size = temp1.length();
		for(int i=C.length()-size-1; i>=0; i--)
		{
			temp1 = C[i] + temp1;
		}

		C = temp1;

		int index = 0;
		for(int i= C.length()-1; i>=0; i--)
		{
			if(C[C.length()-1] == '1' && i == C.length()-1)
				num = 1;

			else if(C[i] == '1')
			{
				int temp = 1;
				for(int j = 0; j<index; j++)
					temp *= 2;
				num += temp;
			} 
			index++;
		}
		num*= -1;
	}
	return num;
}

//Function 3
string twosComplementStringsAddition(string A, string B)
{
    return decimalToTwosComplementString(twosComplementStringToDecimal(A) + twosComplementStringToDecimal(B), A.length());
}

//Main function code provided by Mr.Koopa :)
int main()
{
	//Read in the bit pattern size
	int L;
	do
	{
		cout << "Enter positive integer for the bit pattern size ";
		cin >> L;
	}while (L <= 0);

	//Read in two integers a and b 
	int a, b;
	cout << "Enter an integer a ";
	cin >> a;
	cout << "Enter an integer b ";
	cin >> b;

	//Calculate the decimal arithmetic sum of a and b and print the result
	int c1 = a + b;
	cout << "In decimal " << a << " + " << b << " is " << c1 << endl;

	//Compute the two's complement representations of a and b
	//Each integer must be represented in L-bits pattern
	//Also these two's complement representations must be returned as string data types
	string A = decimalToTwosComplementString(a, L);
	string B = decimalToTwosComplementString(b, L);

	//Print the two's complement representations of a and b
	cout << "The two's complement of " << a << " is\t " << A << endl;
	cout << "The two's complement of " << b << " is\t " << B << endl;

	//Compute the binary sum of the two's complement representations of a and b
	//The result must be returned as L-bit pattern string data type
	string C = twosComplementStringsAddition(A, B);

	//Print the two's complement representation binary sum
	cout << "The binary sum of " << A << " and " << B << " is " << C << endl;

	//Convert the two's complement representation binary sum to decimal and print
	int c2 = twosComplementStringToDecimal(C);
	cout << "In two's complement arithmetic, " << a << " + " << b << " is " << c2 << endl;

	//Print some concluding results
	if (c1 == c2)
		cout << c1 << " is equal to " << c2 << ". Good Job!" << endl;
	else
	{
		cout << c1 << " is not equal to " << c2 << endl;
		cout << "Either " << c1 << " cannot be represented by the given bit pattern OR we have made a mistake!" << endl;
	}
	system("Pause");
	return 0;
}