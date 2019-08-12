#include<stdio.h>

int size,front,rear;
int a[10];

void enqueue(int value){
    if((front==0 &&rear==size-1)||(front==rear+1)){

        printf("queue is full...!...no element can be inserted...you need to pop an element first...!\n");

 }
     else if(rear==size-1){

        rear=0;
        a[rear]=value;

 }
    else if(front == -1 && rear == -1 ){

        rear=front=0;
        a[rear]=value;

 }
    else {
        rear++;
        a[rear]=value;

    }

}

void dequeue(){

    if(front==-1 && rear==-1){

        printf("Sorry...! queue is empty...!...there is nothing to delete...\n");
    }
    else if(front==rear){
        printf("popped element is %d.\n",a[front]);
        front=rear=-1;
    }
    else if(front==size-1){

        printf("popped element is %d.\n",a[front]);
        front=0;
    }
    else{

        printf("popped element is %d.\n",a[front]);
        front=front+1;
    }
}
void print(){int i;
        if(front==-1 && rear== -1)
            printf("Queue is empty...\n");
    else if(front<=rear){

        for(i=front;i<=rear;i++)
            printf("%d...",a[i]);
            printf("\n");
    }
    else{

        for(i=front;i<=size-1;i++){

            printf("%d...",a[i]);

        }
        for(i=0;i<=rear;i++)
            printf("%d...",a[i]);
        printf("\n");
    }
}
int main(){
    int value,choice;
     front=rear=-1;//printf("%d\n",a[5]);
    printf("Enter the maximum size of queue that you want to allow...\n");
    scanf("%d",&size);
    while(1){

        printf("Enter 1. for inserting an element\nEnter 2. for poping an elment\nEnter 3. for traversing the queue\nEnter 4. for exit\n");
        scanf("%d",&choice);
      switch(choice){

      case 1: printf("Enter the value you want to insert\n");
                scanf("%d",&value);
                enqueue(value);
                break;
      case 2: dequeue();
                break;

      case 3: print();
                break;
      case 4: exit(0);

      default: printf("OOPs...! INVALID CHOICE \n");
      }
    }
    return 0;
}
