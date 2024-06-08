/**
 * @param {number[]} prices
 * @return {number}
 */
// var maxProfit = function (prices) {
//     let maxprofit = 0;
    
//     for (let i = 0; i < prices.length - 1; i++) {
//         for (let j = i + 1; j < prices.length; j++) {
//             let profit = prices[j] - prices[i];
//             if (profit > maxprofit) {
//                 maxprofit = profit;
//             }
//         }
//     }
    
//     return maxprofit;
// }


var maxProfit = function (prices) {
    let max=0

    let l=0 ,r=1
    while(r<prices.length){
        if(prices[l]>prices[r]){
            l=r
        }
        max=Math.max(max,prices[r]-prices[l])
        r++
    }
    return max
}