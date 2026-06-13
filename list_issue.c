#include "lib.h"
#include <stdio.h>
#include <string.h>

void list_books(struct issue *ptr)
{
	struct issue *iptr=ptr;
        if(iptr == 0)
        {
                printf("\nNo Books Issued\n");
                return;
        }

        printf("\n================ ISSUED BOOK DETAILS ================\n");

        printf("-----------------------------------------------------\n");

        printf("BookID\tBookName\tUserID\tUserName\n");

        printf("-----------------------------------------------------\n");

        while(iptr)
        {
                if(strcmp(iptr->return_date,"NOTRETURN")==0)
                {
                        printf("%d\t%s\t\t%d\t%s\n",
                                        iptr->bid,
                                        iptr->bname,
                                        iptr->uid,
                                        iptr->uname);

                        printf("Issue Date : %s\n",iptr->issue_date);

                        printf("Due Date   : %s\n",iptr->due_date);

                        printf("Return     : %s\n",iptr->return_date);

                        printf("Fine       : %d\n",iptr->fine);

                        printf("-----------------------------------------------------\n");
                }

                iptr = iptr->next;
        }
}
