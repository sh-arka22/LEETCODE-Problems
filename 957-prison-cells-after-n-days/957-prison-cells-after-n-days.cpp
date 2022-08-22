class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int>cell(8,0);
        vector<vector<int>>seen;
        for(int i=0;i<=64;i++){
            for(int i = 1; i <= 6; i++){
                cell[i] = cells[i-1] == cells[i+1];
            }
            if(seen.size() and cell == seen[0]) return (seen[(n-1)%seen.size()]);
            else{
                seen.push_back(cell);
            }
            cells = cell;
        }
        return cell;
    }
};