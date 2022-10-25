class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(z == 0) return true;
        if(z > x+y) return false;
        int g = gcd(x, y);
        return z % g == 0;
    }
};