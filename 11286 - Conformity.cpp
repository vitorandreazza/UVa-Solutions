#include <cstdio>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
		int tc;
		map<string, int> m;
		while(scanf("%d", &tc), tc) {
            m.clear();
			while(tc--) {
				int c[5];
				for(int i = 0; i < 5; i++) scanf("%d", &c[i]);
				sort(c, c+5);
				string k;
				for(int i = 0; i < 5; i++) k += to_string(c[i]);
				m[k] += 1;
			}
            int mostPopular = 0;
            int popularity = 0;
			for(map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
                if(it->second > mostPopular) {
                    popularity = it->second;
                    mostPopular = it->second;
                } else if(it->second == mostPopular)
                    popularity += it->second;
			}
			printf("%d\n", popularity);
		}
}
