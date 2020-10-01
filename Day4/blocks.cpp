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
    //fast  
    ll n; cin>>n;
    string s;
    cin>>s;
   // cout<<s<<endl;
    ll cnt[2];
    cnt[0]=0;
    cnt[1]=0;
    
    loop(i,s.size()){
       // cout<<"hello";
        if (s[i]=='B')
        cnt[0]++;
        else
        cnt[1]++;
    }

    //cout<<cnt[0]<<" "<<cnt[1]<<endl;

        if ((cnt[0]%2==1&&cnt[1]%2==1)||(cnt[0]%2==1&&cnt[1]==0)||(cnt[0]==0&&cnt[1]%2==1)){
            
            if (cnt[0]==n||cnt[1]==n)
             cout<<0<<endl;
            
            else            
            cout<<-1<<endl;
        }  
        else{
            vectl ans;

            if (cnt[0]%2==0){
                //cout<<"here";
                ll i=1;
                while(1){
                    if (s[i]=='W'&&s[i-1]=='W'){
                        i+=2;
                    }
                    else if (s[i]=='W'&&s[i-1]=='B'){
                        s[i-1]='W';
                        s[i]='B';
                        ans.pb(i-1);
                        i++;
                    }

                    else if (s[i]=='B'&&s[i-1]=='W'){
                        i++;
                    }
                    else
                    {
                        s[i-1]='W';
                        s[i]='W';
                        ans.pb(i-1);
                        i+=2;
                    }

                    if (i>=s.size())
                     break;
                }

                cout<<ans.size()<<endl;
                for (auto i : ans)
                 cout<<i+1<<" ";
                 cout<<endl;
            }

            else{                
                ll i=1;
                while(1){
                    if (s[i]=='B'&&s[i-1]=='B'){
                        i+=2;
                    }
                    else if (s[i]=='B'&&s[i-1]=='W'){
                        s[i-1]='B';
                        s[i]='W';
                        ans.pb(i-1);
                        i++;
                    }

                    else if (s[i]=='W'&&s[i-1]=='B'){
                        i++;
                    }
                    else
                    {
                        s[i-1]='B';
                        s[i]='B';
                        ans.pb(i-1);
                        i+=2;
                    }

                    if (i>=s.size())
                     break;
                }

                cout<<ans.size()<<endl;
                for (auto i : ans)
                 cout<<i+1<<" ";
                 cout<<endl;

            }
        }

    

    return 0;

}



