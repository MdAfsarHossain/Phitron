/**
https://leetcode.com/problems/linked-list-cycle/
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ListNode* slow = head;
    ListNode* fast = head;

    while(slow != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == NULL || fast == NULL)
            return false;
        if(slow == fast)
            return true;
    }

    return false;

    return 0;
}
