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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        vector<int> nums;
        while(temp) {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int start=0,end=static_cast<int>(nums.size())-1;
        int res=INT_MIN;
        while(start<end) {
            res=max(res,nums[start]+nums[end]);
            start++;
            end--;
        }
        return res;
    }
};
