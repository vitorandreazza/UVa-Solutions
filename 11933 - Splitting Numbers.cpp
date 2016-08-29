#include <cstdio>

using namespace std;

int main() {
	unsigned int n;
	while(scanf("%u", &n), n) {
		unsigned int a = n, b = n, temp = n, j = 0;
		bool addToA = false;
		while(temp) {
			int t = n & (1 << j);
			if(t != 0) {
				if(addToA)
					a &= ~(1 << j);
				else
					b &= ~(1 << j);
				addToA = !addToA;
			}
			temp >>= 1;
			j++;
		}
		printf("%u %u\n", a, b);
	}
}
