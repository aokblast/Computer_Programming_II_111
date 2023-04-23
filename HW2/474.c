#include <stdio.h>

int res = 0, n;

void dfs(int k, int sum, int cur) {
	if(k == 0) {
		res += sum == n;
		return;
	}

	for(int i = cur; i <= n; ++i) {
		if(sum + i > n)
			break;
		dfs(k - 1, sum + i, i);
	}

}

int main() {
	int k;

	scanf(" %d %d", &n, &k);
	dfs(k, 0, 0);
	printf("%d\n", res);
}
