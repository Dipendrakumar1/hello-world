 #include<stdio.h>
 int main()
 {
     int size,i;
     printf("Declare The Size Of An Array: ");
     scanf("%d",&size);
     int arr[size];
     for(i=0;i<size;i++)
     scanf("%d",&arr[i]);
     for(i=0;i<size;i++)
     printf("%d ",arr[i]);
     printf("\nEnter The Element To Be Search: ");
     int n;
     int found=0; //checking condition for true and false
     scanf("%d",&n);
     for(i=0;i<size;i++)
     {
     if(n==arr[i])
     {
         found=1;
         break;
     }
     }
     if(found==1)
     printf("\nThe Element %d Is At %d Position.",arr[i],i+1);
    else
     printf("\nElement Not Found.");
return 0;

 }
 /* *******************************dipendra's code *********************************** */
