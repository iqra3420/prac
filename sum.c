#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int num[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99};
	int arr[4];
	int sum1=0, sum2=0,sum3=0,sum4=0,total=0;
	int i,j,status,pid;
	for(i=0;1<3;i++)
	{
		pid = fork();
		if(pid<0)
		{
		  printf("Error!/n");
		}
		
		else if(pid == 0)
		{
		 if(j == 0)
		 {
		  int a;
		  for(a=0;a<25;a++)
		  {
		    sum1 = sum1+num[a];
		  }
		  printf("%d",sum1);
		  //exit(0);
		 }
		 
		 else if(j == 1)
		 {
		  int b;
		  for(b=25;b<50;b++)
		  {
		    sum2 = sum2+num[b];
		  }
		  printf("%d",sum2);
		  exit(0);
		 }
		
		 else if(j == 2)
		 {
		  int c;
		  for(c=50;c<75;c++)
		  {
		    sum3 = sum3+num[c];
		  }
		  printf("%d",sum3);
		  exit(0);
		 }
		 else if(j == 3)
		 {
		  int d;
		  for(d=75;d<100;d++)
		  {
		    sum4 = sum4+num[d];
		  }
		  printf("%d",sum4);
		  exit(0);
		 }
		}
	       else 
		{
		  wait(& status);
		}
	}  
	total = sum1+sum2+sum3+sum4;
	printf("Total is:%d", total);
	return 0;
}
