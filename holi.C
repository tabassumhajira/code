#include <stdio.h>
#include<string.h>
int main(void) {
	char d[10];
	scanf("%s",d);
	if((strcmp(d,"Saturday")==0)||(strcmp(d,"Sunday")==0)||(strcmp(d,"sunday")==0)||(strcmp(d,"saturday")==0))
	{
	printf("Yes");
	}
	else
	{
	printf("No");
	}
	return 0;
}
