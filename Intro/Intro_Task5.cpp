//Условие:
//Да се определи дали сред цифрите на дадено трицифрено число няма повтарящи се.
//........................................................................................

#include <iostream>

using namespace std;


int main()
{
	int n, n1, n2, n3;
	//n = n1 n2 n3 (n1, n2, n3 - цифри)

	cin >> n;

	n3 = n % 10; //остатъкът при деление да 10 ни дава последната цифра
	n /= 10;     //целочислено деление -  n става равно на цялата част частното при деление с 10
			     //така в n остават записани само първите му две цифри
	n2 = n % 10; //аналогично, вземаме следващата цифра
	n /= 10;     //в числото ни остава само цифрата му на стотиците

	n1 = n;      //n1 е цифрата на стотиците

	//поверяваме дали има еднакви цифри
	if((n1 == n2) || (n1 ==  n3) || (n2 == n3))
	{
		cout << "The digits are NOT unique." << endl;
	}

	else //в противен случай, цифрите са различни една от друга
	{
		cout << "The digits are unique." << endl;
	}

	return 0;
}
