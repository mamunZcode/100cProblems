#include<stdio.h>

main() {
   FILE *fp;

   fp = fopen("myFile.txt", "w");
   fprintf(fp, "%d", 100);
   fclose(fp);
}
