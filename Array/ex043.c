#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	printf("������:%s", data);
	/*i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("\n��������%d����\n", i);*/
	for (i = 0; data[i] != '\0'; i++);
	printf("\n��������%d����\n", i);
}