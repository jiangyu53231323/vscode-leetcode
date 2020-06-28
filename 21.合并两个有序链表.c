/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (!l1)
		return l2;
	if (!l2)
		return l1;
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = head;
    while (l1 && l2)
    {
        if (l1->val <= l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }else
        {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    if (l1)
    {
        p->next = l1;
    }
    else if (l2)
    {
        p->next = l2;
    }
    return head->next;
}


// @lc code=end

