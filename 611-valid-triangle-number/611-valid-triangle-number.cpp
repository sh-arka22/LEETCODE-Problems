class Solution {
public:
	int triangleNumber(vector<int>& a) {
		sort(a.begin(),a.end());
		int n=a.size(),res=0;
		for(int i=n-1;i>0;i--){
			int r=i-1;
			int l=0;
			while(l<r){
				if(a[l]+a[r]>a[i]) {
					res+=r-l;
					r--;
				}
				else l++;
			}
		}
		return res;
	}
};