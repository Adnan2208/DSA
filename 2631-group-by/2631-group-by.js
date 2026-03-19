/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    const arr = this;
    let res = {};

    for(let i = 0; i<arr.length; i++){
        let key = fn(arr[i]);
        if(res[key]){
            res[key].push(arr[i]);
        }
        else{
            res[key] = [arr[i]];
        }
    }
    return res;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */