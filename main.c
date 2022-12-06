#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book
{
	int number;
	char title[10];
};


int main(int argc, char *argv[]) 
{
	int i;
	struct Book **bookshelf;
	
	bookshelf = (struct Book **)malloc(3*sizeof(struct Book*));
	
	for (i = 0; i < 3; i++)
	{
		bookshelf[i] = (struct Book *)malloc(10*sizeof(struct Book));
	}
	
	return 0;	
}
