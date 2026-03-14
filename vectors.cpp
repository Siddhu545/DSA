#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
vector <int> twoSum(vector<int>& nums, int target){
  unordered_map<int, int> seen;
  for(int i =0; i < nums.size(); i++){
    int need = target - nums[i];
    if(seen.count(need)){
      return {seen[need], i};
    }
    seen[nums[i]] = i;
  }
  return {};
}

int main() {
   vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    printf("answer: [%d, %d]\n", result[0], result[1]);
    return 0;
}
