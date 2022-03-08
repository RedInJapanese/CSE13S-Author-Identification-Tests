#include <stdio.h>
#include "bv.h"


int main(void) {

	BitVector *bv = bv_create(5); 

	//puts("BIT VECTOR LENGTH"); 
	printf("BIT VECTOR LENGTH: %u\n", bv_length(bv));

	int test = bv_set_bit(bv, 0);
	if(test == 1) {
		printf("SUCCESSFULLY SET BIT AT 0\n");
	}

	test = bv_set_bit(bv, 1); 
	if(test == 1) {
		printf("SUCCESSFULLY SET BIT AT 1\n");
	}

	test = bv_set_bit(bv, 4); 
	if(test == 1) {
		printf("SUCCESSFULLY SET BIT AT 5\n");
	}

	test = bv_set_bit(bv, 40); 
	if(test != 1) {
		printf("SUCCESSFULLY PASSED BOUNDS CHECK\n");
	}
	bv_print(bv);

	test = bv_get_bit(bv, 3); 
	if(test == 0) {
		printf("GET BIT SUCCESSFUL\n"); 
	}

	test = bv_get_bit(bv, 4); 
	if(test == 1) {
		printf("GET LAST BIT SUCCESSFUL\n"); 
	}


	test = bv_clr_bit(bv, 0);
	if(test == 1) {
		printf("SUCCESSFULLY CLEARED A BIT\n");
	}

	bv_print(bv);
}

