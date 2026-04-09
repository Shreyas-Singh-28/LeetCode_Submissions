class Solution {
public:
    bool judgeCircle(string s) {
        int nu=0,nl=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            switch(c){
                case 'U':
                    nu++;
                    break;
                case 'D':
                    nu--;
                    break;
                case 'L':
                    nl++;
                    break;
                case 'R':
                    nl--;
                    break;
            }
        }
        return nu==0 && nl==0;
    }
};
