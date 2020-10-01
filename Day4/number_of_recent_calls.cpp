class RecentCounter {
public:
    vector <long long int> timestamp;
    
    RecentCounter() {        
        timestamp.clear();        
    }
    
    int ping(int t) {
        long long int ans=0;
        timestamp.push_back(t);
        long long int lim1 = t-3000;
        if (t-3000<0)
            lim1=0;
        
        auto i1 = std::lower_bound(timestamp.begin(), timestamp.end(), lim1); 
        auto i2 = std::lower_bound(timestamp.begin(), timestamp.end(), t);
        
        long long int a1 = (i1-timestamp.begin());
        long long int a2 = (i2-timestamp.begin());
        
        ans = a2-a1 + 1;
        
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */