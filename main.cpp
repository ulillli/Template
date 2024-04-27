#include "MatrixT.h"
#include <string.h>

int main() {
	try {
		std::cout << "The creating of template vectors\n";
		VectorTemplate<int> a(3);
		VectorTemplate<double> b(3);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
		std::cout << "int + double   " << (a + b) << std::endl;
		std::cout << "double + int   " << (b + a) << std::endl;
		std::cout << std::endl;
		std::cout << "The distance from VectorTemplate<int> to VectorTemplate<double>    " << a.distance(b) << std::endl;
		std::cout << "The distance from VectorTemplate<double> to VectorTemplate<int>    " << b.distance(a) << std::endl;
		std::cout << std::endl;

		std::string  r[2] = { "aaa", "bbb" }, s[2] = { "111","22" };
		VectorTemplate<std::string> c(r,2), d(s,2);
		std::cout << "VectorTemplate<string>  c " << c << std::endl;
		std::cout << "VectorTemplate<string>  d " << d << std::endl;
		std::cout << "string + string   " << (c + d) << std::endl;
		std::cout << std::endl;
		
		Matrix<double> A(3, 3);
		Matrix<int> B(3, 3);
		std::cout << "Matrix<double>  A " << A << std::endl;
		std::cout << "Matrix<int>     B " << B << std::endl;
		std::cout << std::endl;
		std::cout << "       A+B        " << (A + B) << std::endl;

		std::cout << std::endl;
		VectorTemplate<std::string>  R[2] = {c,d};
		VectorTemplate<VectorTemplate<std::string>> T(R,2);
		Matrix<std::string> S(T);
		std::cout << "Matrix<string>  S " << S << std::endl;
		std::cout << "       S+S        " << (S + S) << std::endl;
	}
	catch (const char * str) {
	}
}
