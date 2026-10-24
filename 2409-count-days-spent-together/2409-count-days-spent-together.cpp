class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto today = [&](const string& s){
            int meet = (s[0] - '0') * 10 + (s[1] - '0');
            int d = (s[3] - '0') * 10 + (s[4] - '0');
            int ans = d;
            for(int i = 0; i < meet - 1; i++)
                ans += days[i];
                return ans;
        };
        int aStart = today(arriveAlice), aEnd = today(leaveAlice);
        int bStart = today(arriveBob), bEnd = today(leaveBob);
        int start = max(aStart, bStart);
        int end = min(aEnd, bEnd);
        return start <= end ? end - start + 1 : 0;
    }
};