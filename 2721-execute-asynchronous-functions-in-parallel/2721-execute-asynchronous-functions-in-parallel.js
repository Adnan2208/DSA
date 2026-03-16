/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    let arr = [];
    let comp = 0;

    return new Promise((res,rej) => {
        for(let i =0; i<functions.length; i++){
            functions[i]()
                .then((val) => {
                    arr[i] = val;
                    comp++;

                    if(comp === functions.length){
                        res(arr);
                    }
                })
                .catch((err) => rej(err));
        }
    });
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */