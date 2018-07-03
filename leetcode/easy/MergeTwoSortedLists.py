# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if l1 == None:
            return l2
        if l2 == None:
            return l1

        newlist = ListNode(0)
        head = newlist

        while l1 and l2:
            if l1.val>l2.val:
                newlist.next = l2
                l2 = l2.next
            else:
                newlist.next = l1
                l1 = l1.next
            newlist = newlist.next

        if l1 == None:
            newlist.next = l2
        if l2 == None:
            newlist.next = l1

        return head.next
                
                    
