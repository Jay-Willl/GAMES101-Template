#include<cmath>
#include<Eigen/Core>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp" << std::endl;
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a/b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;
    std::cout << std::endl;

    // Example of vector
    std::cout << "Example of vector" << std::endl;
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    std::cout << std::endl;

    // vector output
    std::cout << "Example of output" << std::endl;
    std::cout << v << std::endl;
    std::cout << std::endl;

    // vector add
    std::cout << "Example of add" << std::endl;
    std::cout << v + w << std::endl;
    std::cout << std::endl;

    // vector scalar multiply
    std::cout << "Example of scalar multiply" << std::endl;
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;
    std::cout << std::endl;

    // Example of matrix
    std::cout << "Example of matrix" << std::endl;
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    Eigen::MatrixXf k = Eigen::MatrixXf::Random(4, 3);
    std::cout << std::endl;

    // matrix output
    std::cout << "Example of output" << std::endl;
    std::cout << i << std::endl;
    std::cout << k << std::endl;
    std::cout << std::endl;
    // matrix add i + j
    // matrix scalar multiply i * 2.0
    // matrix multiply i * j
    // matrix multiply vector i * v

    std::cout << "--------" << std::endl;
    Eigen::Vector2d og(1.0, 2.0);
    double theta = M_PI / 4;
    Eigen::Matrix2d rotate;
    rotate << cos(theta), -sin(theta),
              sin(theta), cos(theta);
    Eigen::Vector2d add(1.0, 2.0);

    std::cout << rotate * og + add << std::endl;
    return 0;
}