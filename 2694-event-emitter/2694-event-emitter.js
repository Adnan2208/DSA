class EventEmitter {
    constructor() {
        this.event = {};
    }

    subscribe(eventName, callback) {
        if (!this.event[eventName]) {
            this.event[eventName] = [];
        }

        this.event[eventName].push(callback);

        return {
            unsubscribe: () => {
                this.event[eventName] = this.event[eventName].filter(
                    cb => cb !== callback
                );
            }
        };
    }

    emit(eventName, args = []) {
        if (!this.event[eventName]) return [];

        const results = [];

        for (const cb of this.event[eventName]) {
            results.push(cb(...args));
        }

        return results;
    }
}