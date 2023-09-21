#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int v1 = pow(2,31)-1;
	char v2 = 'A';
	bool v3 = true;
	float v4 = exp(1);
	double v5 = exp(1);
	
	cout << "v1(int)" << v1 << endl;
	cout << "v2(char)" << v2 << endl;
	cout << "v3(bool)" << v3 << endl;
	cout << "v4(float)" << v4 << endl;
	cout << "v5(double)" << v5 << endl;
	cout.precision(16);
	system("Pause");
}
