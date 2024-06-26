/*implementing dequeue*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int dequeue[MAX];
int front=-1,rear=-1;
void insert_front(int);
void insert_rear(int);
void delete_front();
void delete_rear();
void display();
int main(){
	int item,choice;
	while(1){
		printf("\n....MENU...\n");
		printf("1.insert_front\n2.insert_rear\n3.delete_front\n4.delete_rear\n5.display\n6.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("enter element to insert:\n");
				scanf("%d",&item);
				insert_front(item);
				break;
			case 2:printf("enter element to insert rear");
                    scanf("%d",&item);
                    insert_rear(item);
                    break;
			case 3:delete_front();
				break;
			case 4:delete_rear();
                    break;
            case 5:display();
                    break();
            case 6:exit(0);
            default:printf("invalid choice");
		}
	}
}
void insert_front(int item){
        if((rear+1)%MAX==front)
            printf("Q is full\n");
        elseif(front==-1){
            front=rear=0;
            dequeue[front]=item;
        }
        elseif(front==0){
            front=MAX-1;
            dequeue[front]=item;
        }
        else{
            front--;
            dequeue[front]=item;
        }
}
void insert_rear(int item){
        if((rear+1)%MAX==front)
            printf("Q is full\n");
        elseif(front==-1){
            front=rear=0;
            dequeue[rear]=item;
        }
        else{
            rear=(rear+1)%MAX;
            dequeue[rear]=item;
        }
}
void delete_front(){
        if(front==-1)
            printf("Q is empty\n");
        else{
            printf("%4d",dequeue[front]);
            if(front==rear)
                front=rear=-1;
            else
                front=(front+1)%MAX;
        }
}
void delete_rear(){
        if(front==-1)
            printf("Q is empty");
        else{
            printf("%4d",dequeue[rear]);
            if(front==rear)
                front=rear=-1;
            elseif(rear==0)
                rear=MAX-1;
            else
                rear--;
        }
}
void display(){
        int i=front;
        if(front==-1)
            printf("Q is empty");
        else{
            while(i!=rear)
            {
                printf("%4d",dequeue[i]);
                i=(i+1)%MAX;
            }
            printf("%4d",dequeue[rear]);

        }
}