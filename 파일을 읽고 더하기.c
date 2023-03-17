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