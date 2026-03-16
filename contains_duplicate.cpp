#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for(int i = 0; i < nums.size(); i++) {
        if(seen.count(nums[i])) {
            return true;   
        }
        seen.insert(nums[i]);
    }
    return false;  
}

int main()
{
    vector<int> nums = {2, 7, 11, 2};
    printf("%s\n", containsDuplicate(nums) ? "duplicate" : "not duplicate");
    return 0;
}
