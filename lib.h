#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lb
{
	int id;
	char book[50];
	char author[50];
	int  cp;
	struct lb *next;
};

struct issue
{
        int bid;
        char bname[50];
        int uid;
        char uname[50];
        char issue_date[50];
        char due_date[50];
        char return_date[50];
        int fine;
        struct issue *next;
};
