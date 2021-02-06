//
// Created by Anastasia Safargalieva on 05.02.2021.
//



#include <stdexcept>

#pragma once

namespace SiriusFM {

    class DiffusionCEV {
    private:
        double const m_mu;
        double const m_sigma;
        double const m_beta;
    public:
        double mu(double S, double t) { return m_mu * S; }


        DiffusionCEV(const double mMu, const double mSigma, const double mBeta) : m_mu(mMu), m_sigma(mSigma),
                                                                                  m_beta(mBeta) {
            if ((m_sigma <= 0) || (m_beta <= 0)) throw std::invalid_argument("sigma and beta should be positive");
        }


        double sigma(double S, double t) { return m_sigma * S; }

        double beta() { return m_beta; }
    };
}



