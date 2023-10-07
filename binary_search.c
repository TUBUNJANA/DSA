
#include <stdio.h>
void binary_search(int arr[],int low,int upp,int val){
   int midd=(low+upp)/2;
   
    if(arr[midd]==val){
        printf("Element found in index : %d ",midd+1);
        
    }
    else if(low==upp){
        printf("Element not founded");
    }
    else if(arr[midd]<val){
        binary_search(arr,midd+1,upp,val);
    }
    else{
        binary_search(arr,low,midd,val);

    
   }   
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
 binary_search(arr,0,8,80);
    return 0;
}