#include <stdio.h>

int recursiveFib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;
        //call the function
	return recursiveFib(n - 1) + recursiveFib(n - 2);
}

//main class the entry point to confirm the functioning
int main() {
	int n = 8;//set n to 8
	printf("F(%d) = %d\n", n, recursiveFib(n));
	return 0;
}
