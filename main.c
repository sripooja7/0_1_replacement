/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    printf("\nenter the size of the array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements into the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]==a[i+2])
      {
          b[i+1]=0;
      }
      else
      {
          b[i+1]=1;
      }
      if(i==n)
      {
          b[n]=a[n];
      }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
