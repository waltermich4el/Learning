#include<stdio.h>


int main(){
    int a = 0, b = 0;
    char c = 'X';
    
    printf("Hello World\n");
    printf("This function was pushed from Windows VSCode\n");

    printf("Please input a value for a and b: \n");
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is: %d\n",a+b);
    printf("This line of text was added from LinuxVM\n");
    printf("This line was added from Windows\n");
    /*This comment was added after pullin' from remote repo and modifying the code. 
*/
    system("pause"); 

    return 0;

}