/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const n = nums.length;
    const pre = Array(n).fill(1);
    const post = Array(n).fill(1);
    let pretemp = 1;
    let posttemp = 1;

    for (let i = 0; i < n; i++) {
        pre[i] = pretemp;
        pretemp *= nums[i];
    }

    for (let i = n - 1; i >= 0; i--) {
        post[i] = posttemp;
        posttemp *= nums[i];
    }

    for (let i = 0; i < n; i++) {
        nums[i] = pre[i] * post[i];
    }

    return nums;
};