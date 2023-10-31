#pragma once
#include <iostream>
#include <cmath>  //mean + std_deviation + pct90 + pct 95
#include <vector> //statistics + std_deviation + pct90 + pct 95


class IStatistics
{
public:
	IStatistics() = default;
	virtual ~IStatistics() = default;

	virtual void	update(double value) const = 0;
	virtual double	get_result() const = 0;
	virtual char*	get_statistic_name() const = 0;

private:
	
};

