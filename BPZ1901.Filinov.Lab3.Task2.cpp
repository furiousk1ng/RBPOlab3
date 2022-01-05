module;
#include <cmath>
module BPZ1901.Filinov.Lab3.Task2;
namespace RBPO::Lab3::Task2 {
	double f1(double x) {
		return (-(sqrt(x)));
	}
	double f2(double x) {
		if (x > 3.6)
		{
			return 45 * pow(x, 2) + 5;
		}
		else
		{
			return ((5 * x) / (10 * pow(x, 2) + 1));
		}

	}
	double a(unsigned int n) {
		return pow(-1, n) * ((pow(n, 2) + 1) / (pow(n, 3) + 3));
	}
	double f3(unsigned int n) {
		double res = 0;
		int i = 0;
		while (i <= n)
		{
			res += a(i);
			i++;
		}
		return res;
	}
	double f4(double eps) {
		double res = 0;
		int i = 0;
		while (abs(a(i) - a(i - 1)) > eps)
		{
			res += a(i);
			i++;
		}
		return res;
	}
}

