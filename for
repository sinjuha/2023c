#include <stdio.h>
int main()
{
	int i, s=0;
	for(i=1; i<=10; i++){
		if(i%1 == 0){
			s=s+i;
		    printf("%d\n",s);
		}
	}
	return 0;
}
