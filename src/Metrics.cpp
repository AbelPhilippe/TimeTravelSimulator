#include "Metrics.hpp"

Metric::Metric()
{
}


Eigen::Matrix4d Metric::schwarzschild(double r)
{
    Eigen::Matrix4d g;

    double rs = 2.0;

    g << 
        -(1-rs/r), 0, 0, 0,
        0, 1/(1-rs/r), 0, 0,
        0, 0, r*r, 0,
        0, 0, 0, r*r;

    return g;
}