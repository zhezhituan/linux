#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
void *thread_function(void *arg);
char message[]="HELLO¡¡WORLD";
int main(){
	int res;
	pthread_t a_thread;
	void *thread_result;
	res=pthread_create(&a_thread,NULL,thread_function,(void *)message);
	if(res!=0){
		perror("fail");
		exit(EXIT_FAILURE);
	}
	printf("WAIT");
	res=pthread_join(a_thread,&thread_result);
	if(res!=0){
		perror("fail");
		exit(EXIT_FAILURE);
	}
	printf("THREAD JIONED RETURN %s\n",&thread_result);
	printf("NESSAGE IS %s\n",message);
	exit(0);
}
void *thread_function(void *arg){
	printf("ARG %s\n",(char*)arg);
        sleep(3);
	strcpy(message,"BYE");
	pthread_exit("THANK");	

}
