class Solution:
    def recoverTree(self, root: TreeNode | None) -> None:
        first = last = prev = None
        def inorder(root):
            nonlocal first, last, prev
            if not root:
                return
            inorder(root.left)
            if prev is not None and root.val < prev.val:
                if first is None:
                    first = prev
                    last = root
                else:
                    last = root
            prev = root
            inorder(root.right)
        inorder(root)
        first.val, last.val = last.val, first.val