#include <cstdio>

using namespace std;

int main() {
	int k;
	while(scanf("%d", &k), k) {
		int m,n;
		scanf("%d %d", &n, &m);
		while(k--) {
			int x, y;
			scanf("%d %d", &x, &y);
			if(x == n || y == m)
				printf("divisa\n");
			else if(x < n && y > m)
				printf("NO\n");
			else if(x > n && y > m)
				printf("NE\n");
			else if(x > n && y < m)
				printf("SE\n");
			else
				printf("SO\n");
		}
	}
}