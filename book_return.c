#include"lib.h"
#include<string.h>
#include<stdio.h>
void return_book(struct lb **ptr,struct issue **iptr)
{
        int id,uid;

        printf("Enter Book ID\n");

        scanf("%d",&id);

        printf("Enter User ID\n");

        scanf("%d",&uid);

        struct issue *temp;

        temp=*iptr;

        while(temp)
        {
                if(temp->bid==id &&temp->uid==uid && strcmp(temp->return_date,"NOTRETURN")==0)
                {
                        int rd,rm,ry;

                        int dd,dm,dy;

                        printf("Enter Return Date(dd/mm/yyyy)\n");

                        scanf("%d/%d/%d",&rd,&rm,&ry);

                        sscanf(temp->due_date, "%d/%d/%d",&dd,&dm,&dy);

                        sprintf(temp->return_date,"%d/%d/%d",rd,rm,ry);

                        if(rd>dd)
                        {
                                temp->fine=(rd-dd)*10;
                        }

                        struct lb *b;

                        b=*ptr;

                        while(b)
                        {
                                if(b->id==id)
                                {
                                        b->cp++;

                                        break;
                                }

                                b=b->next;
                        }

                        printf("Book Returned Successfully\n");

                        printf("Fine:%d\n", temp->fine);

                        return;
                }

                temp=temp->next;
        }

        printf("Issue Record Not Found\n");
}

