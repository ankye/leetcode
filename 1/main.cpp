//
//  main.cpp
//  lc
//
//  Created by Ankye Sheng on 2019/5/28.
//  Copyright © 2019 Ankye Sheng. All rights reserved.
//  https://leetcode-cn.com/problems/two-sum/
//

#include <iostream>
#include <vector>
#include <map>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* twoSum(int* nums, int numsSize, int target) {
//    for(int i=0; i<numsSize-1; i++){
//        for(int j=i+1;j<numsSize;j++){
//            if(nums[i] + nums[j] == target){
//                return new int[2]{i,j};
//            }
//        }
//    }
//    return NULL;
//}
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    int numsSize = 4;
//    int nums[4] = {2, 7, 11, 15};
//    int target = 9;
//    int* result = twoSum(nums, numsSize, target);
//    if(result != NULL){
//        std::cout << result[0] << result[1] <<std::endl;
//        delete []result;
//    }else{
//        std::cout << "Cant find" <<std::endl;
//    }
//    return 0;
//}


//std::vector<int> twoSum(std::vector<int>& nums, int target) {
//    int numsSize = (int)nums.size();
//    std::vector<int> result;
//
//    for(int i=0; i<numsSize-1; i++){
//        for(int j=i+1;j<numsSize;j++){
//            if(nums[i] + nums[j] == target){
//                result.push_back(i);
//                result.push_back(j);
//                return result;
//            }
//        }
//    }
//    return result;
//
//}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> mTemp;
    std::vector<int> result;
    for (int i = 0;i < nums.size();i++){
        if(mTemp.count(target-nums[i])>0 && mTemp[target-nums[i]] != i){
            result.push_back(mTemp[target-nums[i]]);
            result.push_back(i);
        }
        mTemp[nums[i]] = i;
    }
    return result;
}
int main(int argc, const char * argv[]) {
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    std::cout<< result[0] << result[1];
    return 0;
}
