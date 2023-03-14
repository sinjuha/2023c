# 2023c
2023 c language
## 신주하의 C언어 조별과제
#include <stdio.h>
struct Math
{
	int a,b;
}me;
void main()
{
	me.a=5;
	me.b=3;
	printf("%d",me.a+me.b);
}
#include <stdio.h>
void main()
{
	int a[1];
	puts("Enter:");
	scanf("%d %d",&a[0],&a[1]);
	printf("%d",a[0]+a[1]);
}
#include <stdio.h>
int main()
{
	int a[1]={3,4}, s;
	s=a[0]+a[1]
	printf("Array=%d",s);
}
#include <stdio.h>
void main()
{
	int a=4,b=6;
	printf("%d",a+b);
}
#include <stdio.h>
void main()
{
	int a,b;
	FILE* fp;
	fp=fopen("me.txt","r");
	fscanf(fp,"%d %d",&a,&b);
	fclose(fp);
	printf("%d",a+b);
}
