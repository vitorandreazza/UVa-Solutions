#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int t, n;
int nums[15];
set<vector<int> > ans;

void backtracking(vector<int> vec, int sum, int len) {
    if(sum == t) {
        ans.insert(vec);
        return;
    }
    for(int i = len; i < n; i++) {
        if(sum+nums[i] <= t) {
            vec.push_back(nums[i]);
            backtracking(vec, sum+nums[i], i+1);
            vec.pop_back();
        }
    }
}

int main() {
    while(scanf("%d %d", &t, &n), (t || n)) {
        ans.clear();
        for(int i = 0; i < n; i++)
            scanf(" %d", &nums[i]);
            
        vector<int> vec;
        backtracking(vec, 0, 0);
        
        printf("Sums of %d:\n", t);
        
        if(ans.empty())
            printf("NONE\n");
        for(set<vector<int> >::reverse_iterator i = ans.rbegin(); i != ans.rend(); i++) {
           for (vector<int>::const_iterator j = (*i).begin(); j != (*i).end(); j++) {
               if(j != (*i).begin())
                    printf("+");
               printf("%d", *j);
           }
           printf("\n");
        }
    }
}
