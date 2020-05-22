#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = 0; i < n; i++)

void getSolve(int n){
    map <string, int> m;
    string s;
    for (int i=0 ; i<n ; i++){
        cin >> s;
        if (m.count(s) == 0){
            cout << "OK" << endl;
            m[s] = 1;
        }
        else {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    getSolve(n);
    return 0;
}