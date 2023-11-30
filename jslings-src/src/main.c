#include <stdio.h>
#include <string.h> 
int main(int argc,char *argv[]){
    if ( strcmp(argv[1],"hello") == 0){
        printf("hello & welcome to jslings\n");
        printf("you need nodejs & git installed as well as a text editor for the js files\n");
        printf("to test one of your solutions cd to the dir & use node to run the file\n");
        printf("if there are no errors you may move on\n");
        printf("if you need help we recomend what you use the jslinsg help command\n");
        printf("ex: jslings help vars_one\n");
        system("ls ../problems");
    }if (strcmp(argv[1],"hint") == 0){
        
    }
}