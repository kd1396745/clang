#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,n,k[20];

	srand(time(0));
	printf("���������͂��Ă�������:");
	scanf("%s", s);

	/*while(s[i] != '\0'){
	    k[i] = rand() % 6;
	    s[i] = s[i] + k[i];
	    i++;}*/

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6 ;
		s[i] = s[i] + k[i];
	}
	printf("�Í���������́A%s\n�Í����L�[�� ", s);
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	//printf("�Í����L�[�́A%d\n", k[n]);
}