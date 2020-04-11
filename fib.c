#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<stdio.h>
int status=0;
void *fib(void *args);
{
	sleep(1);
	printf("\n child process has started ... \n");
	int n=atoi(args);
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	sleep(1);
	printf("%d \n ",fib[0]);
	sleep(1);
	printf("%d \n",fib[1]);
	for(int i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		sleep(1);
		printf("%d \n",fib[i]);
	}
	printf("child process ends \n");
}
int main()
{
	char *m;
	printf("enter the number upto which u want fibbonacci series :");
	scanf("%s",&*m);
	pthread_t thread id;
	pthread_create(&thread_id,NULL,fib,m);
	pthread_join(thread_id,NULL);
	sleep(1);
	printf("the parent process has started");
	sleep(1);
	printf("parent process do nothing");
	sleep(1);
	printf("the parent process ends \n");
}
