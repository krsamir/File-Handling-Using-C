#include<stdio.h>
#include<dirent.h>

void main(){
    /*dirent.h header file containms variables and functions related to directory streams.*/
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if(d){
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n",dir->d_name);
        }
        closedir(d);
    }
}
