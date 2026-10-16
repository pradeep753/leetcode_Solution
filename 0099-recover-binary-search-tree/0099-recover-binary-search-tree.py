
class Solution:
    def recoverTree(self, root: TreeNode | None) -> None:
        first = last = prev = None
        stack = []
        curr = root

        while curr or stack:
            while curr:
                stack.append(curr)
                curr = curr.left

            curr = stack.pop()

            if prev and prev.val > curr.val:
                if first is None:
                    first = prev
                last = curr

            prev = curr
            curr = curr.right

        first.val, last.val = last.val, first.val
