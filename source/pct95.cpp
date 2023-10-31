#include "pct95.h"

Percentile_95::Percentile_95()
	: m_pct95(NULL), m_values{}
{}

void Percentile_95::update(double value) const
{
	m_values.push_back(value);

	int i = ceil(95. * m_values.size() / 100.); // n = (P/100) * N, 0 < P <= 100

	if (i < 2 )
		m_pct95 = m_values[0];
	else
		m_pct95 = m_values[i - 1];	
}

double Percentile_95::get_result() const
{
	return m_pct95;
}

char* Percentile_95::get_statistic_name() const
{
	return "pct95";
}