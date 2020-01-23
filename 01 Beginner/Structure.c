/*#include<stdio.h>
#include<string.h>
struct student{
    int id,batch;
    char name[100];
    char dept[100];
};
int main()
{
    struct student std1,std2;
    scanf("%d%d",&std1.id,&std1.batch);
    scanf("%s %s",&std1.name,&std1.dept);
    //std1.id=162115008;
    //std1.batch=39;
    //strcpy(std1.name,"Barun");
    //strcpy(std1.dept,"CSE");
    printf("%d %d %s %s",std1.id, std1.batch, std1.name, std1.dept);
    return 0;
}*/
/**#include<stdio.h>
struct student{
    int id,batch;
    char name[100],dept[100];
    };
    int main()
{
     struct student std1;
     gets(std1.name);
     gets(std1.dept);
     scanf("%d%d",&std1.id,&std1.batch);
     printf("%d %d %s %s",std1.id, std1.batch, std1.name, std1.dept);
     return 0;
}*/
#include<stdio.h>
struct student{
    int id,batch;
    char name[100],dept[100];
    };
    int main()
{
    int i;
     struct student std1[100];
     for(i=0;i<2;i++)
     {
         gets(std1[i].name);
         gets(std1[i].dept);
         scanf("%d%d",&std1[i].id,&std1[i].batch);
         printf("%d %d %s %s",std1[i].id, std1[i].batch, std1[i].name, std1[i].dept);
     }
}

