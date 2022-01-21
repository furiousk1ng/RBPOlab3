module;
#include <cmath>
module BPZ1901.Filinov.Lab3.Task4:f2f;
namespace RBPO::Lab3::Task4 {
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
}