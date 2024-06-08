/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let res = 0,l=0,r=height.length-1

    while(l<r){
        const temp=(r-l)*Math.min(height[l], height[r])
        res=Math.max(res,temp)
        if(height[l]>height[r])r-=1
        else l+=1
    }
    return res
};