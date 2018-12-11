#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "rus");
	int min, i = 0, kolfive = 0, greatest = 0, x;
	double average, sum = 0;
	do
	{
		if(x!=0)
		{
		cin >> x;

		if (i == 0)
			min = x;
		else if (x < min)
			min = x;

		if (x < 0)
		{
			if (greatest == 0)
				greatest = x;
			else if (x > greatest)
				greatest = x;
		}

		if ((x > 0) && (x % 5 == 0))
			kolfive++;

		sum += x;
		i++;
		}
	} while (x != 0);
	if (i == 0)
		cout << "Не было введено ни одного значения";
	else
	{
		average = sum / i;
		cout << "Среднее арифметическое:" << average << endl
			 << "Минимальное число:" << min << endl
			 << "Кол-во плож., кратных пяти:" << kolfive << endl;
		if (min < 0)
			cout << "диапазон отрицательных чисел: [" << min << ";" << greatest << "]";
		else
			cout << "Не было введено ни одного отрицательного числа";
	}

	return 0;
}
