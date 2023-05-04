/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        vector<int>stack;
        for(int i=0;i<n;i++){
            stack.push_back(i);
        }

        while(stack.size()>=2){
            int a = stack.back();
            stack.pop_back();
            int b = stack.back();
            stack.pop_back();

            if(knows(a, b)){
                //a wnows b
                stack.push_back(b);
            }
            else{
                //a dont know b
                stack.push_back(a);
            }
        }

        int can = stack.back();
        for(int i=0;i<n;i++){
            if(i == can) continue;
            if(knows(can, i) or not knows(i, can)) return -1;
        }
        return can;
    }
};