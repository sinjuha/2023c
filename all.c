#include <stdio.h>
void main()
{
	int a = 3, b = 4, sum;
	sum = a + b;
	printf("%d", sum);
}
#include <stdio.h>
void main()
{
	int a, b;
	puts("Enter:");
	scanf("%d %d",&a,&b);
	printf("%d",a+b);
}
#include <stdio.h>
void main()
{
    int val[2], a;
    val[0] = 3, val[1] = 4;
    a = val[0] + val[1];
    printf("%d", a);
}
#include <stdio.h>
void main()
{
    int a, b;	
    FILE*fp;	
    fp= fopen("my.txt", "r");	
    fscanf(fp, "%d %d", &a, &b);	
    fclose(fp);	
    printf("%d\n", a+b);
}
#include <stdio.h>
struct math
{
    int a, b;
}me;
void main()
{
    me.a = 3, me.b =4;
    printf("%d",me.a+me.b);
}