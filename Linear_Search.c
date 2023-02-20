//Linear Search 

#include <stdio.h>

int main()
{
    int arr[10000],num,key,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);
    
    printf("Enter the elements\n");
    for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
    }
    
    printf("Enter the key to be searched: ");
    scanf("%d",&key);
    
    for(i=0;i<num;i++){
        if (arr[i]==key){
        printf("Key found at index: %d",i);
        break;
        }
    }
    if(i==num)
    printf("-1");
}   
