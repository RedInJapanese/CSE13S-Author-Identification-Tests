#include <stdio.h>
#include "bf.h" 
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main(void) {
	BloomFilter *bf = bf_create(20); 
	puts("CREATED BLOOM FILTER");

	printf("SIZE OF THE BLOOM FILTER IS: %u\n", bf_size(bf));

	bf_insert(bf, "lol");
	//puts("SUCCESSFULLY INSERTED WORD INTO BLOOM FILTER"); 	
	bf_print(bf);

	bool test = bf_probe(bf, "lol"); 
	if(test == 1) {
		puts("SUCCESSFULLY INSERTED LOL INTO BLOOM FILTER"); 	
		puts("SUCCESFFULLY PROBED LOL");
	}

	bf_insert(bf, "test"); 
	bf_print(bf);
	test = bf_probe(bf, "pog"); 
	if(test == 1) {
		puts("SUCCESSFULLY INSERTED POG INTO BLOOM FILTER"); 	
		puts("SUCCESFFULLY PROBED POG");
	}
	bf_delete(&bf);
}
