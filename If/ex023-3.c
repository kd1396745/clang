#include<stdio.h>
main()
{
	int en, su1, su2;
	printf("���Z�q����́F");
	scanf("%d", &en);
	printf("2�̐�������́F");
	scanf("%d%d",&su1, &su2);
	if (en == 1)
	{
		printf("%d", su1 + su2);
		if (en == 2)
		{
			printf("%d", su1 - su2);
			if (en == 3) 
			{
				printf("%d", su1 * su2);
				if (en == 4)
				{
					printf("%d", su1 / su2);
				}
				
			}
			
		}
	}
}