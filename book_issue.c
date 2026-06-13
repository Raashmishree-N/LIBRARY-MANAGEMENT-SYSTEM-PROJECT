#include"lib.h"
#include<string.h>
#include<time.h>
#include<stdio.h>
void issue_book(struct lb **ptr,struct issue **iptr)
{
        struct lb *temp;
        temp=*ptr;

        int id;

        printf("Enter Book ID\n");

        scanf("%d",&id);

        while(temp)
        {
                if(temp->id==id)
                {
                        if(temp->cp>0)
                        {
                                struct issue *new;

                                new=malloc(sizeof(struct issue));

                                new->bid=temp->id;

                                strcpy(new->bname,temp->book);

                                printf("Enter User ID\n");

                                scanf("%d",&new->uid);

                                printf("Enter User Name\n");

                                scanf("%s",new->uname);

                                time_t t;

                                t=time(0);

                                struct tm *p;

                                p=localtime(&t);

                                int d,m,y;

                                d=p->tm_mday;

                                m=p->tm_mon+1;

                                y=p->tm_year+1900;

                                sprintf(new->issue_date,"%d/%d/%d",d,m,y);

                                d=d+7;

                                if(d>30)
                                {
                                        d=d-30;

                                        m++;

                                        if(m>12)
                                        {
                                                m=1;

                                                y++;
                                        }
                                }

                                sprintf(new->due_date,
                                                "%d/%d/%d",
                                                d,m,y);

                                strcpy(new->return_date,
                                                "NOTRETURN");

                                new->fine=0;

                                new->next=0;

                                if(*iptr==0)
                                {
                                        *iptr=new;
                                }
                                else
                                {
                                        struct issue *last;

                                        last=*iptr;

                                        while(last->next)
                                        {
                                                last=last->next;
                                        }

                                        last->next=new;
                                }

                                temp->cp--;

                                printf("Book Issued Successfully\n");
                        }

                        else
                        {
                                printf("Book Not Available\n");
                        }

                        return;
                }

                temp=temp->next;
        }

        printf("Book ID Not Found\n");
}
