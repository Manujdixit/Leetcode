/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function (s, k) {
    let i = 0, j = 0, max = 0, topfreq = 0;
    let mp = new Map();

    while (j < s.length) {
        mp.set(s[j], (mp.get(s[j]) || 0) + 1);
        topfreq = Math.max(topfreq, mp.get(s[j]));

        while ((j - i + 1) - topfreq > k) {
            mp.set(s[i], mp.get(s[i]) - 1);
            i++;
        }

        max = Math.max(max, j - i + 1);
        j++;
    }

    return max;
};
