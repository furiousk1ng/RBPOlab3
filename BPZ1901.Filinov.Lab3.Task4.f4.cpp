module;
#include <cmath>
module BPZ1901.Filinov.Lab3.Task4:f4f;
import :aa;
namespace RBPO::Lab3::Task4
{
	double f4(double eps) {
		double res = 0;
		int i = 0;
		do {
			res += a(i);
			i++;
		} while (abs(a(i) - a(i - 1)) > eps);
		return res;
	}
}