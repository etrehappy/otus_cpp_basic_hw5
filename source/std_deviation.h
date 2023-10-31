#pragma once
#include "statistics.h"

class Std_deviation : public IStatistics
{
public:
    Std_deviation();

    void    update(double value) const override;
    double  get_result() const override;
    virtual char* get_statistic_name() const override;

private:
    mutable double m_std;
    mutable double m_summ_all;
    mutable double m_mean;
    mutable double m_dispersion;
    mutable int m_count;

    mutable std::vector<double> m_values;
};
