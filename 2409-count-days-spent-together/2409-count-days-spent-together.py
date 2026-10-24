class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        def today(s):
            meet = (ord(s[0]) - 48) * 10 + (ord(s[1]) - 48)
            day = (ord(s[3]) - 48) * 10 + (ord(s[4]) - 48)
            ans = day
            for i in range(meet - 1):
                ans += days[i]
            return ans
        aStart, aEnd = today(arriveAlice), today(leaveAlice)
        bStart, bEnd = today(arriveBob), today(leaveBob)
        start = max(aStart, bStart)
        end = min(aEnd, bEnd)
        return end - start + 1 if start <= end else 0