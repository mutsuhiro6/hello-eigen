#define EIGEN_USE_MKL_ALL
#include <iostream>
#include <Eigen/Dense>
using Eigen::MatrixXd;

int main()
{
    MatrixXd a(2, 2), b(2, 2);
    a << 1, 2, 3, 4;
    b << 5, 4, 3, 2;

    std::cout << "a=\n" << a << std::endl;
    std::cout << "b=\n" << b << std::endl;
    // add
    std::cout << "a+b=\n" << a + b << std::endl;
    // sub
    std::cout << "a-b=\n" << a - b << std::endl;
    // mul
    std::cout << "a*b=\n" << a * b << std::endl;
}
