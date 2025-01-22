#include <stdio.h>
#include<fcntl.h>
#include<unistd.h>
/* this program creates a text file with unistd and fnctl library
 * use ls -lah  on  CLI to understand the read write permissions
 *
 */
int main(void) {

   int filedesc= open("test.txt", O_WRONLY  | O_CREAT ,S_IRWXU);
   if (filedesc == -1) // if  file creation error is -1 as per documentaion 
       {
       // perror("open");
       return -1;

   }
    else {
        printf("file operation is succesdfull ");
        printf("File descriptor is %d\n", filedesc); // stdin, stdout, stderr occupy 0,1,2 , hence the next inout is 3
        close(filedesc);
       return 0;
    }

}