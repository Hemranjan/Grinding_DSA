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

class Compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        // Create Min Heap
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;

        // Insert head of every linked list
        for(int i = 0; i < lists.size(); i++) {
            if(lists[i] != NULL) {
                minHeap.push(lists[i]);
            }
        }

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while(!minHeap.empty()) {

            // Smallest node
            ListNode* curr = minHeap.top();
            minHeap.pop();

            // Push next node of the same linked list
            if(curr->next != NULL) {
                minHeap.push(curr->next);
            }

            // First node
            if(head == NULL) {
                head = curr;
                tail = curr;
            }
            else {
                tail->next = curr;
                tail = curr;
            }
        }

        // Terminate the merged list
        if(tail != NULL) {
            tail->next = NULL;
        }

        return head;
    }
};