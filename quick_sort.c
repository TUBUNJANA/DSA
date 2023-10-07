
#include <stdio.h>
int index_re(int *arr,int low,int high){
    int i=low+1;
    int j=high;
    int pivot=*(arr+low);
    int swape;
     printf("high= %d\n",high);
    do{
        while(pivot>=*(arr+i)&&i<=j){
            i++;
            printf("i= %d\n",i);
        }
        while(pivot<*(arr+j)&&i<=j){
            j--;
            printf("j= %d\n",j);
        }
       if(i<=j){
        swape=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=swape;
       }
    }while(i<j);
    swape=*(arr+low);
    *(arr+low)=*(arr+j);
    *(arr+j)=swape;
    return j;
}



void inserion_sort(int* arr,int low,int high){
    
   
   if(low<high){
    int index=index_re(arr,low,high);
    inserion_sort(arr,low,index-1);
    inserion_sort(arr,index+1,high);
   }
     
}
void print(int arr[],int size){
    
 for(int j=0;j<size;j++){
            printf("%d ",arr[j]);
        }
    
}
int main()
{
    int arr[]={10,9,8,7,5,3,2,1,2,8,6,56,52,15,69};
    int high =14;
    int low=0;
    inserion_sort(arr,low,high);
    print(arr,15);
    return 0;
}