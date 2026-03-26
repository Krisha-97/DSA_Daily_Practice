//LEETCODE PROBLEM NO.: 01

// Ex: 
// 1. nums=[2,7,11,15], target = 9   Output: [0,1]
// 2. nums=[3,2,4], target = 6   Output: [1,2]


//Approach-1. Hashmaps
// TC => O(n); SC => O(n)
vector<int> twoSum( vector<int>& nums, int target){
    unordered_map<int,int> mp;
    for(int i=0; i<nums.size(); i++){
        int remain = target - nums[i];
        if(mp.find(remian) != mp.end()){
            return {mp[complement], i};
        }
        mp[nums[i]]=i;
    }
    return {-1,-1};
}

// Approach-2. Two Pointer  (need sorted array)
// TC => O(n); SC => O(1)

vector<int> twoSumSorted(vector<int> arr, int target){
    int left = 0, right = arr.size() - 1;
    while(left > right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return {left, right};
        }
        else if(sum < target){
            left++;
        }
        else {
            right--;
        }
    }
    return {-1,-1};
}
