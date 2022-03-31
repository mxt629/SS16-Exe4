//
//  main.c
//  SS16 Bai4
//
//  Created by Little Chick on 30/03/2022.
//

#include <stdio.h>
void indexMin(int arr[], int size)
{
    int i,min;
    min = arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }printf("Min value: %d\n",min);
}
int main(int argc, const char * argv[]) {
    int arr[10],i;
    
    for(i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    indexMin(arr,10);
    return 0;
}
