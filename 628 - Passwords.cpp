#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string dic[105], rules[1005];
int n,m;

void backtracking(string rule, int len, string ans) {
    if(len == rule.size()) {
        cout<<ans<<endl;
        return;
    }
    if(rule[len] == '0') {
        for(char num = '0'; num <= '9'; num++)
            backtracking(rule, len+1, ans+num);
    } else {
        for(int i = 0; i < n; i++)
            backtracking(rule, len+1, ans+dic[i]);
    }
}

int main() {
    while(cin>>n) {
        for(int i = 0; i < n; i++)
            cin>>dic[i];
        cin>>m;
        for(int i = 0; i < m; i++)
            cin>>rules[i];
        cout<<"--"<<endl;
        for(int i = 0; i < m; i++)
            backtracking(rules[i], 0, "");
    }
}
