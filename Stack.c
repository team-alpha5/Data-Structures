#include <stdio.h>
#define Size 10
void push();
void pop();
void display();
void exit();

int Stack[Size],top=-1,Choice;

int main () {

 int Condition = 1;

while(Condition){
  printf("\nMenu");
  printf("\n1.Push\n2.PoP\n3.Display\n4.Exit\n");
  scanf("%d",&Choice);

  switch (Choice){

    case 1:push();
           break;
    case 2:pop();
           break;
    case 3:display();
           break;
    case 4:exit();
    default:printf("\nWrong Choice!\n");
  }//switch
}//while
return 0;
}

void push(){
  if (top==Size-1){
    printf("\nStack OverFLow!");
  }//if
  else{
    printf("\nEnter The Number TO Be Inserted Into Stack:");
    top += 1;
    scanf("%d",&Stack[top]);
  }
}

void pop() {
  if(top==-1){
    printf("\nStack UnderFlow");
  }
  else{
    top -= 1;
  }
}

void display(){
  int i;
  if(top>=0){
    for(i=top;i>=0;i--){
      printf("\n%d",Stack[i]);
    }
    printf("\n\n");
  }
  else
  printf("\nStack Is Empty!");
}
