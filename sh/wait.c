#include <sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
pid_t pid;
char* message;
int n;
int exit_code;
pid=fork();
switch(pid){
	case -1:printf("fork error");
	case 0:message="child\n";
		n=5;
	       exit_code=37;
	       break;
	default:message="parent\n";
		n=3;
		exit_code=0;
		break;
}
for(;n>0;n--){
printf(message);
sleep(1);
}
if(pid!=0){
int stat_val;
pid_t child_pid;
child_pid=wait(&stat_val);
printf("cilde exit");
}
exit(exit_code);

}
