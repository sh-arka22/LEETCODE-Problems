struct cmp{
    public:
        bool operator()(const int &el1,const int &el2){
            if(el1<=el2) return true; // IN PRIORITU=Y QUEUE ORDERING IS ULTA
            return false;
        }
};


class Solution {  
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int,vector<int>,cmp> pq;
        long sum = 0;
        for(int el:target){
            pq.push(el);
            sum+=(long)el;
        }
        while(pq.top()!=1){
            int first = pq.top();
            pq.pop();
            sum = sum - first;
            if(sum<=0 || sum>=first) return false;
            
            first = first%sum;
            sum+=first;
            pq.push(first>0?first:sum);
        }
        return true;
    }
};