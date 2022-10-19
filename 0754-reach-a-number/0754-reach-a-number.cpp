class Solution {
public:
    int reachNumber(int target) {
        int tar = abs(target);
        int sum = 0;
        int steps = 0;
        while(sum<tar){
            steps++;
            sum+=steps;
        }
        if((sum-tar) % 2 == 0) return steps;
        
        while((sum-tar) % 2 != 0){
            steps++;
            sum+=steps;
        }
        return steps;
    }
};