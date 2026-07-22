class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=static_cast<int>(operations.size());
        for(string &s:operations) {
            if(s[0]=='C') {
                st.pop();
            }
            else if(s[0]=='D') {
                st.push(st.top()*2);
            }
            else if(s[0]=='+') {
                int ele2=st.top();
                st.pop();
                int ele1=st.top();
                // st.pop()
                st.push(ele2);
                st.push(ele1+ele2);
            }
            else{
                int num=stoi(s);
                st.push(num);
            }
        }
        int res=0;
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
