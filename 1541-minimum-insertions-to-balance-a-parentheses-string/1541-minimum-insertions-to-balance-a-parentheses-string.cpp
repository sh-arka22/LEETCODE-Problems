class Solution {
public:

    int minInsertions(string s) {
        //Let open be the number of open brackets in the stack which did not get equivalent close brackets to balance.
        // openneeded be the number of ( needed (Found when stack was empty)
        // closeneeded be the number of ) needed 
        int open = 0; 
        int openneeded = 0;
        int closeneeded = 0;
        
        for(int i = 0; i<s.size(); i++){
            
            //For open brackets
            if(s[i]=='(')
                open++;
            
            //For close brackets
            else if(s[i]==')') {
                
                //If next char is also a ')' , check if an open bracket was encountered before and has not yet been balanced or not. If yes, decrement the number of open brackets. 
                if(  i<s.length()-1 && s[i+1]==')'){
                    if(open==0) openneeded++;
                    else open--;
                    i++;
                }
                // If next char is a (
                else{
                    if(open==0){
                        openneeded++;
                        closeneeded++;
                    }
                    else {
                        open--;
                        closeneeded++;
                    }
                }
            }
        }
        
        int total = 2*open + openneeded + closeneeded;
        return total; 
		}
};