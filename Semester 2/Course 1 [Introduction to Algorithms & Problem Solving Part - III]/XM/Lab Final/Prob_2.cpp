//https://leetcode.com/problems/network-delay-time/description/

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> v(n+1, -1);
        unordered_map<int, vector<pair<int, int>>> mp;

        for(auto t: times)
        {
            mp[t[0]].push_back({t[1], t[2]});
        }

        int lng = 0;
        int cnt = 1;
        v[k] = 0;

        queue<int> q;
        q.push(k);

        while(!q.empty())
        {
            int src = q.front();
            q.pop();

            for(auto p: mp[src])
            {
                if(v[p.first] == -1 || v[p.first] > p.second + v[src])
                {
                    if(v[p.first] == -1)
                    {
                        cnt++;
                    }
                    v[p.first] = p.second + v[src];
                    q.push(p.first);
                }
            }
        }

        if(cnt != n)
        {
            return -1;
        }

        for(int i=1; i<v.size(); i++){
            lng = max(lng, v[i]);
        }

        return lng;
    }
};
