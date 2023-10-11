#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if (((x * x) + (y * y) <= R * R && y >= 0 && x <= 0) ||
			(x >= 0 && y <= 0 && x <= R && y >= (-R / (R / 2)) * x && y >= (-R + (R / (R - (R / 2)) * (x - (R / 2))))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = R * rand() / RAND_MAX - R;
			y = R * rand() / RAND_MAX - R;
			if (((x * x) + (y * y) <= R * R && y >= 0 && x <= 0) ||
				(x >= 0 && y <= 0 && x <= R && y >= (-R / (R / 2)) * x && y >= (-R + (R / (R - (R / 2)) * (x - (R / 2))))))
				cout << setw(8) << setprecision(2) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}