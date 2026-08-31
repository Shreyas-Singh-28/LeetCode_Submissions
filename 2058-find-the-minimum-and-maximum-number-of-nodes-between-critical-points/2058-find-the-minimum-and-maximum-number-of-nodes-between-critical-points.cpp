/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> critical_points;
        int i=1;
        ListNode* curr=head;
        ListNode* prev=head;
        curr=curr->next;
        while(curr->next && prev) {
            if((curr->val>curr->next->val && curr->val>prev->val) ||(curr->val<curr->next->val && curr->val<prev->val)) {
                critical_points.push_back(i);
            }
            i++;
            curr=curr->next;
            prev=prev->next;
        }
        int n=static_cast<int>(critical_points.size());
        if(n<2) return {-1,-1};
        int min_dist=INT_MAX;
        for(int i=0;i<n-1;i++) {
            min_dist=min(min_dist,critical_points[i+1]-critical_points[i]);
        }
        int max_dist=critical_points[n-1]-critical_points[0];
        return {min_dist,max_dist};
    }
};