module;
#include <cmath>
module BPZ1901.Filinov.Lab3.Task4:f3f;
import :aa;
namespace RBPO::Lab3::Task4 {
	double f3(unsigned int n) {
		double res = 0;
		int i = 0;
		do {
			res += a(i);
			i++;
		} while (i <= n);
		return res;
	}
}