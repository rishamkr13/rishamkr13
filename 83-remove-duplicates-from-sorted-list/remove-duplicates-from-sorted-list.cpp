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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* s = head;
        while(s!=NULL && s->next!=NULL){
            ListNode* nextNode = s->next;
            if(s->val == nextNode->val){
                s->next = nextNode->next;
            }else{
                s=s->next;
            }
            

        }
        return head;
    }
};