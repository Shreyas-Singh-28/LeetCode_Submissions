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
    ListNode* reverse_list(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* ahead;
        while(curr) {
            ahead=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ahead;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head) return nullptr;
        stack<int> st;
        ListNode* revHead = reverse_list(head);
        ListNode* temp = revHead;
        while(temp) {
            if(st.empty() || temp->val>=st.top()) st.push(temp->val);
            temp=temp->next;
        }
        ListNode* ans = nullptr;
        ListNode* tail = nullptr;
        while(!st.empty()) {
            ListNode* new_ele = new ListNode(st.top());
            st.pop();
            if(ans==nullptr) {
                ans=new_ele;
                tail=new_ele;
            }
            else {
                tail->next=new_ele;
                tail=tail->next;
            }
        }
        return ans;
    }
};