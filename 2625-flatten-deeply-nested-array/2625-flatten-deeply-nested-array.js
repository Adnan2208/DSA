/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    if(n == 0) return arr;
    const res = [];

    function helper(arr,depth){
        for(const value of arr){
            if(depth < n && typeof value == 'object'){
                helper(value,depth+1);
            }
            else{
                res.push(value);
            }
        }
    }
    helper(arr,0);
    return res;
};