
class Solution {
public:
    static bool comparator(string a, string b){
        int i = a.find(' ');
        int j = b.find(' ');
        
        if(!isdigit(a[i+1]) and !isdigit(b[j+1])){
            if(a.substr(i+1) == b.substr(j+1))
                return a<b;
            return a.substr(i+1) < b.substr(j+1);
        }
        else if(isdigit(a[i+1]) and !isdigit(b[j+1])){
            return false;
        }
        else if(!isdigit(a[i+1]) and isdigit(b[j+1])){
            return true;
        }
        // else if(isdigit(a[i+1]) and isdigit(b[j+1])){
        //     return true;
        // }
        
        return false;
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        stable_sort(logs.begin(), logs.end(), comparator);
        return logs;
    }
};