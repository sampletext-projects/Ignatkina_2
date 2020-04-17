#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Игнаткина Валерия студент группы УТН-111" << "\n";
	cout << "Программа вычисления сроков обучения Незнайки\n";

	int d = 2;
	int years = 30;
	int all_words = 50000;

	for (int i = 100; i <= 1000; i += 100)
	{
		int a = 2;
		int sum = 0;
		int n = 0;

		while (sum < i)
		{
			sum += a;
			a += d;
			n++;
		}
		cout << i << " слов выучит за " << n << " дней\n";
	}

	int a = 2;
	int sum = 0;
	int n = 0;

	while (sum < all_words)
	{
		sum += a;
		a += d;
		n++;
	}

	int days_for_all_words = n;
	cout << all_words << " слов выучит за " << days_for_all_words << " дней\n";
	double required_years = ceil(days_for_all_words / 365.);
	cout << "Лет потребуется для изучения " << all_words << " слов: " << required_years << "\n";

	double required_lifes = ceil(required_years / years);
	cout << "Жизней потребуется: " << required_lifes << " \n";


	system("pause");

	return 0;
}
