#include <cstdio>

using namespace std;

int main() {
	int h, d;
	float u, f;
	while(scanf("%d %f %d %f", &h, &u, &d, &f), h) {
		float cd = 0;
		int day = 1;
		float ft = u * f/100;
		while(1) {
			cd += u;
			if(u > 0)
				u -= ft;
			if(cd > h) break;
			cd -= d;
			if(cd < 0) break;		
			day++;
		} 
		if(cd < 0) {
			printf("failure on day %d\n", day);
		} else {
			printf("success on day %d\n", day);
		}
	}	
}
