#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[];
extern int size;

void searchByName()
{
	char Searchname[10];
	int found = 0;

	printf("\n>>Enter a name to search:");
	scanf("%s", Searchname);
	for(int i = 0; i < size; i++)
	{
		if(strcmp(Searchname, PhoneBook[i].Name) == 0)
		{
			found = 1;
			printf("%s\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
		}
	}
	if(found == 0)  printf("Oops! %s is not in the PhoneBook.\n", Searchname);
	return;
}
