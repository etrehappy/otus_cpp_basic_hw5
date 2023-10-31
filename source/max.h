#pragma once
#include "statistics.h"

class Max : public IStatistics
{
public:
    Max();

    void    update(double value) const override;
    double  get_result() const override;
    virtual char* get_statistic_name() const override;

private:
    mutable double m_max;
    mutable int m_count;

};