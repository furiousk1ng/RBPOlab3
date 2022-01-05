module;
#include <cmath>
module BPZ1901.Filinov.Lab3.Task3;
namespace RBPO::Lab3::Task3 {
	double a(unsigned int n) {
		return pow(-1, n) * ((pow(n, 2) + 1) / (pow(n, 3) + 3));
	}
}