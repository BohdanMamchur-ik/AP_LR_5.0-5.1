// АП ЛР 5.1.cpp : 
// Мамчур Богдан ІК-12
//

#include <iostream>
#include <cmath>
using namespace std;

double h(const double s, const double t);

int main()
{
	double s, t;
	cout << "Enter s: ";
	cin >> s;
	cout << "Enter t: ";
	cin >> t;
	cout << "fh = " << h(s, t) << endl; // для перевірки юніттесту
	double result = h(1, s + t) + h(s, s - t) - h(t, sqrt(s * s + t * t));
	cout << "Result: " << result << endl;
	return 0;
}
double h(const double s, const double t)
{
	return ((s * s + t * t)) / (1 + s * s + s * s * t * t);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
