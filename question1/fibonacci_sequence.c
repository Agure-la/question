#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
	ADD,
	MUL,
	SUB,
} TypeTag;

typedef struct Node {
	TypeTag type;
	int arg1;
	int arg2;
} Node;

int fib(int n) {
	int fib_nums[n + 1];
	fib_nums[0] = 0;
	fib_nums[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib_nums[i] = fib_nums[i -1] + fib_nums[i -2];
	}
	return fib_nums[n];
}

Node* makeFunc(TypeTag type) {
    Node* func = malloc(sizeof(Node));
    func->type = type;
    return func;
}

int calc(Node* node) {
    if (node->type == ADD) {
        return node->arg1 + node->arg2;
    } else if (node->type == MUL) {
        return node->arg1 * node->arg2;
    } else if (node->type == SUB) {
        return node->arg1 - node->arg2;
    }
}

int main() {
    Node *add = makeFunc(ADD);
    add->arg1 = 10;
    add->arg2 = 6;

    Node *mul = makeFunc(MUL);
    mul->arg1 = 5;
    mul->arg2 = 4;

    Node *sub = makeFunc(SUB);
    sub->arg1 = calc(mul);
    sub->arg2 = calc(add);

    Node *fibo = makeFunc(SUB);
    fibo->arg1 = calc(sub);

    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo : %d\n", fib(fibo->arg1));

    return 0;
}
