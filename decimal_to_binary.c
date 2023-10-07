
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct stack{
    int size;
    int top;
    int *arr;
};

bool is_full(struct stack s){
    if (s.top==s.size-1){
        return true;
    }
    else{
        return false;
    }
}

bool is_emp(struct stack s){
    if (s.top==-1){
        return true;
    }
    else{
        return false;
    }
}
int arr_Deletion(struct stack s){
    if (is_emp(s)){
        printf("Array underflow!\n");
        return s.top;
    }
    else{
        s.top=-1;
        return s.top;
    }
}
void print_array(struct stack s){
    int d;
    if(is_emp(s)){
        printf("Array underflow!\n");
    }
    else{
    printf("The binary digit is  = ");
    for( d=s.top;d>=0;d--){
        printf("%d",s.arr[d]);
    }
    printf("\n");
    }
    
}
    
int arr_input(struct stack s,int val){
    
    if (is_full(s)){
        printf("Array overflow!\n");
        return s.top;
    }
    else{
        s.arr[++s.top]=val;
    return s.top;
    }
    
}

int main()
{
    struct stack s;
    printf("Enter the stack size :: ");
    scanf("%d",&s.size);
    //printf("Array size is :: %d",s.size);
    s.top=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));
    int user_input;
    int val1;
    int val2;
    while (1<2){
    printf("1-For convertion ");
    printf(" 0-For Exit. Your choice :: ");
    scanf("%d",&user_input);
    
    if(user_input==1){
        printf("Enter the value :: ");
        scanf("%d",&val1);
        while(val1>=1){
            if(val1==1){
                s.top=arr_input(s,val1);
                break;
            }
            
            val2=val1%2;
            s.top=arr_input(s,val2);
            val1=val1/2;
        }
        
    }
    else if(user_input==0){
        break;
    }
    else{
        printf("The input is not valid.\n");
        continue;
    }
    print_array(s);
    s.top=arr_Deletion(s);
 }
  
    
    return 0;
}
