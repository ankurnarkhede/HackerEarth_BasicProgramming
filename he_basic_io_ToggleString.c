




#include <stdio.h>

int main()
{
	int i,j;
	int a[100];
    char s[100];
  	scanf("%s",&s);
    
    for(i=0;s[i]!='\0';i++)
    	{
    		a[i]=s[i];
    		if(a[i]>=65 && a[i]<=90)
    			{s[i]+=32;}
			else 
			{
				s[i]-=32;
			}
    		
    	}
    
    
    
    printf("%s",s);
}
