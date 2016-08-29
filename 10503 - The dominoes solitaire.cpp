#include <cstdio>

using namespace std;

int n, m, i1, i2, d1, d2, p[20], q[20];
bool used[20];

bool isPossible(int len, int num) {
    if(len == n) {
        if(num == d1) return true;
        return false;
    }
    for(int i = 0; i < m; i++) {
        if(used[i]) continue;
        if(p[i] == num || q[i] == num) {
            used[i] = true;
            bool ok;
            if(p[i] == num)
                ok = isPossible(len+1, q[i]);
            else
                ok = isPossible(len+1, p[i]);
            if(ok) return true;
            used[i] = false;
        }
    }
    return false;
}

int main() {
    while(scanf("%d", &n), n) {
        scanf("%d", &m);

        scanf("%d %d", &i1, &i2);
        scanf("%d %d", &d1, &d2);

        for(int i = 0; i < m; i++) {
            scanf("%d %d", &p[i], &q[i]);
            used[i] = false;
        }

        if(isPossible(0, i2))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
