#pragma once
#include "statistics.h"

class Min : public IStatistics
{
public:
    Min();

    void    update(double value) const override;
    double  get_result() const override;
    virtual char* get_statistic_name() const override;

private:
    mutable double m_min;
    mutable int m_count;
};