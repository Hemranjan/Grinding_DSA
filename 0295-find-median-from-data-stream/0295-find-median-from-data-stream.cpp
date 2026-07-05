// class MedianFinder {
// public:
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
        
//     }
    
//     double findMedian() {
        
//     }
// };

class MedianFinder {
public:
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;

    MedianFinder() {

    }

    void addNum(int num) {

        // Step 1: Insert into appropriate heap
        if (maxi.empty() || num <= maxi.top()) {
            maxi.push(num);
        }
        else {
            mini.push(num);
        }

        // Step 2: Balance the heaps

        // Max heap should have at most one extra element
        if (maxi.size() > mini.size() + 1) {
            mini.push(maxi.top());
            maxi.pop();
        }

        // If min heap becomes larger
        else if (mini.size() > maxi.size()) {
            maxi.push(mini.top());
            mini.pop();
        }
    }

    double findMedian() {

        if (maxi.size() == mini.size()) {
            return (maxi.top() + mini.top()) / 2.0;
        }

        return maxi.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */