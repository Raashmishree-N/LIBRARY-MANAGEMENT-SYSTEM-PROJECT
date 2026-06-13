L:mainlib.o book_add.o book_up.o book_rm.o book_show.o book_se.o book_issue.o book_return.o list_issue.o libsave.o
	cc mainlib.c book_add.c book_up.c book_rm.c book_show.c book_se.c book_issue.c book_return.c list_issue.c libsave.c -o L

mainlib.o:mainlib.c
	cc -c mainlib.c
book_add.o:book_add.c
	cc -c book_add.c
book_up.o:book_up.c
	cc -c book_up.c
book_rm.o:book_rm.c
	cc -c book_rm.c
book_show.o:book_show.c	
	cc -c book_show.c
book_se.o:book_se.c
	cc -c book_se.c
book_issue.o:book_issue.c
	cc -c book_issue.c
book_return.o:book_return.c
	cc -c book_return.c
list_issue.o:list_issue.c
	cc -c list_issue.c
libsave.o:libsave.c
	cc -c libsave.c

