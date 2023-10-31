#include "max.h"

Max::Max()
	: m_max(NULL), m_count(NULL)
{}

void Max::update(double value) const
{
	if (m_count == NULL)
		m_max = value;
	else if (value > m_max)
		m_max = value;

	++m_count;
}

double Max::get_result() const
{
	return m_max;
}

char* Max::get_statistic_name() const
{
	return "max";
}
