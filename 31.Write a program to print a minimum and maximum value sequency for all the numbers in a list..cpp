#include <stdio.h>
#include <conio.h>
int main()
{
    int a[1000],i,n,min,max;
    printf("Enter size of the List : ");
    scanf("%d",&n);
    printf("Enter elements in list : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of list is : %d",min);
          printf("\nmaximum of list is : %d",max);
    return 0;
}
