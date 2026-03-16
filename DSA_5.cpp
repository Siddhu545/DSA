//"product/sum of everything EXCEPT current element"

#include <stdio.h>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n, 1);

    // prefix pass
    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        result[i] = prefix;
        prefix *= nums[i];
    }

    // suffix pass
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        result[i] *= suffix;
        suffix *= nums[i];
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for (int i = 0; i < result.size(); i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}