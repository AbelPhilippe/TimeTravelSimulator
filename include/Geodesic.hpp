#pragma once

#include <array>
#include <vector>

#include <boost/numeric/odeint.hpp>

class Geodesic
{
public:

    /// State:
    /// [ t, x, y, z,
    ///   dt/dλ, dx/dλ, dy/dλ, dz/dλ ]
    using State = std::array<double, 8>;

    Geodesic();

    explicit Geodesic(const Christoffel& christoffel);

    void setChristoffel(const Christoffel& christoffel);

    void setInitialState(const State& initialState);

    const State& getState() const;

    void step(double lambda, double deltaLambda);

    void integrate(
        double lambda0,
        double lambda1,
        double deltaLambda);

    const std::vector<State>& getTrajectory() const;

private:

    State state_;

    std::vector<State> trajectory_;

    const Christoffel* christoffel_;

    void system(
        const State& state,
        State& dState,
        double lambda);

    using Stepper =
        boost::numeric::odeint::runge_kutta_dopri5<State>;

    Stepper stepper_;
};