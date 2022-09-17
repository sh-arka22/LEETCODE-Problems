class Solution {
public:
    int blackBox(vector<int>& v,int div){
	int sum=0;
	for(int it:v) {
		sum += (it/div);
		if(it%div != 0) sum+=1;
	}
	return sum;
}

int smallestDivisor(vector<int>& v, int threshold) {
    int si = 1;
    int ei = *(max_element(v.begin(),v.end()));
    int ans = ei;
    while(si<=ei){
    	int mid = ((si+ei)>>1);
    	if(blackBox(v,mid) <= threshold){
    		ans = mid;
    		ei = mid-1;
    	}
    	else si = mid+1;
    }
    return ans;
}
};