class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) return "0";
        string res;
        if((numerator < 0)^(denominator < 0)) res +='-';
        long long num=abs((long long)numerator);
        long long den=abs((long long)denominator);
        long long q = num / den;
        long long r = num % den;
        res += to_string(q);
        if(r == 0) return res;
        res += '.';
        unordered_map<long long, int> mp;
        string frac;
        for(int i = 0; r != 0; i++){
            if(mp.count(r)){
                frac.insert(mp[r], "(");
                frac += ")";
                break;
            }
            mp[r] = i;
            r *= 10;
            frac += ('0' + r / den);
            r %= den;
        }
        return res + frac;
    }
};