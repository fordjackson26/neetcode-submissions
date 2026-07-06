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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == nullptr ){
            return list2;
        }
        if(list2 == nullptr ){
            return list1;
        }
        ListNode* head = nullptr;
        if(list2->val < list1->val){
                    head= list2;
                    list2 = list2-> next;
                }else {
                    head=list1;
    
                    list1 = list1-> next;
                }
        ListNode* curr = head;
        
        while (list1 != nullptr || list2 != nullptr){
            if (list1 == nullptr){
                curr->next = list2;
                curr = curr->next;
                list2 = list2-> next;
            }
            else if (list2 == nullptr){
                curr->next = list1;
                curr = curr->next;
                list1 = list1-> next;
            }
            else {
                if(list2->val < list1->val){
                    curr->next = list2;
                    curr = curr->next;
                    list2 = list2-> next;
                }else {
                    curr->next=list1;
                    curr = curr->next;
                    list1 = list1-> next;
                }
            }

        }
        return head;
        
    }
};
