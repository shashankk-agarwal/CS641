#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp ; 
	fp = fopen("commands.txt", "a") ;
	FILE *fpp ;
	fpp = fopen("plaintext2.txt", "r") ;
	
	fprintf(fp, "%s" ,"Horcrux\n") ;
	fprintf(fp, "%s" ,"team_horcrux123\n") ;
	fprintf(fp, "%s" ,"4\n") ;
	fprintf(fp, "%s" ,"read\n") ;
	for(int i=0 ; i<500 ; i++){
		char str[17] ;
		fscanf(fpp, "%s", str) ;
		fprintf(fp, "%s", str) ;
		fprintf(fp, "%s", "\n") ;
		fprintf(fp, "%s", "c\n") ;
	}
	fclose(fp) ;
	fclose(fpp) ;
}
