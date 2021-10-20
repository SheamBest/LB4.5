#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
	double x, y, R;
	int i;
	string res;

	cout << "R = "; cin >> R;
	cout << endl;

	cout << "Choose x, y" << endl;
	cout << endl;

	for (i = 0; i < 10; i += 1) {

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((R + x >= y && y >= 0 && (x * x) + (y * y) <= (R * R)) || (x * x) + (y * y) <= (R * R) && y <= 0 && x <= 0)
			res = "yes";
		else
			res = "no";

		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(7) << "x" << " |"
			<< setw(7) << "y" << " |"
			<< setw(7) << "result" << " |" << endl;
		cout << "---------------------------" << endl;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(2) << y
			<< " |" << setw(7) << res
			<< " |" << endl;
		cout << endl;
	}


	cout << endl;
	cout << endl;
	cout << "Random x,y" << endl;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i += 1) {

		x = -R + rand() * (R - (-R)) / RAND_MAX;
		y = -R + rand() * (R - (-R)) / RAND_MAX;

		if ((R + x >= y && y >= 0 && (x * x) + (y * y) <= (R * R)) || (x * x) + (y * y) <= (R * R) && y <= 0 && x <= 0)
			res = "yes";
		else
			res = "no";

		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(7) << "x" << " |"
			<< setw(7) << "y" << " |"
			<< setw(7) << "result" << " |" << endl;
		cout << "---------------------------" << endl;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(2) << y
			<< " |" << setw(7) << res
			<< " |" << endl;
		cout << endl;

	}

	cin.get();
	return 0;
}
