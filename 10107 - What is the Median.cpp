#include <cstdio>
#include <algorithm>

using namespace std;

int a[10005];

int main() {
	int n, i = 0, p = 0;
	while(scanf("%d", &n) != EOF) {
		a[i] = n;
		if((i+1) % 2 == 0) {
			int x, y;
			nth_element(a, a+i/2, a+i+1);
			x = a[i/2];
			nth_element(a, a+i/2+1, a+i+1);
			y = a[i/2+1];
			printf("%d\n", (x+y) / 2);	
		} else {
			nth_element(a, a+i/2, a+i+1);
			printf("%d\n", a[i/2]);
		}
		i++;
	}
}
