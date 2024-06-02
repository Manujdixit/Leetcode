/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const map={}

    for(const i of strs){
        const key=i.split("").sort().join("")
        if(map[key]){
            map[key].push(i);
        }else map[key]=[i]
    }
    return Object.values(map);
};