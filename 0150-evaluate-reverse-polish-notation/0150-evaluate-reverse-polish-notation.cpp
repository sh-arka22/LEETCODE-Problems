class Solution {
private:
    using ll = long long;
    int Operator(string &s){
        if(s=="/" or s=="*" or s=="+" or s=="-") return 1;
        return 0;
    }
    ll calculate(string &s, ll first, ll second){
        if(s=="*"){
            return first*second;
        }
        if(s=="/"){
            return first/second;
        }
        if(s=="+"){
            return first+second;
        }
        return first-second;
    }
public:
    int evalRPN(vector<string>& tokens) {
        deque<ll>stack;
        int total = 0;
        for(auto s:tokens){
            if(stack.size()>1 and Operator(s)){
                int second = stack.back();
                stack.pop_back();
                int first = stack.back();
                stack.pop_back();
                stack.push_back(calculate(s, first, second));
            }
            else{
                stack.push_back(stoi(s));
            }
        }
        return stack.back();
    }
};