#include <iostream>

using namespace std;

int count_n_before_s(int s, int d)
{
	int a = 2;
	int sum = 0;
	int n = 0;

	while (sum < s)
	{
		sum += a;
		a += d;
		n++;
	}
	return n;
}

int main()
{
	setlocale(LC_ALL, "russian");
	int d = 2;
	int years = 30;
	int all_words = 50000;

	for (int i = 100; i <= 1000; i += 100)
	{
		cout << i << " слов выучит за " << count_n_before_s(i, d) << " дней\n";
	}

	int days_for_all_words = count_n_before_s(all_words, d);
	cout << all_words << " слов выучит за " << days_for_all_words << " дней\n";
	double required_years = ceil(days_for_all_words / 365.);
	cout << "Лет потребуется для изучения " << all_words << " слов: " << required_years << "\n";

	double required_lifes = ceil(required_years / years);
	cout << "Жизней потребуется: " << required_lifes << " \n";


	system("pause");

	return 0;
}
