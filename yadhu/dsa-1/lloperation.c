#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL, *newnode, *current,*nextt;

void create()
{
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element:\t");
        scanf("%d",&newnode -> data);
        if(head==0)
        {
            head=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;

        }
    }
    current->next=NULL;
}

void insert()
{
    int pos;
    printf("Enter the element to insert");
    scanf("%d",&newnode -> data);
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {

        head=newnode;
        current=newnode;
        current->next=NULL;
    }
    else
    {
    printf("Enter the postion to insert");
    scanf("%d",&pos);
    current=head;
    int i=0;
    while(i!=pos){
        current=current->next;
    }
    
    

    nextt=current->next;
    //printf("%d",current->data)

    current->next=newnode;
    newnode->next=nextt;

    
    }
    

}
void display()
{
     printf("The elements are\n:");
    current=head;
   
    while(current!=NULL)
    {
        printf("%d \t",current->data);
        current=current->next;
    }
}

int main()
{
    
    int choice=-1;
    while(choice!=6)
    {
        printf("Enter a choice\n1.Creation\n2.Insertion\n3.Deletion\n4.Display:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                    break;  
            case 2:insert();
                    break;        
            case 4:display();
                   break;        
        }
    }
}