#include <stdio.h>

#define MAXN 1000 //maximun value of n

int memo[MAXN] = {-1};

int memoizationFib(int n) {
	if (memo[n] != -1) return memo[n];
	if (n == 0) return memo[n] = 0;
	if (n == 1) return memo[n] = 1;
	if (n == 2) return memo[n] = 1;

	return memo[n] = memoizationFib(n - 1) + memoizationFib(n - 2); 
}


//main the entry point to check if the code is working correctly
int main() {
	int n = 8; //check if it will return fibonacci of 8 to be 21
	//initialize memoization array
	for (int i = 0; i < MAXN; i++) memo[i] = -1;
	printf("F(%d) = %d\n", n, memoizationFib(n));
	return 0;
}
