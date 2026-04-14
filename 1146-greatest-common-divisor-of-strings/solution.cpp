class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // if(str1[0]!=str2[0]) return "";
        // string res="";
        // int len=__gcd(str1.length(),str2.length());
        // for(int i=0;i<len;i++) res+=str1[i];
        // for(int i=0;i<str1.length();i+=len) if(str1.substr(i,len)!=res) return "";
        // for(int i=0;i<str2.length();i+=len) if(str2.substr(i,len)!=res) return "";
        // return res;

        if(str1+str2 == str2+str1) return str1.substr(0,__gcd(str1.length(),str2.length()));
        return "";
    }
};
