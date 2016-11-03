#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

void main(){
  struct stat st;
  DIR * dir;
  struct dirent * d;
  int size;
  if((dir = opendir(".")) != NULL){
    while(d = readdir(dir)){
      stat(d->d_name, &st);
      size += st.st_size;
      if((d->d_type) == DT_DIR) printf("%s: directory %d bytes\n" , d->d_name , st.st_size);
      else printf("%s: regular file %d bytes\n" , d->d_name,st.st_size);
    }
  }
  printf("size of directory %d\n", size);
  closedir(dir);
}
