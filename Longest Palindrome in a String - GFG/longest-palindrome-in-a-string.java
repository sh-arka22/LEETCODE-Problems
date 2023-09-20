//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.longestPalin(S));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    static String longestPalin(String S){
        // code here
        int n = S.length();
        int si = 0;
        int len = 1;
        for(int i=0; i<n; i++){
            int l = i; int r = i;
            while(l>=0 && r<n && S.charAt(l) == S.charAt(r)){
                if(r-l+1 > len){
                    len = r-l+1;
                    si = l;
                }
                l--;
                r++;
            }
            l = i; r = i+1;
            while(l>=0 && r<n && S.charAt(l) == S.charAt(r)){
                if(r-l+1 > len){
                    len = r-l+1;
                    si = l;
                }
                l--;
                r++;
            }
        }
        int ei = si+len;
        return S.substring(si, ei);
    }
}