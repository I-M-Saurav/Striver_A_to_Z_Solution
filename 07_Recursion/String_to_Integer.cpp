class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int maxi = INT_MAX, mini = INT_MIN;
        int index = 0;
        while(index < n && s[index] == ' ') index++;
        if(index == n) return 0;
        bool sign = true;
        if(s[index] == '-') { sign = false; index++;}
        else if(s[index] == '+'){
            index++;
        }
        else if(!(s[index] >= '0' && s[index] <= '9')){
            return 0;
        }
        while(index < n && (s[index] == '0')) index++;
        if(index == n) return 0;
        if(!(s[index] > '0' && s[index] <='9')) return 0;
        string t;
        while(index < n && (s[index] >= '0' && s[index] <= '9')) {
            t.push_back(s[index]); index++;
        }
        if(t.length() > 10){
            if(sign) return maxi;
            return mini;
        }
        long long val = stoll(t);
        if(!sign) val *= -1;
        if(val >= mini && val <=maxi) {
            return val;
        }
        if(val < mini) return mini;
        return maxi;


    }
};
