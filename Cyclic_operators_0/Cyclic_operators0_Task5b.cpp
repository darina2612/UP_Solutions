#include <iostream>

using namespace std;


int main()
{
    int currentNumber, sum = 0;

    while(sum < 100)
	{
		cin >> currentNumber;
		sum += currentNumber;
	}

	cout << "The sum has reached or exceeded 100!" << endl;

	return 0;
}

