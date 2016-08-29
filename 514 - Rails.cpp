#include <cstdio>
#include <stack>

using namespace std;

int t[1005];
stack<int> station;

int main() {
	int n;
	while(scanf("%d", &n)) {
		if(n == 0) break;
		while(true) {
			scanf("%d", &t[0]);
			if(t[0] == 0) break;
			for(int i = 1; i < n; i++) scanf("%d", &t[i]);
			while(!station.empty()) station.pop();
			int j = 0;
			for(int i = 0; i < n; i++) {
				if(station.empty()) {
					j++;
					station.push(j); 
				}
				
				while(j <= n && station.top() != t[i]) {
					j++;
					station.push(j);				
				}
				if(station.top() == t[i]) station.pop();
			}
			if(station.empty())
				printf("Yes\n");
			else
				printf("No\n");	
		}
		printf("\n");
	}
}
