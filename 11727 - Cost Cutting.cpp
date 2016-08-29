#include <cstdio>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {
	int t, c = 1;
	scanf("%d", &t);
	while(t--) {
		int a[3];
		for(int i = 0; i < 3; i++)
			scanf("%d", &a[i]);

		qsort(a, 3, sizeof(int), compare);
		printf("Case %d: %d\n", c++, a[1]);
	}
}