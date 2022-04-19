#include<stdio.h>
void linear_srch(int *p,int x,int n)
{
    int i = 0 ;
    for(i=0;i<n;i++)
    {
        if(*(p+i)==x)
        {
            printf("element found at index:%d\n",i);
            printf("element found at position:%d",(i+1));
            break;
        }

    }
    if(i==n)
        printf("element is not found");
}
void bin_srch(int arr[],int x,int n)
{
    int l=0,r=n-1;
    int mid=0;
    while(l<r)
    {
        mid=(l+r)/2;
        if(x==arr[mid])
        {
            printf("%d element is found at location %d",x,mid+1);
            break;
        }
        else if(x<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    if(l>r)
    printf("element not found:");
}

int main()
{
    int n,choice,arr[20],i,x,*p;
    int mid=0;
    p=arr;
    printf("enter total number of array:");
    scanf("%d",&n);
    printf("enter your array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("displaying you entered array:");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    printf("enter your choice\n 1:linear search\n 2:binary search");
    scanf("%d",&choice);
    switch (choice)
{
case 1:
   { printf("enter the number you want to search:");
    scanf("%d",&x);
    linear_srch(arr,x,n);
   }
    break;
case 2:
     printf("enter the number you want to search:");
    scanf("%d",&x);
    bin_srch(arr,x,n);

}
return 0;
}

