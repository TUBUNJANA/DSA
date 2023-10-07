
#include <stdio.h>
void inserion_sort(int arr[],int size){
    int pivot,swap;
    for(int i=0;i<size;i++){
        pivot=i;
        for(int j=i+1;j<size;j++){
            if(arr[pivot]>arr[j]){
                pivot=j;
                
            }else{
                continue;
            }
        }
        swap=arr[i];
        arr[i]=arr[pivot];
        arr[pivot]=swap;
    }
     for(int j=0;j<size;j++){
            printf("%d ",arr[j]);
        }
}
int main()
{
    int arr[]={10,9,8,7,5,3,2,1,2,8,6};
 inserion_sort(arr,11);
    return 0;
}
