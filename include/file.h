#ifndef _FILE_H_
#define _FILE_H_

void file_open(FILE *f, char file_name[], char mode[]){
	f  = fopen(file_name, mode);
		
}
/*
void write_file(FILE *f, char content[]){
	fprintf(f, content);
}
*/
void close_file(FILE *f){
	fclose(f);
}
#endif
