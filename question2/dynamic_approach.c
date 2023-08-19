#include <stdio.h>

#define MAXN 1000 //maximun value of n

int dp[MAXN];

int dynamicFib(int n) {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
	dp[i] = dp[i - 1] + dp[i -2];
	}

	return dp[n];
}


//entry point to check the code working
int main() {
	int n = 8; //set ne to 8
	printf("F(%d) = %d\n", n, dynamicFib(n));
	return 0;
}
