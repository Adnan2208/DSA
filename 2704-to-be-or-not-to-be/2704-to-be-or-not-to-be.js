/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    const obj = {
        toBe : function(value2){
            if(value2 === val){
                return true;
            }
            else{
                throw "Not Equal";
            }
        },
        notToBe : function(value3){
            if(value3 !== val){
                return true;
            }
            else{
                throw "Equal";
            }
        }
    }

    return obj;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */