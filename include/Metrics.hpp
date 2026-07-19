#ifndef METRICS_HPP
#define METRICS_HPP

#include <eigen3/Eigen/Dense>

class Metric
{
public:

    Metric();

    // Plane space
    Eigen::Matrix4d minkowski();

    // No rotation
    Eigen::Matrix4d schwarzschild(
        double r,
        double M);

    // Charge blackhole
    Eigen::Matrix4d reissnerNordstrom(
        double r,
        double M,
        double Q);

    // Rotative blackhole (equator)
    Eigen::Matrix4d kerr(
        double r,
        double theta,
        double M,
        double a);

    // Rotating, charged black hole
    Eigen::Matrix4d kerrNewman(
        double r,
        double theta,
        double M,
        double a,
        double Q);

    // Expanding universe
    Eigen::Matrix4d flrw(
        double a,
        double k,
        double r,
        double theta);

    // deSitter universe
    Eigen::Matrix4d deSitter(
        double r,
        double Lambda);

    // Anti deSitter
    Eigen::Matrix4d antiDeSitter(
        double r,
        double Lambda);

    // Morris-Thorne Wormhole
    Eigen::Matrix4d morrisThorne(
        double r,
        double b0);

    // Alcubierre warp drive (optional for this simulation :D)
    Eigen::Matrix4d alcubierre(
        double x,
        double y,
        double z,
        double vs);

private:

    constexpr static double G = 6.67430e-11;
    constexpr static double c = 299792458.0;

};

#endif