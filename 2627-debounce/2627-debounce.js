/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
        let time = Date.now();
        let totalTime = time + t;
        let isCalled = false;
        let id = null;
    return function(...args) {
        if(isCalled){
            if(time < totalTime){
                clearTimeout(id);
            }
        }
        id = setTimeout(() => fn(...args),t);
        isCalled = true;

    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */