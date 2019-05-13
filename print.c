#include <stdio.h>
#include "phone.h"

extern struct Contact PhoneBook[];
extern int size;

void printAll()
{
	printf("\n<<Display all contacts in the PhoneBook>>\n");

	for(int i = 0; i < size; i++)  printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	return;
}
