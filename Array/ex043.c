#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	printf("•¶š—ñ:%s", data);
	/*i = 0;
	while (data[i] != '\0') {
		i++;
	}
	printf("\n•¶š”‚Í%d•¶š\n", i);*/
	for (i = 0; data[i] != '\0'; i++);
	printf("\n•¶š”‚Í%d•¶š\n", i);
}