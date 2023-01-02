#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{   //isbn in capital international standard book number 12 digits
int book_id;
char book_name[30];
int ISBN;
};
void main()
{
struct book s1={10,"C_language",1212};
clrscr();
 //printf("%d%s%d\n\n\n",s1.book_id,s1.book_name,s1.ISBN);
 printf("book_id is :%d\n",s1.book_id);
 printf("book_name is :%s\n",s1.book_name);
 printf("ISBN_number is :%d\n",s1.ISBN);
getch();
}




