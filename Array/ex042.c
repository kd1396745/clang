#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n");

	printf("•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s", data);
}