#include "text.h"
#include "box.h"
#include <stdio.h> 

int main(void) {
	puts("test1");
	FILE *noisefile = fopen("noise.txt", "r"); 

	FILE *infile = fopen("texts/anonymous.txt", "r");
	limit = 100;
	puts("test2");
	Text *t = text_create(noisefile, NULL); 
	Text *anon = text_create(stdin, t);
	puts("test3");
	Text *auth = text_create(infile, t);
	puts("test4");
	//text_print(t);
	text_print(anon);

	if(text_contains(anon, "abhorrent")) {
		puts("POG!"); 
		printf("abhorrent frequency: %f\n", text_frequency(anon, "abhorrent"));
	}

	printf("manhattan distance %f\n",text_dist(anon, auth, MANHATTAN));
	return 0;
}
