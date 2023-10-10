#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;

	cout << "N = "; cin >> N;
	S = 0;
	i = N;
	while (i <= 10)
	{
		S += (i + 1.0 / pow(i, 2)) / sqrt(1 + exp(1.0 / i));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = N;
	do {
		S += (i + 1.0 / pow(i, 2)) / sqrt(1 + exp(1.0 / i));
		i++;
	} while (i <= 10);
	cout << S << endl;
	S = 0;
	for (i = N; i <= 10; i++)
	{
		S += (i + 1.0 / pow(i, 2)) / sqrt(1 + exp(1.0 / i));
	}
	cout << S << endl;
	S = 0;
	for (i = 10; i >= N; i--)
	{
		S += (i + 1.0 / pow(i, 2)) / sqrt(1 + exp(1.0 / i));
	}
	cout << S << endl;
	return 0;
}