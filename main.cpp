#include <iostream>
import BPZ1901.Filinov.Lab3.Task1;
import BPZ1901.Filinov.Lab3.Task2;
import BPZ1901.Filinov.Lab3.Task3;
import BPZ1901.Filinov.Lab3.Task4;
import BPZ1901.Filinov.Lab3.Task5;
using namespace std;
int main() {
	double x = 5.5;
	unsigned int n = 6;
	double eps = 0.001;
	int start = -1000;

	while (start != 0) {
		printf("Enter a number:");
		cin >> start;
		switch (start) {
		case 1:
			std::cout << "Task 1:" << std::endl;
			std::cout << "   f1: " << RBPO::Lab3::Task1::f1(x) << std::endl;
			std::cout << "   f2: " << RBPO::Lab3::Task1::f2(x) << std::endl;
			std::cout << "   f3: " << RBPO::Lab3::Task1::f3(n) << std::endl;
			std::cout << "   f4: " << RBPO::Lab3::Task1::f4(eps) << std::endl;
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "Task 2:" << std::endl;
			std::cout << "   f1: " << RBPO::Lab3::Task2::f1(x) << std::endl;
			std::cout << "   f2: " << RBPO::Lab3::Task2::f2(x) << std::endl;
			std::cout << "   f3: " << RBPO::Lab3::Task2::f3(n) << std::endl;
			std::cout << "   f4: " << RBPO::Lab3::Task2::f4(eps) << std::endl;
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "Task 3:" << std::endl;
			std::cout << "   f1: " << RBPO::Lab3::Task3::f1(x) << std::endl;
			std::cout << "   f2: " << RBPO::Lab3::Task3::f2(x) << std::endl;
			std::cout << "   f3: " << RBPO::Lab3::Task3::f3(n) << std::endl;
			std::cout << "   f4: " << RBPO::Lab3::Task3::f4(eps) << std::endl;
			std::cout << std::endl;
			break;
		case 4:
			std::cout << "Task 4:" << std::endl;
			std::cout << "   f1: " << RBPO::Lab3::Task4::f1(x) << std::endl;
			std::cout << "   f2: " << RBPO::Lab3::Task4::f2(x) << std::endl;
			std::cout << "   f3: " << RBPO::Lab3::Task4::f3(n) << std::endl;
			std::cout << "   f4: " << RBPO::Lab3::Task4::f4(eps) << std::endl;
			std::cout << std::endl;
			break;
		case 5:
			std::cout << "Task 4:" << std::endl;
			std::cout << "   f1: " << RBPO::Lab3::Task5::f1(x) << std::endl;
			std::cout << "   f2: " << RBPO::Lab3::Task5::f2(x) << std::endl;
			std::cout << "   f3: " << RBPO::Lab3::Task5::f3(n) << std::endl;
			std::cout << "   f4: " << RBPO::Lab3::Task5::f4(eps) << std::endl;
			std::cout << std::endl;
			break;
		}

	}
	return 0;
}
