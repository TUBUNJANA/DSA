
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct stack{
    int size;
    int top;
    int low;
    int *arr;
};

bool is_full(struct stack *s){
    if (((s->top+1)%s->size)==s->low){
        return true;
    }
    else{
        return false;
    }
}

bool is_emp(struct stack* s){
    if (s->top==-1&&s->low==-1){
        return true;
    }
    else{
        return false;
    }
}
void arr_Deletion(struct stack* s){
    if (is_emp(s)){
        printf("Queue underflow!\n");
    }
    else if(s->top==s->low){
        s->top=-1;
        s->low=-1;
    }
    else{
        printf("Deleted element is: %d\n",s->arr[s->low]);
        s->low=(s->low+1)%s->size;
    }
}
void print_array(struct stack* s){
    int i=s->low;
    if(is_emp(s)){
        printf("Queue underflow!\n");
    }
    else{
    printf("The array is = ");
        for(i;i!=s->top;i=(i+1)%s->size){
        printf(" %d, ",s->arr[i]);
    }
    if(i==s->top){
        printf(" %d, ",s->arr[i]);
    }
    printf("\n");
  } 
}
    
void arr_input(struct stack* s,int val){
    
    if (s->top==-1 && s->low==-1){
        
        s->top=0;
        s->low=0;
        s->arr[s->top]=val;
    }
    else if(is_full(s)){
       printf("Queue overflow!\n");
    }
    else{
        s->top=(s->top+1)%s->size;
        s->arr[s->top]=val;
    }
    
}

int main()
{
    struct stack s;
    printf("Enter the array size :: ");
    scanf("%d",&s.size);
    //printf("Array size is :: %d",s.size);
    s.top=s.low=-1;
    s.arr=(int *)malloc(s.size*sizeof(int));
    int user_input;
    int val;
    while (1<2){
    printf("1-For insertion. ");
    printf(" 2-For Deletion. ");
    printf(" 3-For Print. ");
    printf(" 0-For Exit. Your choice :: ");
    scanf("%d",&user_input);
    
    if(user_input==1){
        printf("Enter the value :: ");
        scanf("%d",&val);
        arr_input(&s,val);
    }
    else if (user_input==2){
        arr_Deletion(&s);
    }
    else if (user_input==3){
       print_array(&s);
    }
    else if(user_input==0){
        break;
    }
    else{
        printf("The input is not valid.\n");
    }
 }
  
    
        return 0;
}
