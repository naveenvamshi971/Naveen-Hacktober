#include<signal.h>
#include<unistd.h>
//Handler for SIGINT, caused by Ctrl-C at keyboard
void handle_sigint(int sig){
printf(" Caught signal %d\n", sig);
}
int main(){
signal(SIGINT,handle_sigint);
while(1){
printf("Process executing with a delay of 1second...\n");
sleep(1);
}
return 0;
}
