#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R1, R2, x0, y0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R1 = "; cin >> R1;
		cout << "R2 = "; cin >> R2;

		x0 = -R1;
		y0 = R1;
		


		if ((y * y <= R1 * R1 - x * x && y * y >= R2 * R2 - x * x && y >= 0 && x >= 0) ||
			(y * y <= R1 * R1 - x * x && y * y >= R2 * R2 - x * x && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{

		x = R1 * 2 * rand() / RAND_MAX - R1;
		y = R1 * 2 * rand() / RAND_MAX - R1;

		if ((y * y <= R1 * R1 - x * x && y * y >= R2 * R2 - x * x && y >= 0 && x >= 0) ||
			(y * y <= R1 * R1 - x * x && y * y >= R2 * R2 - x * x && y <= 0 && x <= 0))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	system("pause");
	return 0;
}