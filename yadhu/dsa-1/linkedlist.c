#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
    };
    int n;
    struct node *head=NULL, *newnode, *current;
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
    printf("The elements are\n:");
    current=head;
   
    while(current!=NULL)
    {
        printf("%d \t",current->data);
        current=current->next;
    }
    return 0;
}