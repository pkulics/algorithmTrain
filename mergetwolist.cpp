truct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* mergeHead;
        if(pHead1 == nullptr)
            return pHead2;
        if(pHead2 == nullptr)
            return pHead1;
        if(pHead1->val < pHead2->val){
            mergeHead = pHead1;
            mergeHead->next = Merge(pHead1->next,pHead2);
        }
        else{
            mergeHead = pHead2;
            mergeHead->next = Merge(pHead1,pHead2->next);
        }
        return mergeHead;
    }
};
