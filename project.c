#include <stdio.h>
 
void tower(int n,char from,char extra,char to);
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
void tower(int n,char from,char extra,char to)
{
    if (n==1)
    {
        printf("\nDisk 1 is moved from rod %c to rod %c",from,to);
        return;
    }
    tower(n-1,from,to,extra);
    printf("\nDisk %d is moved from rod %c to rod %c",n,from,to);
    tower(n-1,extra,from,to);
}
