#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k=0;
	char t;
	char s[100];
	//char [100];
	scanf("%s",&s);
 	int l=strlen(s);
 	//strcpy(r,s);
	//printf("%s",r);
	
	for(i=0;i<l;i++)
	{
		if(s[i]!=s[l-i-1])
		{
			printf("NO");
			exit(0);
		}
	}
 	printf("YES");
 
    return 0;
}