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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
        ListNode* temp=head;
        int nodes=1;
        while(temp->next) {
            nodes++;
            temp=temp->next;
        }
        temp->next=head;
        temp=head;
        k=k%nodes;
        for(int i=0;i<nodes-k-1;i++) {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};
