class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int p1=a.size()-1,p2=b.size()-1;
        int carry=0;
        while(p1>=0 ||p2>=0 || carry) {
            int x = p1>=0 ? a[p1]-'0' : 0;
            int y = p2>=0 ? b[p2]-'0' : 0;
            int sum=(x+y+carry)%2;
            res+=sum+'0';
            carry=(x+y+carry)/2;
            p1--;p2--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
