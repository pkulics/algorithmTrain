truct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> out;
        std::stack<ListNode*> nodes;
        ListNode* Node = head;
        if(head == nullptr)
            return out;
        while(Node){
            nodes.push(Node);
            Node = Node->next;
        }
        while(!nodes.empty())
        {
            out.push_back(nodes.top()->val);
            nodes.pop();
        }
        return out;
    }
};
