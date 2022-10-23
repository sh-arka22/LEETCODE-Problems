class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> m;
    int maxfreq = 0;
    FreqStack() {}
    
    void push(int val);
    
    int pop();
};
void FreqStack :: push(int x) {
    maxfreq = max(maxfreq, ++freq[x]);
    m[freq[x]].push(x);
}

int FreqStack :: pop() {
    int x = m[maxfreq].top();
    m[maxfreq].pop();
    if (!m[freq[x]--].size()) maxfreq--;
    return x;
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */