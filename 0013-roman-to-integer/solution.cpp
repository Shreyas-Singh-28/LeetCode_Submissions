class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        int n=s.length();
        for(int i=0;i<n;i++) {
            if(s[i]=='I') res+=1;
            else if(s[i]=='V') res+=5;
            else if(s[i]=='X') res+=10;
            else if(s[i]=='L') res+=50;
            else if(s[i]=='C') res+=100;
            else if(s[i]=='D') res+=500;
            else res+=1000;
        }
        for(int i=0;i<n-1;i++) {
            if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) res-=2;
            else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')) res-=20;
            else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')) res-=200;
        }
        return res; 
    }
};
