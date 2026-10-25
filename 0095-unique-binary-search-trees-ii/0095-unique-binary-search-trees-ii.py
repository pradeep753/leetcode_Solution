class Solution:
    def generateTrees(self, n: int):
        def generate_trees(begin, end):
            if begin > end:
                return [None,] 
            all_trees = []
            for i in range(begin, end + 1):
                left_trees = generate_trees(begin, i - 1)
                right_trees = generate_trees(i + 1, end)
                for l in left_trees:
                    for r in right_trees:
                        current_tree = TreeNode(i)
                        current_tree.left = l
                        current_tree.right = r
                        all_trees.append(current_tree)
            return all_trees
        return generate_trees(1, n) if n else []