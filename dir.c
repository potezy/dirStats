#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>


void main(){
  DIR * dir;
  struct dirent * d;
  int size;
  if((dir = opendir(".")) != NULL){
    while(d = readdir(dir)){
      size+=
      if((d->d_type) == DT_DIR) printf("%s: directory\n" , d->d_name);
      else printf("%s\n" , d->d_name);
    }
  }
  closedir(dir);
}
