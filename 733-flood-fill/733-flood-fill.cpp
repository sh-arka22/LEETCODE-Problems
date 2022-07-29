class Solution {
public:
    int dir[4][2] = {{0,1},{0,-1}, {1,0}, {-1,0}};
    void dfs(vector<vector<int>>& image, int i, int j,int val, int newColor){
        image[i][j] = newColor;
        for(auto &[dr,dc]:dir){
            if(i+dr<0 or i+dr==image.size() or j+dc<0 or j+dc>image[0].size() or image[i+dr][j+dc] != val or image[i+dr][j+dc] == newColor)
                continue;
            dfs(image,i+dr,j+dc,val,newColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int val = image[sr][sc];
        dfs(image,sr,sc,val,newColor);
        return image;
    }
};