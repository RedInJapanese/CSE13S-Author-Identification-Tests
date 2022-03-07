#include "node.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	Node *a = node_create("apple"); 
	Node *b = node_create("ball");
	Node *d = node_create("disco");


	printf("TEST\n"); 
	node_print(a);
	node_print(b);
	node_print(d);
	printf("\n:TEST: [PASSED]\n");

	Node *e = node_create("entropy");
	node_print(e);

	node_delete(&a);
	node_delete(&b);
	node_delete(&d);
	node_delete(&e);
}
