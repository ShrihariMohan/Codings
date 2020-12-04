#include<stdio.h>
void main() {
  char name[100] ;
  int rollNo ;
  int sub1 , sub2 , sub3 , sub4 ;
  float avg ;  
  scanf("%s",name);
  scanf("%d",&rollNo);
  scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);

  avg = (sub1 + sub2 +sub3 +sub4)/4.0;  
  printf("Name :%s\n",name);
  printf("Id : %d\n",rollNo);
  printf("sub1 : %d , sub2 : %d , sub3 : %d , sub4 : %d",sub1,sub2,sub3,sub4);
  printf("Average is %f",avg);

}

// what is a function ?
// name() 