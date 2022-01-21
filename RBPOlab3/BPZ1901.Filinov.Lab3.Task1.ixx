module;
#include <cmath>
export module BPZ1901.Filinov.Lab3.Task1;
namespace RBPO::Lab3::Task1 {
	export double f1(double x) {
		return (-(sqrt(x)));
	}
	export double f2(double x) {
		return (x > 3.6) ? (45 * pow(x, 2) + 5) : ((5 * x) / (10 * pow(x, 2) + 1));
	}
	export double a(unsigned int n) {
		return pow(-1, n) * ((pow(n, 2) + 1) / (pow(n, 3) + 3));
	}
	export double f3(unsigned int n) {
		double res = 0;
		for (int i = 0; i <= n; i++) {
			res += a(i);
		}
		return res;
	}
	export double f4(double eps) {
		double res = 0;
		for (int i = 0; abs(a(i) - a(i - 1)) > eps; i++)
		{
			res += a(i);
		}
		return res;
	}
}

