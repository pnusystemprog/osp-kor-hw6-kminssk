#include <stdio.h>
#include <string.h>
#include "phone.h"

extern struct Contact PhoneBook[];
extern int size;

void deleteByName()
{
	char Searchname[10];
	int found = 0;

	printf("\n>>Enter a name to search:");
	scanf("%s", Searchname);

	int index = 0;
	while(1)
	{
		if(strcmp(Searchname, PhoneBook[index].Name) == 0)
		{
			found = 1;
			printf("%s is deleted...\n", PhoneBook[index].Name);
			for(int i = index; i < size; i++)
			{
				strcpy(PhoneBook[i].Name, PhoneBook[i+1].Name);
				strcpy(PhoneBook[i].PhoneNumber, PhoneBook[i+1].PhoneNumber);
			}
			size = size - 1;
			index = -1;
		}
		index ++;
		if(index == size)  break;
	}

	if(found == 0)  printf("Oops! %s is not in the PhoneBook.\n", Searchname);

	return;
}
