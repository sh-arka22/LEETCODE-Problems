class Solution {
private:
    inline std::string trim(std::string& str) {
    str.erase(str.find_last_not_of(' ')+1);         //suffixing spaces
    str.erase(0, str.find_first_not_of(' '));       //prefixing spaces
    return str;
}
    string belowTen[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string belowTwenty[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string belowHundred[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    string helper(int num){
        string res;
        if(num<10) res = belowTen[num];
        else if(num<20) res = belowTwenty[num-10];
        else if(num<100) res = belowHundred[num/10] + " " + helper(num%10);
        else if(num<1000) res = helper(num/100) + " Hundred " + helper(num%100);
        else if(num<1000000) res = helper(num/1000) + " Thousand " + helper(num%1000);
        else if(num<1000000000) res = helper(num/1000000) + " Million " + helper(num%1000000);
        else res = helper(num/1000000000) + " Billion " + helper(num % 1000000000);
        res = trim(res);
        return res;
    }
public:
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        return helper(num);
    }
};