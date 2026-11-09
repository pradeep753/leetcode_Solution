class Solution {
    struct Job {
        int at;  
        int ser;
        auto operator<=>(const Job&) const = default;
    };
    template <class T> using MinHeap = priority_queue<T, vector<T>, greater<>>;

public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        vector<int> moves(k);
        iota(moves.begin(), moves.end(), 0);  
        MinHeap<int> free(greater<>{}, std::move(moves));  

        MinHeap<Job> busy;
        vector<int> handled(k);
        for (int i = 0; i < ssize(arrival); ++i) {
            while (!busy.empty() && busy.top().at <= arrival[i]) {  
                int x = busy.top().ser;
                busy.pop();
                free.push(i + (x - i % k + k) % k); 
            }
            if (free.empty()) continue;  
            int x = free.top() % k;
            free.pop();
            busy.push({arrival[i] + load[i], x});
            ++handled[x];
        }

        int most = ranges::max(handled);
        vector<int> res;
        for (int x = 0; x < k; ++x)
            if (handled[x] == most) res.push_back(x);
        return res;
    }
};