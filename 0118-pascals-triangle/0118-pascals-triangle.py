class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        if numRows == 0:
            return result

        first_row = [1]
        ans.append(first_row)

        for i in range(1, numRows):
            prev_row = ans[i - 1]
            current_row = [1]

            for j in range(1, i):
                current_row.append(prev_row[j - 1] + prev_row[j])

            current_row.append(1)
            ans.append(current_row)

        return ans
        