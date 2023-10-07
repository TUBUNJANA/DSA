
#include <stdio.h>
void inserion_sort(int arr[],int size){
    int pivot,swap;
    for(int i=1;i<size;i++){
        pivot=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=pivot;
                arr[j+1]=swap;
                
            }else{
                continue;
            }
        }
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
