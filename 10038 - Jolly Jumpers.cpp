#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

bool flag[3010];

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		memset(flag, false, sizeof(flag));
		flag[0] = true;
		int a, b;
		scanf("%d", &a);
		bool nj = true;
		for(int i = 1; i < n; i++) {
			scanf("%d", &b);
			int j = abs(a - b);
			if(flag[j]) {
				nj = false;	
			} else if(j > n-1 || j <= 0){
				nj = false;	
			} 
			flag[j] = true;		
			a = b;				
		}
		
		if(nj)
			printf("Jolly\n");	
		else
			printf("Not jolly\n");
	}
}
