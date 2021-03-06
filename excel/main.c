/*#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct Student
{
    char name[20];
    int score;
    struct Stu *next;
}Stu;

int count_nodes_of_a_list(Stu * list)
{
    Stu * tmp = list;
    int count = 0;
    while(tmp){
        count++;
        tmp = tmp->next;
    }
    printf("%d nodes in total\n",count);
    return count;
}

void node_print(Stu * node)
{
    printf("%s-->%d\n",node->name,node->score);
}

Stu * make_a_list(Stu *head, Stu* tmp)
{
    if(tmp != NULL){
        tmp->next = head;
        head = tmp;
    }
    return head;
}

Stu * up(Stu *head,Stu *tmp)
{
    if(head->score == 0){
        return tmp;
    }else if((head->score > tmp->score) || (head->score == tmp->score)){
        tmp->next = head;
        return tmp;
    }else{
        Stu *pre, *cur = head;
        while(cur && (cur->score< tmp->score || cur->score==tmp->score)){
            pre = cur;
            cur = cur->next;
        }
        if(cur == NULL){
            pre->next = tmp;
        }else{
            tmp->next = cur;
            pre->next = tmp;
        }
        
        return head;
    }
}

Stu * down(Stu *head,Stu *tmp)
{
    if(head->score == 0){
        return tmp;
    }else if(head->score < tmp->score){
        tmp->next = head;
        return tmp;
    }else{
        Stu *pre, *cur = head;
        while(cur && ((cur->score > tmp->score) || (cur->score==tmp->score))){
            pre = cur;
            cur = cur->next;
        }
        if(cur == NULL){
            pre->next = tmp;
        }else{
            tmp->next = cur;
            pre->next = tmp;
        }
        return head;
    }
}

int main()
{
    printf("**** Pro-1 ****\n");
    
    printf("please input the number of students to be sorted by scores \n");
    int num_of_stu = 0;
    scanf("%d",&num_of_stu);
    
    printf("please input 0 or 1, 0 means down and 1 up \n");
    int up_or_down = -1;
    scanf("%d",&up_or_down);
    
    if(!(num_of_stu>0 && (up_or_down==0 || up_or_down==1))){
        printf("invalid input\n");
        return -1;
    }
    
    Stu *head = (Stu *)malloc(sizeof(Stu));
    head->next = NULL;
    head->score = 0;
    //        node_print(head);
    
    for(int i=1;i<=num_of_stu;i++){
        Stu *tmp_node = (Stu *)malloc(sizeof(Stu));
        //            printf("input num %d name:\n",i);
        //            scanf("%s",tmp_node->name);
        //            printf("input num %d score:\n",i);
        //            scanf("%d",&tmp_node->score);
        printf("please input num%d's name and score\n",i);
        scanf("%s %d",tmp_node->name,&tmp_node->score);
        tmp_node->next = NULL;
        
        if(1==up_or_down){
            head = up(head,tmp_node);
        }
        else if(0==up_or_down){
            head = down(head,tmp_node);
        }
    }
    
    Stu *pre, *cur = head;
    printf("SORTED list:\n");
    while(cur){
        printf("%s ====> %d\n",cur->name,cur->score);
        pre = cur;
        cur = cur->next;
        free(pre);
        pre = NULL;
    }
    
    return 0;
}






#include<iostream>
int main(int argc,const char * argv[])
{
    FILE *a;
    char s1[200];
    char s2[200];\if ((a=fopen("/Users/admin/Desktop/testfilel/fileclm.csv","r"))==0)
    {
        printf("文件不存在\n");
        
    }
    else
    {
        fscanf(a,"%s,%s",s1,s2);
        printf("%s \n%s\n",s1,s2);
    }
}*/


