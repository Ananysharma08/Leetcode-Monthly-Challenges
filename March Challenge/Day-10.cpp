class Solution {
public:
    string intToRoman(int num) {
        int i = 0;
        string output = "";
        vector<string> roman = {"M","CM","D","CD","C","XC","L",
                                "XL","X","IX","V","IV","I"};
        vector<int> inte = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        while (num/inte[i] == 0) i ++;
        while (num != 0){
            if (num/inte[i] != 0) {
                for (int j = 0; j < num/inte[i]; j ++) output += roman[i];
                num = num % inte[i];
            }
            i++;
        }
        return output;
    }
};
