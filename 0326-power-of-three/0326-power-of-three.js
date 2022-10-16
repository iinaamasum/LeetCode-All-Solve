/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    // for O(1) sol -> pow(3, INT_Max) = 1162261467
    if(n > 0 && 1162261467 % n == 0) return true;
    return false;
};