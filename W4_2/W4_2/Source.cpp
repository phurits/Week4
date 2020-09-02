#include<iostream>
#include<stdio.h>
int wordlen(char a[]);
using namespace std;

int main()
{
	int x=0, y=0,z=0;
	char a[999];
	printf("Input word = ");
	cin >> a;
	for (int i = 0; i < wordlen(a); i++)
	{
		if (a[i] >= 97 && a[i] <= 122) x++;
		else if (a[i] >= 65 && a[i] <= 90) y++;
		else z++;
	}
	printf("Letters in word = %d", wordlen(a));
	printf("\nUpper case = %d", y);
	printf("\nLower case = %d", x);
	printf("\nNot alphabet = %d", z);

	return 0;
}

int wordlen(char a[])
{
	int i=0;
	while (a[i] != '\0')
	{
		
		i++;
	}
	return i;
}