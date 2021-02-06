//
// Created by Anastasia Safargalieva on 05.02.2021.
//

#include <stdexcept>

#pragma once

namespace SiriusFM{

class DiffusionGBM {
private:
    double const m_mu;
    double const m_sigma;
public:
    double mu(double S, double t) { return m_mu * S; }

    DiffusionGBM(const double mMu, const double mSigma) : m_mu(mMu), m_sigma(mSigma) {
        if (m_sigma <= 0)
            throw std::invalid_argument( "sigma should be positive");
    }

    double sigma(double S, double t) { return m_sigma * S; }
};}



