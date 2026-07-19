#include <iostream>
#include <Eigen/Dense>
#include <boost/numeric/odeint.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/math/quadrature/gauss.hpp>
#include <boost/math/quadrature/trapezoidal.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

int main()
{
    Eigen::Matrix4d g = Eigen::Matrix4d::Identity();

    std::cout << "Metric tensor:\n";
    std::cout << g << std::endl;
}