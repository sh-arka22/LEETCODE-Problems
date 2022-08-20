class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        multiset<pair<int , char>> pq;

         if(a > 0)pq.insert({a , 'a'});
         if(b > 0)pq.insert({b , 'b'});
         if(c > 0)pq.insert({c , 'c'});

         string t;
         while(pq.size()>1){

             auto it = --pq.end();
             char mostfreq = it -> second;
             int freq      = it -> first;

             auto it2 = pq.begin();
             char nextfreq = it2 -> second;
             int freq2     = it2 -> first;

             pq.erase(it);
             pq.erase(it2);

             if(freq >= 2){
                 t += mostfreq;
                 t += mostfreq;
                 freq -= 2;
                 if(freq){
                      pq.insert({freq , mostfreq});
                 }
             }
             else if(freq == 1){
                  t += mostfreq;
             }

             if(freq2 > 1){
                 if(freq2 < freq){
                    t += nextfreq;
                    freq2 -= 1;
                 }else if(freq2 == freq){
                     t += nextfreq;
                     t += nextfreq;
                     freq2 -= 2;
                 }
                 if(freq2){
                      pq.insert({freq2 , nextfreq});
                 }
             }
             else if(freq2== 1){
                  t += nextfreq;
             }
         }

         if(pq.size()){
              auto it = pq.begin();             
              int freq = it -> first;
              char c = it -> second;

              pq.erase(it);

              if(freq > 1){
                  t += c;
                  t += c;
              }
              else if(freq == 1){
                 t += c;
              }
         }
         return t;
    }
};