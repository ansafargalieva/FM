//
// Created by Anastasia Safargalieva on 05.02.2021.
//


#include <stdexcept>

#pragma once

namespace SiriusFM {

    class DiffusionLipton {
    private:
        double const m_mu;
        double const m_sigma;
        double const m_sigma_1;
        double const m_sigma_2;

    public:
        double mu(double S, double t) const { return m_mu * S; }

//        DiffusionCRI(const double mMu, const double mSigma, const double mBeta, const double mKappa, const double mThita)
//                : m_mu(mMu), m_sigma(mSigma), m_beta(mBeta), m_kappa(mKappa), m_thita(mThita) {if ((m_sigma <= 0) || (m_beta <= 0) || (m_kappa <= 0)) throw std::invalid_argument("sigma and beta and kappa should be positive");}
        DiffusionLipton(const double mMu, const double mSigma, const double mSigma1, const double mSigma2) : m_mu(mMu),
                                                                                                             m_sigma(mSigma),
                                                                                                             m_sigma_1(
                                                                                                                     mSigma1),
                                                                                                             m_sigma_2(
                                                                                                                     mSigma2) {
            if ((m_sigma <= 0) || (m_sigma_1 <= 0) || (m_sigma_2 <= 0))
                throw std::invalid_argument("ALl sigmas"
                                            "  should be positive");
        }

        double sigma(double S) const { return m_sigma; }

        double sigma_1(double S, double t) const { return m_sigma_1 * S; }

        double sigma_2(double S, double t) const { return m_sigma_2 * S; }


    };
}
