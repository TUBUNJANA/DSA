#include <stdio.h>
void binary(int arr[],int low,int high){
    
    if(low<=high){
        int mid=(low+high)/2;
        //printf(" %d ,",arr[mid]);
        
    if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid] ){
        printf("%d",arr[mid]);
    }
    else if(arr[mid-1]<arr[mid]){
        binary(arr,mid+1,high);
    }
    else{
        binary(arr,low,mid-1);
    }
    }
    
    
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,91,90};
    binary(arr,0,12);

    return 0;
}
