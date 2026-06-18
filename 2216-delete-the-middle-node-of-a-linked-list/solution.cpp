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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        int curr_node=0;
        int total_nodes=0;
        ListNode* temp=head;
        while(temp) {
            total_nodes++;
            temp=temp->next;
        }
        int mid=total_nodes/2;
        temp=head;
        while(curr_node<mid-1 && temp) {
            temp=temp->next;
            curr_node++;
        }
        temp->next=temp->next->next;
        return head;
    }
};
