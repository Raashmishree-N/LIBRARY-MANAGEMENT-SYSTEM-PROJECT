#include "lib.h"
void save(struct lb *bptr,struct issue *iptr)
{
        FILE *fp;
        struct lb *bt=bptr;
        struct issue *it=iptr;

        fp=fopen("books.dat","w");
        while(bt)
        {
                fprintf(fp,"%d %s %s %d\n",bt->id,bt->book,bt->author,bt->cp);
                bt=bt->next;
        }
        fclose(fp);

        if(iptr != NULL)
        {
                fp=fopen("issued.dat","w");
                while(it)
                {
                        fprintf(fp,"%d %s %d %s %s %s %s %d\n",it->bid,it->bname,it->uid,it->uname,it->issue_date,it->due_date,it->return_date,it->fine);
                it=it->next;
                }
                fclose(fp);
        }

        printf("data saved successfully\n");
}
