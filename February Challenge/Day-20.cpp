class Solution {
public:
    int romanToInt(string s) {
             int sum = check(s);
        int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
        
        if(s == "") return sum;
        cout << s;
        for(auto ch : s){
            if(ch == 'I') sum += I;
            if(ch == 'V') sum += V;
            if(ch == 'X') sum += X;
            if(ch == 'L') sum += L;
            if(ch == 'C') sum += C;
            if(ch == 'D') sum += D;
            if(ch == 'M') sum += M;
        }
        
        return sum;
    }
    
    int check(string& s){
        int sum = 0;
        if(s.find("IV") != string::npos){
            int pos = s.find("IV");
            sum += 4;
            s.erase(pos, 2);
        }
        if(s.find("IX") != string::npos){
            int pos = s.find("IX");
            sum += 9;
            s.erase(pos, 2);
        }
        if(s.find("XL") != string::npos){
            int pos = s.find("XL");
            sum += 40;
            s.erase(pos, 2);
        }
        if(s.find("XC") != string::npos){
            int pos = s.find("XC");
            sum += 90;
            s.erase(pos, 2);
        }
        if(s.find("CD") != string::npos){
            int pos = s.find("CD");
            sum += 400;
            s.erase(pos, 2);
        }
        if(s.find("CM") != string::npos){
            int pos = s.find("CM");
            sum += 900;
            s.erase(pos, 2);
        }
        
        return sum;
    }
};
