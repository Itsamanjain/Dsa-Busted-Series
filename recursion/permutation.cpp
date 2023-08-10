// base case 
if(index >= nums.size()){
    ans.push_back(nums);
    return;
}

for(int j = index;j<nums.size(); j++){
    swap(nums[index],nums[j]);
    solve(nums,ans,index+1);
    //backtrack
    swap(nums[index],num[j]);
}