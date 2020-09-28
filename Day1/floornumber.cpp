#include<bits/stdc++.h>

using namespace std;

vector<string> vec_splitter(string s) {
	s += ',';
	vector<string> res;
	while(!s.empty()) {
		res.push_back(s.substr(0, s.find(',')));
		s = s.substr(s.find(',') + 1);
	}
	return res;
}

void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}

#ifndef ONLINE_JUDGE
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#endif


#define ll                             long long int
#define endl                           '\n'
#define pb                             push_back
#define vectl                          vector<ll>
#define vecti                          vector<int>
#define debugh                         cout<<"here"<<endl;
#define loop(i,n)                      for(ll i=0;i<n;i++)
#define loop2(i,a,b)                   for(int i=a;i<b;i++)
#define pll                            pair<ll,ll>
#define pii                            pair<int,int>
#define mp                             make_pair
#define ip(a,n)                        for(ll i=0;i<n;i++)cin>>a[i]
#define op(a,n)                        for(ll i=0;i<n;i++)cout<<a[i]<<" "
#define gcd(a,b)                       __gcd((a),(b))
#define lcm(a,b)                       (((a)*(b))/gcd((a),(b)))
#define mem(x,n)                       memset(x,n,sizeof(x))
#define cn                             cout<<"\n";
#define fast                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define testcase                       ll t; cin>>t; while(t--)



const ll INF=1e18;
const ll N=1e5+5;
const ll MOD=1e9+7;

int main()
{
    fast
    testcase
    {
        ll n,x; cin>>n>>x;

        if (n<=2)
         cout<<1<<endl;
        else{
           n=n-2;
           ll p = ceil(float(n)/float(x));
           cout<<p+1<<endl;
        }
    }

    return 0;

}



