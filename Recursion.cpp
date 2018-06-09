//============================================================================
// Name        : i170012_lab_task_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int Question1(int number)
{
	int factorial = 1;
	for (int i = 1; i <= number; i++) {
		factorial = factorial * i;

	}
	return factorial;
}

int Question2(int number)
{


	if (number == 1)
		return 1;
	return Question2(number - 1) * number;

}
void Question3()
{
	int count = 10;
	for (int i = 1; i < 19; i++)
	{
		if (i >= 10)
		{
			cout << --count;
		}
		else
		{
			cout << i;
		}
	}
}
void Question4(int number)
{
	if (number == 10)
		return;
	cout << number;
	Question4(number + 1);
	cout << number;

}
int Question5(int number)
{
	int count = 0;
	for (int i = 1; number != 0; i++)
	{
		number =number/10;
		count++;
	}

	return count;
}
int Question6(int number)
{
	if (number == 0)
		return 0;
	return Question6(number / 10) + 1;

}
int Question7(int number)
{
	int count = 0;
	for (int i = 0; number != 0; i++)
	{
		if (number % 2 == 1)
			count++;
		number /= 2;
	}
	return count;
}
int Question8(int number)
{
	if (number == 0)
		return 0;
	return Question7(number / 2) + 1;

	return 0;
}
int  Question9(char *str, int size, int lenght)
{
	for (int i = 0; i < lenght / 2; i++)
	{
		if(str[i]!=str[(lenght-1)-i])
		return 0;
	}
		return 1;
}
int  Question10(char *str, int size, int lenght)
{
	if (size == lenght-1)
		return 1;
	if(str[size]!=str[lenght-1])
		return 0;
	return Question10(str, size + 1, lenght - 1);
}

string  Question11(string str,  int lenght)
{
	string TempString;
		if(lenght==0)
			return "";
		TempString=str[lenght-1];
		lenght--;
		TempString=TempString+Question11(str,lenght);
		return TempString;

}
int main() {
	//int number=35;
	//cout << "enter a number" << endl;
	//cin>>number;
	//cout<<Question1(number);*/

	//Question4(number);
	//char* str = "madam";
	//int size=0;
	//cout << Question11("osama", 5);
	return 0;
}

