#include "ht.h"
#include "node.h"
#include "salts.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//NOTE: NEEDS TO BE COMPILED WITH NODE.C 
int main(void) {
	printf("*************************************************\n");
	HashTable *ht = ht_create(100);
	puts("CREATED HASH TABLE");

	printf("CURRENT TABLE SIZE: %u\n", ht_size(ht));
	Node *test = ht_lookup(ht, "test");
	if(test == NULL) {
		puts("TEST NODE IS NULL");
	}

	ht_insert(ht, "lol");

	ht_lookup(ht, "lol");

	printf("\nCURRENT HASH TABLE");
	ht_print(ht);

	ht_insert(ht, "pog");
	printf("\nCURRENT HASH TABLE");
	ht_print(ht);

	printf("\nHT_LOOKUP");
	ht_lookup(ht, "pog"); 
	//node_print(b);

	ht_insert(ht, "pog");
	printf("\nCURRENT HASH TABLE");
	ht_print(ht);

	ht_insert(ht, "pepe");
	printf("\nCURRENT HASH TABLE");
	ht_print(ht);

	ht_delete(&ht);

	 HashTable *ht1 = ht_create(4);
	 printf("CURRENT TABLE SIZE: %u\n", ht_size(ht1));

	 ht_insert(ht1 , "hello");
	 ht_insert(ht1 , "world");
	 ht_print(ht1);
	 HashTableIterator *hti = hti_create(ht1);
	 Node *n = NULL;
	 while ((n = ht_iter(hti)) != NULL) {
		 printf("%s\n", n->word);
	 }
	 puts("BEFORE ITERATOR DELETE");
	 hti_delete (&hti);
	 puts("BEFORE HASH DELETE");
	 ht_delete (&ht1);
	 //printf("*************************************************\n");

}

