#include<cstdio>
#include<vector>

using namespace std;

int n, ntr, bsum;
int tracks[30];
vector<int> bnums;

void combination(vector<int> nums, int sum, int len) {
	sum += tracks[len];
	nums.push_back(tracks[len]);
	if(sum > bsum || (sum == bsum && nums.size() > bnums.size())) {
		bsum = sum;
		bnums = nums;
	}
	for(int i = len + 1; i < ntr; i++) {
		if(sum + tracks[i] <= n)
			combination(nums, sum, i);	
	}
}

int main() {
	while(scanf("%d %d", &n, &ntr) == 2) {
		for(int i = 0; i < ntr; i++) 
			scanf("%d", &tracks[i]);
		bsum = 0;
		for(int i = 0; i < ntr; i++) {
			vector<int> nums;
			combination(nums, 0, i);
		}
		for(int i = 0; i < bnums.size(); i++)
			printf("%d ", bnums[i]);
		printf("sum:%d\n", bsum);		
	}
}
