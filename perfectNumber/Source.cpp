#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	unsigned int userNumber;
	unsigned int counter;

	cout << "PERFECT NUMBERS TO 10000:\n";

	for (int i = 2; i < 10000; i++)
	{
		userNumber = i;
		counter = 0;
		for (int j = 1; j < i; j++)
		{
			if (userNumber % j == 0)
			{
				counter += j;
			}
		}
		if (userNumber == counter)
		{
			cout << counter << " = ";

			userNumber = i;
			counter = 0;
			for (int j = 1; j < i; j++)
			{
				if (userNumber % j == 0)
				{
					counter += j;
					cout << j;
					if (j<(userNumber / 2))
					{
						cout << " + ";
					}
				}
			}
			cout << "\n";
		}
	}

	getchar();

	return 0;

}