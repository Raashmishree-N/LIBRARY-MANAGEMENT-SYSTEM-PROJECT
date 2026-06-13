#include"lib.h"
#include<string.h>
void id_rm(struct lb **ptr)
{
        int id;
        printf("Enter ID to remove\n");
        scanf("%d",&id);
        struct lb *temp;
        struct lb *prev=0;
        temp=*ptr;
        while(temp!=0)
        {
                if(temp->id==id)
                {
                        if(temp==*ptr)
                                *ptr=temp->next;
                        else
                                prev->next=temp->next;
                        free(temp);
                        return;
                }
                else
                {
                        prev=temp;
                        temp=temp->next;
                }
        }
}

void name_rm(struct lb **ptr)
{
        int c=0;
        char name[20];
        printf("Enter Name to Delete\n");
        scanf("%s",name);
        struct lb *temp,*t1;
        struct lb *prev=0;
        temp=*ptr;
        t1=*ptr;
                       printf("----------------------------------------------\n");
                       printf("BOOKID      BOOKNAME   AUTHOR    NO.OF.COPIES \n");
                       printf("----------------------------------------------\n");
        while(temp)
        {
                if(strcmp(temp->book,name)==0)
                {
                        c++;
                        printf("%d         %s         %s        %.d\n",temp->id,temp->book,temp->author,temp->cp);
                }
                temp=temp->next;
        }
        if(c==0)
        {
                printf("name not found\n");
        }
        else if(c==1)
        {
                while(t1)
		{
                        if(strcmp(t1->book,name)==0)
                        {

                        if(t1==*ptr)
                                *ptr=t1->next;
                        else
                                prev->next=t1->next;
                        free(t1);
                        return;
                }
                else
                {
                        prev=t1;
                        t1=t1->next;
                }
                }
        }
}
