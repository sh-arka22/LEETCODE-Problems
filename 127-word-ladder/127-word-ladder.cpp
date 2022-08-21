class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string> PendingNodes;
        PendingNodes.push(beginWord);
        int level = 0;
        unordered_set<string> GivenWords;
        for(auto x : wordList){
            GivenWords.insert(x);
        }
        
        while(!PendingNodes.empty()){
            int size = PendingNodes.size();
            while(size-->0){
                string front = PendingNodes.front();
                if(front == endWord){
                    return level+1;
                }
                PendingNodes.pop();
                string temp = front;
                for(int i = 0 ; i < front.size() ; i++){
                    for(char j = 'a' ; j <= 'z' ; j++){
                        temp[i] = j;
                        if((temp != front) && (GivenWords.find(temp) != GivenWords.end())){
                            PendingNodes.push(temp);
                            GivenWords.erase(temp);
                        }
                    }
                    temp[i] = front[i];
                }
            }
            level++;
        }
        return 0;
    }
};