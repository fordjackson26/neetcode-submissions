/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> nodemap;
        auto curr = head;

        while(curr!=NULL){
            auto copy= new Node(curr->val);
            nodemap[curr] = copy;
            curr = curr->next;
        }
        curr = head;
        while(curr!=NULL){
            auto copy = nodemap[curr];
            copy->random = nodemap[curr->random];
            copy->next = nodemap[curr->next];
            curr = curr->next;
        }

        return nodemap[head];


    }
};
