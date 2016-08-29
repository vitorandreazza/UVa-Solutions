#include <cstdio>
#include <bitset>

using namespace std;

int main() {
	int n, m;
	bitset<1000001> calendar;
	while(scanf("%d %d", &n, &m), (n || m)) {
		int start, end, interval;
		bool conflict = false;
		calendar.reset();
		while(n--) {
			scanf("%d %d", &start, &end);			
			for(int i = start; i < end && !conflict; i++) {
				if(calendar.test(i)) 
					conflict = true;
				calendar.set(i);
			}
		}
		while(m--) {
			scanf("%d %d %d", &start, &end, &interval);
			while(!conflict && start < 1000000) {
				for(int i = start; i < end && !conflict; i++) {
					if(calendar.test(i)) 
						conflict = true;
					calendar.set(i);
				}
				start += interval;
				end += interval;	
				if(end > 1000000)
					end = 1000000;
			}
		}
		if(conflict)
			printf("CONFLICT\n");
		else
			printf("NO CONFLICT\n");
	}
}
