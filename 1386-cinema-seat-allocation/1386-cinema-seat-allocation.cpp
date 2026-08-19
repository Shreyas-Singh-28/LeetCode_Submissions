class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& seats) {
        long long res=0;
        sort(seats.begin(),seats.end());
        long long last=0;
        int len=static_cast<int>(seats.size());
        for(int i=0;i<len;) {
            if(last!=seats[i][0]) {
                res+=(seats[i][0]-last-1)*2;
                last=seats[i][0];
            }
            int a=1,b=1,c=1;
            bool enter=0;
            while(i<len && seats[i][0]==last) {
                if(!enter) enter=1;
                int seat=seats[i][1];
                if(seat==2 || seat==3) a=0;
                else if(seat==4 || seat==5) {
                    a=0;b=0;
                }
                else if(seat==6 || seat==7) {
                    b=0;c=0;
                }
                else if(seat==8 || seat==9) {
                    c=0;
                }
                i++;
            }
            // cout<<a<<' '<<b<<' '<<c<<'\n';
            if(a==1 && c==1) res+=2;
            else if(a==1 || b==1 || c==1) res+=1;
            // cout<<res<<' '<<i<<'\n';
        }
        // cout<<last<<'\n';
        res+=(n-last)*2;
        return res;
    }
};