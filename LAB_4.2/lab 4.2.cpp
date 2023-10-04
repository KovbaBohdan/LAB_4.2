#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;
	
	while (x <= xk)
	{
		A = 2 * fabs(x) * fabs(x) * fabs(x);
	
		if (x <= -0.1)
			B = 5 * cos(18 * x);
		else
			if (x >= 1.2)
				B = cos(x) / sin(x) + 18;
			else
				B = atan((x + 2) / 5);

		y = A - B;
		
		cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;
		
		x += dx;
	}
	
	cout << "---------------------------" << endl;
	
	return 0;
}