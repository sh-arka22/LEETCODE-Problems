class Solution {
public:
    bool isOK(vector<int> &dist, double hour, int guessSpeed){
        double reqHours=0.0;
        int n=dist.size();
        for(int i=0;i<n-1;i++){
            reqHours+=ceil((double)dist[i]/guessSpeed);
        }
        reqHours+=(double)dist[n-1]/guessSpeed;
        if(reqHours>hour){
            return false;
        }
        return true;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int speed=-1;
        long long int low=1;
        long long int high=INT_MAX;
        while(low<=high){
            long long int mid=(low+high)/2;
            if(isOK(dist,hour,mid)==true){
                speed=mid;
                high=mid-1;
            }
            else{
                low=mid+1;  
            }
        }
        return speed;
    }
};