#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp ; 
	fp = fopen("commands.txt", "a") ;
	FILE *fpp ;
	fpp = fopen("plain.txt", "r") ;
	
	fprintf(fp, "%s" ,"Horcrux\n") ;
	fprintf(fp, "%s" ,"team_horcrux123\n") ;
	fprintf(fp, "%s" ,"5\n") ;
	fprintf(fp, "%s" ,"go\n") ;
	fprintf(fp, "%s" ,"wave\n") ;
	fprintf(fp, "%s" ,"dive\n") ;
	fprintf(fp, "%s" ,"go\n") ;
	fprintf(fp, "%s" ,"read\n") ;
	for(int i=0 ; i<128*8 ; i++){
		char str[17] ;
		fscanf(fpp, "%s", str) ;
		fprintf(fp, "%s", str) ;
		fprintf(fp, "%s", "\n") ;
		fprintf(fp, "%s", "c\n") ;
	}
	fclose(fp) ;
	fclose(fpp) ;
}
