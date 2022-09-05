class Solution {
public:
    string pushDominoes(string domino) {
        int n = domino.size();
        queue<pair<int,char>>que;
        
        for(int i=0;i<n;i++){
            if(domino[i] != '.')
                que.push({i,domino[i]});
        }
        
        while(que.size()){
            // int sz = que.size();
            // while(sz--){
                auto [idx, ch] = que.front();
                que.pop();
                
                if(ch == 'L'){
                    if(idx > 0 and domino[idx-1] == '.'){
                        domino[idx-1] = 'L';
                        que.push({idx-1,'L'});
                    }
                }
                else if(ch == 'R'){
                    if(idx+1<n and domino[idx+1] == '.'){
                        if(idx+2<n and domino[idx+2] == 'L')
                            que.pop();
                        else{
                            domino[idx+1] = 'R';
                            que.push({idx+1,'R'});
                        }
                    }
                }
            //
        }
        return domino;
    }
};