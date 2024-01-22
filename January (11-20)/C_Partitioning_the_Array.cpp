#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
vector<int> getDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

bool check(vector<int> &arr, int x, int m)
{
    int n = arr.size();
    for (int i = x; i < n; i++)
    {
        if (arr[i % x] % m != arr[i] % m)
            return false;
    }
    return true;
}

int solve_code(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 1;
    vector<int> divisors = getDivisors(n);
    int points = 0;
    int maxe = *max_element(arr.begin(), arr.end()) + 1;

    for (auto x : divisors)
    {
        bool found = false;
        for (int m = 2; m <= maxe; m++)
        {
            if (check(arr, x, m))
            {
                found = true;
                break;
            }
        }
        if (found)
            points++;
    }
    return points;
}
void solve(){
    int n; cin>>n;
    vii arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<< solve_code(arr) <<endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}