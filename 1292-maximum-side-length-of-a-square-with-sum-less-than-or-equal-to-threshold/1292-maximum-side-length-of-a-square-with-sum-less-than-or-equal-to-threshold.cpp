class Solution {
public:
    //To find the area of square using Prefix sum...
   int calArea(int x,int y,int wdh,vector<vector<int>> & preMat){
       int area=0;
       for(int i=0;i<wdh;i++){
           area+=preMat[x+wdh][y+i]-preMat[x][y+i];
       }
       return area;
   }

   int maxSideLength(vector<vector<int>>& mat, int thr) {
    int n=mat[0].size(), m=mat.size();
    vector<vector<int>> preMat(m+1,vector<int>(n,0));
    
    //Creating Prefix sum matrix...
    for(int i=0;i<n;i++){
        int preS=0;
        for(int j=0;j<m;j++){
            preS+=mat[j][i];
            preMat[j+1][i]=preS;
        }
    }
    int ans=0;
    
    //Appling 2 for's to check from each matrix position as staring position...  
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int l=1, r=min(m-i,n-j);
            while(l<=r){
                int w=l+(r-l)/2;
                int ar=calArea(i,j,w,preMat);
                if(ar>thr) r=w-1;
                else{
                    ans=max(ans,w); l=w+1;
                }
            }
        }
    }
    return ans;
}
};