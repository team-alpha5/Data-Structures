#include<stdio.h>
#include <stdlib.h>
#define Size 5

void Insert();
void Delete();
void Display();
int Choice,Item,Queue[Size],Front=-1,Rear=-1;


int main(){
   printf("The Following Program Is A Data Structure,Namely Queue!\n");
while(1){
   printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
   scanf("%d",&Choice);

   switch(Choice){

     case 1:Insert();
            break;
     case 2:Delete();
            break;
     case 3:Display();
            break;
     case 4:exit(0);

     default :printf("Wrong Choice!");
   }

 }
return 0;
}

void Insert(){
  if(Front==-1){
    Front++;
  }
   if(Rear==Size-1){
    printf("Queue Full!");
  }
   else{
    printf("\nEnter An Element To Be Pushed Into The Queue:");
    scanf("%d",&Item);
    Rear++;
    Queue[Rear]=Item;
  }
 }

void Delete(){
  if(Rear>=0){
  for(int i=1;i<=Rear;i++){
    Queue[i-1] = Queue[i];
  }
  Rear--;
}
else{
  printf("Queue Empty!");
}
}

void Display(){
  if(Rear>=0){
  printf("\nThe Elements In The Queue Are:");
  for(int i=0;i<=Rear;i++){
    printf("%4d",Queue[i]);
  }
}
else{
  printf("\nQueue Empty!");
}
}
