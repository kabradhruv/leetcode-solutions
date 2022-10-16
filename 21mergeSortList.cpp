#include <iostream>
#include <cstdlib>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode* p1=list1;
        ListNode* p2=list2;
        ListNode* dummyNode=new ListNode(-1);
        ListNode* p3=dummyNode;

        if (p1==NULL)
        {
            return p2;
        }

        if (p2==NULL)
        {
            return p1;
        }
        
        while (p1!=nullptr && p2!=nullptr)
        {
            if (p1->val<p2->val)
            {
                p3->next=p1;
                p1=p1->next;
            }
            else
            {
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }

        while (p1!=nullptr)
        {
            p3->next=p1;
            p1=p1->next;
            p3=p3->next; 
        }

        while (p2!=nullptr)
        {
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        
        return dummyNode->next;
        

    }
};


int main()
{
    return 0;
}