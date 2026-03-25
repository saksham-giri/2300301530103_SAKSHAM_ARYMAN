//876. Middle of the Linked List

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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp != nullptr){
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;
        int i=0;
        while(i!=count){
            temp=temp->next;
            i++;
        }
        return temp;
    }
};