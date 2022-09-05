#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
  if(argc == 1) {
    printf("wgrep: searchterm [file ...]\n");
    exit(1);
  }
  if(argc == 2) {
    size_t sizeBuf = 10000;
    char buffer [sizeBuf];
    while(fgets(buffer, sizeBuf, stdin) > 0){
      if(strstr(buffer, argv[1]) != NULL){
	printf("%s",buffer);
      }
    }
  }
  for(int i = 2; i < argc; ++i){
    FILE* fp = fopen (argv[i], "r");
    if (fp == NULL){
      printf("wgrep: cannot open file\n");
      exit(1);
    }
    size_t sizebuf = 10000;
    char* buffer [sizebuf];
    while (getline(buffer, &sizebuf, fp) > 0){
      if(strstr(*buffer, argv[1]) != NULL){
	printf("%s",* buffer);
      }
    }
  }
  return 0;

}
