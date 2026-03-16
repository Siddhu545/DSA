// Best Time to Buy and Sell Stock

#include <stdio.h>
#include <vector>

using namespace std;

int findMaxProfit(vector<int> &nums)
{
    int minPrice = nums[0];
    int maxProfit = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        minPrice = min(nums[i], minPrice);
        int profit = nums[i] - minPrice;
        maxProfit = max(profit, maxProfit);
    }
    return maxProfit;
}

int main()
{
    vector<int> nums = {2, 4, 1, 7};
    int res = findMaxProfit(nums);
    printf("res = %d\n", res);
    return 0;
}