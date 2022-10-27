class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()==0){
            return res;
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long target_2=(long long)target-(long long)nums[j]-(long long)nums[i];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum<target_2){
                        front++;
                    }
                    else if(two_sum>target_2){
                        back--;
                    }
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        res.push_back(quad);
                        
                        while(front<back && nums[front]==quad[2]){
                            ++front;
                        }
                        while(front<back && nums[back]==quad[3]){
                            --back;
                        }
                    }
                }
                int a = j+1;
                while(a<n and nums[j]==nums[a]) a++;
                j=--a;
            }
            int b = i+1;
            while(b<n && nums[i]==nums[b]) b++;
            i=--b;
        }
        return res;
    }
};