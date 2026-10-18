class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        helper = ListNode(0)
        helper.next = head
        first = helper
        second = helper
        for _ in range(n + 1):
            if first is not None:
                first = first.next
        while first is not None:
            first = first.next
            second = second.next
        second.next = second.next.next
        return helper.next