# include <iostream>

using std::cin;
using std::cout;

int main()
{
	int number;
	int* p;
	int counter = 0;
	cout << "Please, insert a number: ";
	cin >> number;
	p = &number;

	if (number > 0)
	{
		for (int i = 2; i <= number; i++)
		{
			if (number % i == 0)
			{
				counter++;
			}
		}
	}
	else if (number < 0)
	{
		for (int i = number; i <= 2; i++)
		{
			if (number % i == 0)
			{
				counter++;
			}
		}
	}
	else
	{
		cout << "Number 0 is not prime.";
	}


	if (counter > 1)
	{
		cout << "Number " << *p << " is not prime." << std::endl;
	}
	else
	{
		cout << "Number " << *p << " is prime." << std::endl;
	}

	cout << "Also, number " << *p << " is stored at this hexadecimal address: 0x" << p << std::endl;

	system("pause");
	return 0;
}