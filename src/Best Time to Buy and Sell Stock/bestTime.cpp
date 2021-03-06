#include <algorithm>
#include <vector>

class Solution
{
public:
  int maxProfit(std::vector<int> &prices)
  {
    int n = (int)prices.size();
    if (n < 2)
    {
      return 0;
    }
    int curr_min = prices[0];
    int curr_max_profit = 0;
    for (int i = 1; i < n; ++i)
    {
      curr_min = std::min(curr_min, prices[i]);
      curr_max_profit = std::max(curr_max_profit, prices[i] - curr_min);
    }
    return curr_max_profit;
  }
};
