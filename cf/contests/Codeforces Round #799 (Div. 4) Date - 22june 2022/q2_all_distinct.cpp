//-----Author - Tapas Mondal-------
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X, Y) for (int I = X; I < (int)(Y); I++)
#define ttc   \
    int t;    \
    cin >> t; \
    while (t--)
typedef vector<int> vi;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

// Code begins from here->
void printFrequency(vector<int> vec, int n)
{
    // Define an map
    map<int, int> M;
    vi b;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for (int i = 0; vec[i]; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
 
        // Else update the frequency
        else {
            M[vec[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    int sum=0;
    for (auto& it : M) {
        b.pb(it.second);
        sum+=it.second;
    }
    sum=sum-n;

 *max_element(b.begin(), b.end());
 while(sum){

int k =*max_element(b.begin(), b.end()) -1;

sum =sum-2*k;
b.pop_back(k+1);
 }

}
 
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    map<int, int> m;

    fl(0, n)
    {
        int temp;
        cin >> temp;
        v.pb(temp);

    }

    printFrequency(v,n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ttc
    {
        solve();
    }

    return 0;
}