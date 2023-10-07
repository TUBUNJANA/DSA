
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct stack{
    int size;
    int top;
    char *arr;
};
bool is_emp(struct stack *s){
    if (s->top==-1){
        return true;
    }
    else{
        return false;
    }
}

int precedence(char val1){
    if(val1=='*' || val1=='/' ||val1=='%'){
        return 2;
    }
    else{
        return 1;
    }
    
}

char arr_Deletion(struct stack *s){
    
        char a = s->arr[s->top];
        s->top--;
        
       return a;
    
}


    
void arr_input(struct stack *s,char val){
        s->arr[++s->top]=val;
        
   
}
bool is_operator(char a){
    if(a=='*' || a=='/' || a=='+' || a=='-' || a=='%' ){
        return false;
    }
    else{
        return true;
    }
}

void infix_to_post(char inf[],struct stack *s){
    char post[s->size];
    int i=0,j=0;
    
    while(inf[i]!='\0'){
        
    if(is_operator(inf[i])){
        post[j]=inf[i];
        j++;i++;
    }
    else{
        if(s->top==-1){
            arr_input(s,inf[i]);
            i++;
        }
        else if(precedence(s->arr[s->top])>=precedence(inf[i])){
            char a=arr_Deletion(s);
            post[j]=a;
            j++;
        }
        else{
            arr_input(s,inf[i]);
            i++;
        }
    }
  }
  while(!is_emp(s)){
      post[j]=arr_Deletion(s);
      j++;
  }
  printf("The postfix expression is :: ");
    for(int i=0;i<j;i++){
        printf("%c",post[i]);
    }
    printf("\n");
  
}

int main()
{
    struct stack s;
    printf("Enter infix expression size :: ");
    
    scanf("%d",&s.size);
    char inf[s.size];
    printf("Enter infix expression  :: ");
    scanf("%s",inf);
    //printf("Array size is :: %d",s.size);
    
    s.top=-1;
    s.arr=(char *)malloc(s.size*sizeof(char));
    
    infix_to_post(inf,&s);
    
        return 0;
}
