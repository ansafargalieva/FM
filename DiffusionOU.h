//
// Created by Anastasia Safargalieva on 05.02.2021.
//



#include <stdexcept>

#pragma once

namespace SiriusFM {

    class DiffusionOU {
    private:
        double const m_mu;
        double const m_sigma;
        double const m_beta;
        double const m_kappa;
        double const m_thita;
    public:
        double mu(double S, double t) const { return m_mu * S; }

        DiffusionOU(const double mMu, const double mSigma, const double mBeta, const double mKappa, const double mThita)
                : m_mu(mMu), m_sigma(mSigma), m_beta(mBeta), m_kappa(mKappa), m_thita(mThita) {if ((m_sigma <= 0) || (m_beta <= 0) || (m_kappa <= 0)) throw std::invalid_argument("sigma and beta and kappa should be positive");}

        double sigma(double S, double t) const { return m_sigma * S; }

        double beta() const { return m_beta; }

        double kappa() const { return m_kappa; }

        double thita() const {return m_thita; }
    };
}

