#include "statistics.h"
#include "min.h"
#include "max.h"
#include "mean.h"
#include "std_deviation.h"
#include "pct90.h"
#include "pct95.h"


enum class Statistic_Types
{
    Min,
    Max,
    Mean,
    Std_deviation,
    Percentile_90,
    Percentile_95,

    max_count,
}; 



int main()
{
     double value;   

     IStatistics *statistics[(int)Statistic_Types::max_count];

     statistics[0] = new Min{};
     statistics[1] = new Max{};
     statistics[2] = new Mean{};
     statistics[3] = new Std_deviation{};
     statistics[4] = new Percentile_90{};
     statistics[5] = new Percentile_95{};

   

     std::cout << "Enter any sequence of numbers: ";
      while (std::cin >> value)
      {        
          for (size_t i = 0; i < (int)Statistic_Types::max_count; i++)
          {
              statistics[i]->update(value);
          }

          if (std::cin.peek() == '\n')
          {
            #if defined(WIN32)
                std::cout << "\nCtrl+Z, Enter for result: ";
            #else
                std::cout << "\nCtrl+D for result: ";
            #endif
          }
      }
      
      
      for (size_t i = 0; i < (int)Statistic_Types::max_count; i++)
      {
          std::cout << "\nResult of " << statistics[i]->get_statistic_name() << " is \t" << statistics[i]->get_result();
      }


      std::cout << std::endl << std::endl;


      for (size_t i = 0; i < (int)Statistic_Types::max_count; i++)
      {
          delete statistics[i];
      }      

     
    return 0;
}