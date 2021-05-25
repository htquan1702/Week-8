#include <iostream>

using namespace std;

void reverse(char a[])
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	cout << "Xau sau khi dao la: ";
	for (int i = count - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}

void delete_char(char a[], char c)
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	for (int i = 0; i < count; i++)
	{
		if (a[i] == c)
		{
			for (int j = i; j < count; j++)
			{
				a[j] = a[j+1];
			}
			count --;
		}
	}
	cout << "Xau sau khi xoa la: " << a << endl;
}

void pad_right(char a[], int n)
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	cout << a;
	if (count < n)
	{
		for (int i = count; i < n; i++)
		{		
			cout << static_cast<char>(32);
		}
	}
	cout << endl;
}

void pad_left(char a[], int n) 
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	if (count < n)
	{
		for (int i = count; i < n; i++)
		{		
			cout << static_cast<char>(32);
		}
	}
	cout << a << endl;
}

void truncate(char a[], int n)
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	if(count > n)
	a[n] = '\0';
	cout << a << endl;
}

bool is_palindrome(char a[])
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	for (int i = 0; i < count / 2; i++)
	{
		if (a[i] != a[count - i - 1])
			return false;
	}
	return true;
}

void trim_left(char a[])
{
	int count = 0;
	while (a[count] != '\0')
		count ++;
	int kiTuTrang = 0;
	while (a[kiTuTrang] == 32)
		kiTuTrang ++;
	for (int i = 0; i < count - kiTuTrang; i++)
	{
		a[i] = a[i + kiTuTrang];
	}
	a[count - kiTuTrang] = '\0';
	cout << a << endl;
}

void trim_right(char a[])
{
	int count = 0;
	do
	{
		if (a[count] == 32 && a[count+1] == 32)
			a[count] = '\0';
		count ++;
	} while (a[count] != '\0');
	cout << a << endl;
}

int main()
{
	char a[100] = "abcde   ";
	trim_right(a);
		
	return 0;
}
