class Trie {
public:    
    Trie* ch[128] = {};
    bool end = false;
};
class Solution {
private:
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void found(vector<vector<char>>& board, Trie* root, int i, int j, string res, vector<string>&ans){
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j] == ' ') return;
        char c = board[i][j];
        if(root->ch[c] == NULL) return;
        res += c; //current string
        root = root->ch[c];
        if(root->end) ans.push_back(res);
        root->end = false;
        board[i][j] = ' ';
        for(auto &[dr,dc]:dir){
          found(board, root, i+dr, j+dc, res, ans);
        }
        board[i][j] = c;
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie trie;

        //insertion into trie
        for(string &word:words){
            Trie *t = &trie;
            for(char c:word){
                if(!t->ch[c])
                    t->ch[c] = new Trie();
                t=t->ch[c];
            }
            t->end = true;
        }
        vector<string>ans;
        Trie *root = &trie;
        for(int i=0;i<size(board);i++){
            for(int j=0;j<size(board[0]);j++){
                found(board, root, i, j, "", ans);
            }
        }
        return ans;
    }
};