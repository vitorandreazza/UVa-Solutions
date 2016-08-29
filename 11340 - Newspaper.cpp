#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		int k, m;
		double pay, a[260];
		char l[10010];
		
		memset(a, 0.0, sizeof(a));
		
		scanf("%d", &k);
		while(k--) {
			char ch;
			double v;
			scanf(" %c %lf", &ch, &v);
			a[(int) ch] = v;
		}
		scanf("%d", &m);
		getchar();
		pay = 0;
		while(m--) {
			gets(l);
			int len = strlen(l);
			for(int i = 0; i < len; i++)
				pay += a[(int) l[i]];
		}
		pay /= 100.0;
		printf("%.2lf$\n", pay);
	}
}
