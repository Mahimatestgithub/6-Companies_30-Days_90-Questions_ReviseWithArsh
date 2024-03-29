class DataStream {
    
    deque<int> stream;
    int value , k;
    int size = 0, index = 0, sum = 0;
public:
    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
    }
    
    bool consec(int num) {
        
        
        num = num==this->value ? 1 : 0;
        sum+=num;
        stream.push_back(num);

        if(stream.size() < k) return false;
        
        if(stream.size() == k) return sum == k;
        
        int temp = stream.front();
        sum -= temp;
        stream.pop_front();
        
        return sum == k;
        
        
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */