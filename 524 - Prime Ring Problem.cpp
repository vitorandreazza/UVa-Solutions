#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

int n;
int circle[20];
bool used[20];

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

void backtracking(int len) {
    if(len == n-1) {
        if(isPrime(circle[len]+circle[0])) {
            for(int i = 0; i < n; i++) {
                if(i > 0)
                    printf(" ");
                printf("%d", circle[i]);
            }
            printf("\n");
        }
        return;
    }
    for(int i = 2; i <= n; i++) {
        if(used[i]) continue;
        if(isPrime(circle[len] + i)) {
            circle[len+1] = i;
            used[i] = true;
            backtracking(len+1);
            used[i] = false;
        }
    }
}

int main() {
    int tc = 1;
    while(scanf("%d", &n) != EOF) {
        if(tc > 1)
            printf("\n");
        printf("Case %d:\n", tc++);
        circle[0] = 1;
        backtracking(0);
    }
}
