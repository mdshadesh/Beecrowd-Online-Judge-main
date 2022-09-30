#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int n,q;
    string text;
    while(cin >> n){
            vector<string>data;
        for(int i = 0; i < n ; i++){
            cin >> text;
            data.push_back(text);
        }
        cin >> q;
        while(q--){
            cin >> text;
            int ans = 0, len = 0;
            for(int i = 0; i < n ; i++){
                if(data[i].find(text) == 0){
                    ans++;
                    string word = data[i];
                    len = max(len,(int)word.size());
                }
            }
            if(ans == 0) cout <<  -1 << endl;
            else cout << ans << " " << len << endl;
        }
    }
    return 0;
}