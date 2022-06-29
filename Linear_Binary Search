#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void binarySearch()
{
    int arr[10],n,front,last,key,i;
     printf(" Enter Array Size \n");
     scanf("%d",&n);
      printf(" Enter %d Elements \n",n);
      for(i=0; i<n; i++)
      {
          scanf("%d",&arr[i]);
      }
      printf("Enter key element \n");
      scanf("%d",&key);

      front =0;
      last= n-1;
      while(front<=last)
      {
          int mid = front+last/2;
          if(arr[mid]==key)
          {
             printf("Element Found at %d \n",mid+1);
          }
          if(arr[mid] < key)
              front=mid+1;
          else
             last = mid-1;
      }
      printf("Element Not Found \n");

}

void linearSearch()
{
    int arr[10],n,i,key;
     printf(" Enter Array Size \n");
     scanf("%d",&n);
      printf(" Enter %d Elements \n",n);
      for(i=0; i<n; i++)
      {
          scanf("%d",&arr[i]);
      }
      printf("Enter key element \n");
      scanf("%d",&key);
      for(i=0;i<n;i++)
      {
          if(arr[i]==key)
          {
              printf("Element is Found at %d \n",i+1);
              exit(0);

          }
      }
              printf("Element Not Found \n");
}



void main()
{
    int choice;
    printf(" 1. binary serach \n");
    printf(" 2. linear serach \n");

     printf(" Enter Choice \n");
     scanf("%d",&choice);

     switch(choice)
     {
         case 1: binarySearch();
                 break;
         case 2: linearSearch();
                 break;

         default :
                  printf(" Invalid Input \n");
     }


}



