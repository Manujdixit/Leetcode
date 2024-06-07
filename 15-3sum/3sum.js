/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    const result=[]
    nums=nums.sort((a,b)=>a-b)
    if(nums.length<3)return result
    for(let i=0;i<nums.length-2;i++){
        if(i>0 && nums[i]===nums[i-1])continue
        let a=nums[i]
        let l=i+1
        let r=nums.length-1
        while(l<r){
            const sum=nums[l]+nums[r]+a
            if(sum===0){
                result.push([a,nums[l],nums[r]])
                while(l<r && nums[l]===nums[l+1])l++    
                while(l<r && nums[r]===nums[r-1])r--
                l++
                r--   
            }
            else if(sum<0)l++
            else r--
        }

    }
    return result
};