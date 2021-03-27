#include <stdio.h>
#include <stdlib.h> 

char conversion(int k){
	if(k==0){
		return 'f' ;
	}
	else if(k==1){
		return 'g' ;
	}
	else if(k==2){
		return 'h' ;
	}
	else if(k==3){
		return 'i' ;
	}
	else if(k==4){
		return 'j' ;
	}
	else if(k==5){
		return 'k' ;
	}
	else if(k==6){
		return 'l' ;
	}
	else if(k==7){
		return 'm' ;
	}
	else if(k==8){
		return 'n' ;
	}
	else if(k==9){
		return 'o' ;
	}
	else if(k==10){
		return 'p' ;
	}
	else if(k==11){
		return 'q' ;
	}
	else if(k==12){
		return 'r' ;
	}
	else if(k==13){
		return 's' ;
	}
	else if(k==14){
		return 't' ;
	}
	else if(k==15){
		return 'u' ;
	}
	return '\0' ;
}

int main(){
	int xor_val1[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ;
	int xor_val2[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ;
	FILE *fp1 ;
	fp1 = fopen("plaintext1.txt", "a") ;
	FILE *fp2 ;
	fp2 = fopen("plaintext2.txt", "a") ;
	for(int i=0 ; i<250 ; i++){
		int temp1[64];
		int temp2[64] ;
		int temp3[64] ;
		char str1[17] ;
		char str2[17] ;
		char str3[17] ;
		for(int j=0 ; j<64 ; j++){
			temp1[j] = rand()%2 ;
			temp2[j] = temp1[j]^xor_val1[j] ;
			temp3[j] = temp1[j]^xor_val2[j] ;
		}
		for(int j=0 ; j<16 ; j++){
			int val1 = 8*temp1[4*j] + 4*temp1[4*j+1] + 2*temp1[4*j+2] + temp1[4*j+3] ;
			str1[j] = conversion(val1) ; 
			int val2 = 8*temp2[4*j] + 4*temp2[4*j+1] + 2*temp2[4*j+2] + temp2[4*j+3] ; 
			str2[j] = conversion(val2) ;
			int val3 = 8*temp3[4*j] + 4*temp3[4*j+1] + 2*temp3[4*j+2] + temp3[4*j+3] ; 
			str3[j] = conversion(val3) ;
		}
		str1[16] = '\0' ;
		str2[16] = '\0' ;
		str3[16] = '\0' ;
		fprintf(fp1, "%s", str1) ;
		fprintf(fp2, "%s", str1) ;
		fprintf(fp1, "%s", "\n") ; 
		fprintf(fp2, "%s", "\n") ;
		fprintf(fp1, "%s", str2) ;
		fprintf(fp2, "%s", str3) ;
		fprintf(fp1, "%s", "\n") ; 
		fprintf(fp2, "%s", "\n") ;
	}
	fclose(fp1) ;
	fclose(fp2) ;
}
