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
    bool isPalindrome(ListNode* head) {
        vector<int> list;
        ListNode* temp=head;
        while(temp) {
            list.push_back(temp->val);
            temp=temp->next;
        }
        int n=static_cast<int>(list.size());
        int l=0,r=n-1;
        while(l<r) {
            if(list[l]!=list[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
