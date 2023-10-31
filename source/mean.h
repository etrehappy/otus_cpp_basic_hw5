#pragma once
#include "statistics.h"

class Mean : public IStatistics
{
public:
    Mean();

    void    update(double value) const override;
    double  get_result() const override;
    virtual char* get_statistic_name() const override;

private:
    mutable double m_mean;
    mutable double m_summ_all;
    mutable int m_count;
};