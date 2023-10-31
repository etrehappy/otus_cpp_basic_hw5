#pragma once
#include "statistics.h"

class Percentile_90 : public IStatistics
{
public:
    Percentile_90();

    void    update(double value) const override;
    double  get_result() const override;
    virtual char* get_statistic_name() const override;

private:
    mutable double m_pct90;

    mutable std::vector<double> m_values;

};