#include "min.h"

Min::Min() 
    : m_min(NULL), m_count(NULL)
{}

void Min::update(double value) const
{
	if (m_count == NULL)
		m_min = value;	
	else if (value < m_min)	
		m_min = value;

	++m_count;
}

double Min::get_result() const
{
	return m_min;
}

char* Min::get_statistic_name() const
{
	return "min";
}

