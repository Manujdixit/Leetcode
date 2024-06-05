/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
// var topKFrequent = function (nums, k) {
//     let map = new Map()
//     let bucket = []
//     let result = []

//     for (let i = 0; i < nums.length; i++) {
//         if (!map[nums[i]]) map[nums[i]] = 1
//         else map[nums[i]]++
//     }
//     for (let [num, freq] of Object.entries(map)) {
//         if (!bucket[freq]) {
//             bucket[freq] = new Set().add(num)
//         }
//         else {
//             bucket[freq] = bucket[freq].add(num);
//         }
//     }
//     for (let i = bucket.length - 1; i >= 0; i--) {
//         if (bucket[i]) result.push(...bucket[i]);
//         if (result.length === k) break;
//     }

//     return result;
// };

var topKFrequent = function (nums, k) {
    let map=new Map()
    let arr=[]

    for (num of nums){
        if(map.has(num)){ 
            map.set(num,map.get(num)+1)
        }
        else map.set(num,1)        
    }
    arr=Array.from(map.entries())
    arr=arr.sort((a,b)=>b[1]-a[1])
    arr=arr.splice(0,k).map(x=>x[0])
    return arr;
}