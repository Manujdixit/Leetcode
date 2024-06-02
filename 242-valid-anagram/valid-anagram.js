/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
// var isAnagram = function (s, t) {
//     if(s.length!==t.length)return false;
//     s = s.split("").sort().join("")
//     t = t.split("").sort().join("")
//     if (s === t) return true;
//     return false;

// };

var isAnagram = function (s, t, map = new Map()) {
    if (s.length !== t.length) return false;

    addFreq(s, map)
    subFreq(t, map)

    return checkFreq(map)
}

const addFreq = (str, map) => {
    for (const char of str) {
        const count = (map.get(char) || 0) + 1
        map.set(char, count)
    }
}

const subFreq = (str, map) => {
    for (const char of str) {
        const count = (map.get(char)||0) - 1
        map.set(char, count)
    } 
}

const checkFreq = (map) => {
    for (const [char, count] of map) {
        if (count !== 0) return false
    }
    return true
}