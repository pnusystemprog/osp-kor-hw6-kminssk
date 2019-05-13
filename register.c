#include <stdio.h>
#include <string.h>
#include "phone.h"

static char password[11] = "qwerty1234";

extern struct Contact PhoneBook[];
extern int size;

void registerPhoneData()
{
	char input_pw[15];
	int err_count = 0;

	while(1)
	{
		printf("\nPassword:");
		scanf("%s", input_pw);

		if(strcmp(input_pw, password) == 0)  break;
		else  err_count ++;

		if(err_count == 1)  printf(">>Not Matched !!!\n");
		else if(err_count == 2)  printf(">>Not Matched(twice) !!!\n");
		else if(err_count == 3)
		{
			printf(">>Not Matched(3 times) !!!\n");
			printf(">>You are not allowed to access PhoneBook.\n");
			return;
		}
	}
	
	printf("\nNew User Name:");
	scanf("%s", PhoneBook[size].Name);
	printf("PhoneNumber:");
	scanf("%s", PhoneBook[size].PhoneNumber);
	size++;

	printf("Registered...\n");
	return;
}
