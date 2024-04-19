#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int m, s, e;
    float p;
    struct student *next;
};

struct student *head = NULL;
struct student *last; 

void addStudent()
{

    if (head == NULL)
    {
        head = malloc(sizeof(struct student));
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &head->name, &head->m, &head->s, &head->e);
        head->p = (head->m + head->s + head->e) / 3;
        head->next=NULL; 
        last  = head; 
    }
    else
    {
        struct student *s; // 30 12 4

        s = malloc(sizeof(struct student));

        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &s->name, &s->m, &s->s, &s->e);
        s->p = (s->m + s->s + s->e) / 3;
        s->next=NULL;
        last->next = s; 
        last = s; 

    }
}

void display()
{
    //  printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d\nPerc = %f",s->name,s->m,s->s,s->e,s->p);
}
int main()
{
    addStudent();//ayush 
    addStudent();//ram 
    addStudent();//sita
    addStudent();//laxman 
    display();
    return 0;
}