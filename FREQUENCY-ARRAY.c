
#include <stdio.h>
#include<stdlib.h>
int main()
{
     int n,flag;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n],sample[n];
    printf("ENTER THE ARRAY: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sample[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        flag=1;
         for(int j=i+1; j<n; j++)
         {
             if(a[i]==a[j])
            {
                flag++;
                sample[j] = 0;
            }
         }
         if(sample[i]!=0)
        {
            sample[i] = flag;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(sample[i]!=0)
        {
            printf("%d has occured %d times\n", a[i], sample[i]);
        }
    }
    return 0;
}