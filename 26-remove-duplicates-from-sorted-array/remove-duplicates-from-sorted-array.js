/**
 * @param {number[]} nums
 * @return {number}
 */
// var removeDuplicates = function (nums) {
//     let index = 1
//     for (let i = 0; i < nums.length - 1; i++) {
//         if (nums[i] !== nums[i + 1]) {
//             nums[index] = nums[i + 1]
//             index++
//         }
//     }
//     return index
// }

var removeDuplicates = function (nums) {
for(let i=0;i<nums.length;i++){
    for(j=nums.length;j>=i+1;j--){
        if (nums[i]==nums[j]){
            nums.splice(i,1)
        }

    }
}
}