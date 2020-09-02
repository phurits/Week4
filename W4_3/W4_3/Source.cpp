#include<stdio.h>
#include<iostream>

int wordlen(char a[]);

int main()
{
	char a[999];
	printf("Input sentence :");
	std::cin.getline(a, 999);
	printf("New sentence   :");
	for (int i = 0; i <= wordlen(a); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
		printf("%c", a[i]);
	}
	return 0;
}

int wordlen(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return i;
}