/*
#include<stdlib.h>
#include<stdio.h>

struct student
{
    
    int numbers;
    char name[10];
    char sex[10];
    int dateofbirth;
    char class[15];
    char phoneNumber[15];
    int judge1;
    int judge2;
    int judge3;
    int judge4;
    int judge5;
    int grade;
    int average;
    };
char bt[10];
struct student s[100];
int i=0;
int j;
FILE *fp,*fp1;
fp=fopen("student1.csv","r");/*Œƒº˛÷∏’Î*/
/*––◊÷∑˚∏ˆ ˝*/
/*if((fp = fopen("student1.csv","r")) == NULL)
{
    printf("fail to read");
    exit (1) ;
}else{
    
    fscanf(fp,"%s",bt);
    while(!feof(fp1))
    {
        fscanf(fp1,"%d,%[^,],%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d",&s[i].numbers,&s[i].name,&s[i].sex,&s[i].date of birth,&s[i].class,&s[i].phoneNumber,&s[i].judge1,&s[i].judge2,&s[i].judge3,&s[i].judge4,%s[i].judge5);
        i++;
    }
    j=i;
    for(i=o;i<j;i++)
    {
        printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",s[i].numbers,s[i].name,s[i].sex,s[i].date of birth,s[i].class,s[i].phoneNumber,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);
        fclose(fp2);
        
    }
    printf("%s",s[0].name);
    fclose(fp1);
    fp1 = fopen("student1.csv","r");
    while(1)
    {
        fscanf(fp1,"%[^\n",&bt);
        printf("%s",bt);
        break;
    }
}
j=i;
int max[100],min[100];
for(i=0;i<j;i++)
{
    max[i]=min[i]=s[i].judge1;
}

{
    if(s[i].judge2>max[i])max[i]=s[i].judge2;
        if(s[i].judge3>max[i])max[i]=s[i].judge3;
            if(s[i].judge4>max[i])max[i]=s[i].judge4;
                if(s[i].judge5>max[i])max[i]=s[i].judge5;
                    
}
j=i;
for(i=0;i<j;i++)
{
    if(s[i].judge5>max[i])max[i]=s[i].judge5;
}
j=i;
for(i=0;i<j;i++)
{
    if(s[i].judge2<min[i])min[i]=s[i].judge2;
        if(s[i].judge3<min[i])min[i]=s[i].judge3;
            if(s[i].judge4<min[i])min[i]=s[i].judge4;
                if(s[i].judge5<min[i])min[i]=s[i].judge5;
                    }
j=i;
for(i=o:i<j;i++)

{
    s[i].score=(s[i].judge1+s[i].judge2+s[i].judge3+s[i].judge4+s[i].judge5-max[i]-min[i]/3;
    s[i].average=(s[i].judge1+s[i].judge2+s[i].judge3+s[i].judge4+s[i].judge5-max[i]-min[i])/3;
                }
                printf("%d",s[0].score);
                printf("%d",s[i].average);
                j=i;
                i=0;
                fp2=fopen("student2.csv","w");
                while(i<j)
                {
                    fprintf(fp2,"%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",s[i].number,s[i].name,s[i].sex,s[i].date of birth,s[i].class,s[i].phoneNumber,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5,s[i].score)
                    i++;
                }
                fclose(fp2);
                if(a.grade!=b.grade)
                return a.grade<b.grade;
                
                
                
                return 0;
}
        
        
        
        
        
        
*/


#include <stdlib.h>
#include<stdio.h>

struct student
{
    
    int numbers;
    char name[10];
    char sex[10];
    int dateofbirt;
    char class1[15];
    char phoneNo[15];
    int judge1;
    int judge2;
    int judge3;
    int judge4;
    int judge5;
    int score;
};
int main()
{
    struct student s[100];
    FILE *fp1,*fp2;
    int i=0,j;
    
    fp1 =fopen("student1.csv","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(-1);
    }
    else
    {
        fscanf(fp1,"%*[^\n]%*c");
        while(!feof(fp1))
        {
            fscanf(fp1,"%d,%[^,],%[^,],%d,%[^,],%[^,],%d,%d,%d,%d,%d",
                   &s[i].numbers,&s[i].name,&s[i].sex,&s[i].dateofbirt,&s[i].class1,
                   &s[i].phoneNo,&s[i].judge1,&s[i].judge2,&s[i].judge3,&s[i].judge4,&s[i].judge5);
            i++;
        }
        j=i;
        
        for(i=0;i<j;i++)
        {
            printf("%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",s[i].numbers,
                   s[i].name,s[i].sex,s[i].dateofbirt,s[i].class1,s[i].phoneNo,
                   s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5);
        }
        
        fclose(fp1);
    }
    j=i;
    int max[100],min[100];
    
    for(i=0;i<j;i++)
    {
        max[i]=min[i]=s[i].judge1;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
        if(s[i].judge2>max[i])
            max[i]=s[i].judge2;
        if(s[i].judge3>max[i])
            max[i]=s[i].judge3;
        if(s[i].judge4>max[i])
            max[i]=s[i].judge4;
        if(s[i].judge5>max[i])
            max[i]=s[i].judge5;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
        if(s[i].judge2<min[i])
            min[i]=s[i].judge2;
        if(s[i].judge3<min[i])
            min[i]=s[i].judge3;
        if(s[i].judge4<min[i])
            min[i]=s[i].judge4;
        if(s[i].judge5<min[i])
            min[i]=s[i].judge5;
    }
    j=i;
    
    for(i=0;i<j;i++)
    {
        s[i].score=(s[i].judge1+s[i].judge2+s[i].judge3+s[i].judge4+s[i].judge5-max[i]-min[i])/3;
    }
    j=i;
    i=0;
    
    fp2=fopen("student2.csv","w");
    fprintf(fp2,"numbers,name,sex,dateofbirth,class,phoneNo,judge1,judge2,judge3,judge4,judge5,score\n");
    
    while(i<j)
    {
        fprintf(fp2,"%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d,%d\n",
                s[i].numbers,s[i].name,s[i].sex,s[i].dateofbirt,s[i].class1,
                s[i].phoneNo,s[i].judge1,s[i].judge2,s[i].judge3,s[i].judge4,s[i].judge5,s[i].score);
        i++;
    }
    fclose(fp2);
    
    return 0; 
}


