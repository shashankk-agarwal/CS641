#include <stdio.h>
#include <stdlib.h> 

int fp[64]= {
	 57,49,41,33,25,17,9,1,
	 59,51,43,35,27,19,11,3,
	 61,53,45,37,29,21,13,5,
	 63,55,47,39,31,23,15,7,
	 58,50,42,34,26,18,10,2,
	 60,52,44,36,28,20,12,4,
	 62,54,46,38,30,22,14,6,
	 64,56,48,40,32,24,16,8
};

int invp[32] = {
    	9, 17, 23, 31,
	13, 28, 2, 18,
	24, 16, 30, 6,
	26, 20, 10, 1,
	8, 14, 25, 3,
	4, 29, 11, 19,
	32, 12, 22, 7,
	5, 27, 15, 21
};

int expand[48] = {
	32, 1, 2, 3, 4, 5,
	4, 5, 6, 7, 8, 9,
	8, 9, 10, 11, 12, 13,
	12, 13, 14, 15, 16, 17,
	16, 17, 18, 19, 20, 21,
	20, 21, 22, 23, 24, 25,
	24, 25, 26, 27, 28, 29,
	28, 29, 30, 31, 32, 1
};

int sbox_inp(int i , int j){ 
    int out ;
    int arr[6] ; 
    arr[5] = i%2 ;
    arr[4] = j%2 ;
    arr[3] = (j/2)%2 ;
    arr[2] = (j/4)%2 ;
    arr[1] = (j/8)%2 ;
    arr[0] = (i/2)%2 ;
    out = arr[0]*32 + arr[1]*16 + arr[2]*8 + arr[3]*4 + arr[4]*2 + arr[5] ;
    return out ;
}

int sbox_outi(int out){ 
    int i ; 
    int ar[6] ;
    ar[0] = out%2 ;
    ar[1] = (out/2)%2 ;
    ar[2] = (out/4)%2 ;
    ar[3] = (out/8)%2 ;
    ar[4] = (out/16)%2 ;
    ar[5] = (out/32)%2 ;
    i = ar[5]*2 + ar[0] ;
    return i ;
}

int sbox_outj(int out){
    int j ; 
    int ar[6] ;
    ar[0] = out%2 ;
    ar[1] = (out/2)%2 ;
    ar[2] = (out/4)%2 ;
    ar[3] = (out/8)%2 ;
    ar[4] = (out/16)%2 ;
    ar[5] = (out/32)%2 ;
    j = ar[4]*8 + ar[3]*4 + ar[2]*2 + ar[1] ;
    return j ;
}

int sbox1[4][16] = {
    14, 4, 13, 1, 2, 15, 11, 8, 3 , 10, 6, 12, 5, 9, 0, 7,
  0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
  4, 1 , 14, 8, 13, 6, 2, 11, 15, 12, 9, 7,3, 10, 5, 0,
  15, 12, 8,2,4, 9, 1,7 , 5, 11, 3, 14, 10, 0, 6, 13   
};

int sbox2[4][16] = {
    15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0,5, 10,
  3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
  0, 14, 7, 11, 10, 4, 13, 1, 5, 8,12, 6, 9, 3, 2, 15,
  13, 8, 10, 1, 3, 15, 4, 2,11,6, 7, 12, 0,5, 14, 9
    }; 
    
int sbox3[4][16] = {
    10, 0, 9,14,6,3,15,5, 1, 13, 12, 7, 11, 4,2,8,
  13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
  13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12,5, 10, 14, 7,
  1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12
    };
    
int sbox4[4][16] = {
    7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
  13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
  10, 6, 9, 0, 12, 11, 7, 13, 15, 1 , 3, 14, 5, 2, 8, 4, 
  3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14
    };
    
int sbox5[4][16] = {
    2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9, 
  14, 11,2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6, 
  4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14, 
  11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3
    };
    
int sbox6[4][16] = {
    12, 1, 10, 15, 9, 2, 6,8, 0, 13, 3, 4, 14, 7, 5, 11, 
  10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8, 
  9, 14, 15, 5, 2,8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6, 
  4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13
    };
    
int sbox7[4][16] = {
     4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
  13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
  1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2, 
  6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12
    };
    
int sbox8[4][16] = {
    13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12,7, 
  1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2, 
  7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8, 
  2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11
    };

int main(){
	FILE *fp1 ;
	fp1 = fopen("ciphertext1.txt", "r") ;
	int key[8][64] ;
	for(int i=0 ; i<8 ; i++){
		for(int j=0 ; j<64 ; j++){
			key[i][j] = 0;
		}
	}
	for(int k=0 ; k<250 ; k++){
		char str1[17] ;
		char str2[17] ;
		fscanf(fp1, "%s", str1) ;
		fscanf(fp1, "%s", str2) ;
		
		int cipher1[64] ;
		int cipher2[64] ;
		for(int i=0 ; i<16 ; i++){
        		if(str1[i]=='f'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='g'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 1 ;
        		}
        		if(str1[i]=='h'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='i'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 1 ;
        		}	
        		if(str1[i]=='j'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='k'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 1 ;
        		}
        		if(str1[i]=='l'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='m'){
            			cipher1[4*i] = 0 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 1 ;
        		}	
        		if(str1[i]=='n'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='o'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 1 ;
        		}
        		if(str1[i]=='p'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='q'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 0 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 1 ;
        		}
        		if(str1[i]=='r'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='s'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 0 ;
            			cipher1[4*i+3] = 1 ;
        		}
        		if(str1[i]=='t'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 0 ;
        		}
        		if(str1[i]=='u'){
            			cipher1[4*i] = 1 ;
            			cipher1[4*i+1] = 1 ;
            			cipher1[4*i+2] = 1 ;
            			cipher1[4*i+3] = 1 ;
        		}
    		}
		
		for(int i=0 ; i<16 ; i++){
        		if(str2[i]=='f'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='g'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 1 ;
        		}
        		if(str2[i]=='h'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='i'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 1 ;
        		}	
        		if(str2[i]=='j'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='k'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 1 ;
        		}
        		if(str2[i]=='l'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='m'){
            			cipher2[4*i] = 0 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 1 ;
        		}	
        		if(str2[i]=='n'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='o'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 1 ;
        		}
        		if(str2[i]=='p'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='q'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 0 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 1 ;
        		}
        		if(str2[i]=='r'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='s'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 0 ;
            			cipher2[4*i+3] = 1 ;
        		}
        		if(str2[i]=='t'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 0 ;
        		}
        		if(str2[i]=='u'){
            			cipher2[4*i] = 1 ;
            			cipher2[4*i+1] = 1 ;
            			cipher2[4*i+2] = 1 ;
            			cipher2[4*i+3] = 1 ;
        		}
    		}
		
		int fp_cipher1[64] ;
		int fp_cipher2[64] ;
		for(int i=0 ; i<64 ; i++){
			fp_cipher1[i] = cipher1[fp[i]-1] ;
			fp_cipher2[i] = cipher2[fp[i]-1] ;
		}
		
		int exp_r5[48] ;
		int exp_R5[48] ;
		for(int i=0 ; i<48 ; i++){
			exp_r5[i] = fp_cipher1[expand[i]-1] ;
			exp_R5[i] = fp_cipher2[expand[i]-1] ;
		}
		
		int sbox_out_xor[32] ;
		for(int i=0 ; i<32 ; i++){
			sbox_out_xor[i] = fp_cipher1[invp[i]+31]^fp_cipher2[invp[i]+31] ;
		}
		
		int sbox_in_xor[48] ;
		for(int i=0 ; i<48 ; i++){
			sbox_in_xor[i] = exp_r5[i]^exp_R5[i] ;
		}
		
    		int input1[8] ;
    		int input2[8] ;
    		for(int i=0 ; i<8 ; i++){
        		input1[i] = exp_r5[6*i]*32 + exp_r5[6*i+1]*16 + exp_r5[6*i+2]*8 + exp_r5[6*i+3]*4 + exp_r5[6*i+4]*2 + exp_r5[6*i+5] ;
        		input2[i] = exp_R5[6*i]*32 + exp_R5[6*i+1]*16 + exp_R5[6*i+2]*8 + exp_R5[6*i+3]*4 + exp_R5[6*i+4]*2 + exp_R5[6*i+5] ;
    		}
    
    		int array[8] ;
    		for(int i=0 ; i<8 ; i++){
        		array[i] = sbox_in_xor[6*i]*32 + sbox_in_xor[6*i+1]*16 + sbox_in_xor[6*i+2]*8 + sbox_in_xor[6*i+3]*4 + sbox_in_xor[6*i+4]*2 + sbox_in_xor[6*i+5] ; 
    		}
    		
    		int sm_array[8] ;
    		for(int i=0 ; i<8 ; i++){
        		sm_array[i] = sbox_out_xor[4*i]*8 + sbox_out_xor[4*i+1]*4 + sbox_out_xor[4*i+2]*2 + sbox_out_xor[4*i+3] ; 
    		} 				
    		
    		for (int i=0 ; i<4 ; i++){
        		for(int j=0 ; j<16 ; j++){
            			int val1, val2, ii, jj ;
            			val1 = sbox_inp(i , j) ;
            			val2 = array[1]^val1 ;
            			ii = sbox_outi(val2) ;
            			jj = sbox_outj(val2) ;
        
            			int x = sbox2[i][j]^sbox2[ii][jj] ;
            			if(x==sm_array[1]){
                			key[1][val1^input1[1]] += 1 ;
            			}
        		}
    		}
    		for (int i=0 ; i<4 ; i++){
        		for(int j=0 ; j<16 ; j++){
            			int val1, val2, ii, jj ;
            			val1 = sbox_inp(i , j) ;
            			val2 = array[4]^val1 ;
            			ii = sbox_outi(val2) ;
            			jj = sbox_outj(val2) ;
        
            			int x = sbox5[i][j]^sbox5[ii][jj] ;
            			if(x==sm_array[4]){
                			key[4][val1^input1[4]] += 1 ;
            			}
        		}
    		}
    		for (int i=0 ; i<4 ; i++){
        		for(int j=0 ; j<16 ; j++){
            			int val1, val2, ii, jj ;
            			val1 = sbox_inp(i , j) ;
            			val2 = array[5]^val1 ;
            			ii = sbox_outi(val2) ;
            			jj = sbox_outj(val2) ;
        
            			int x = sbox6[i][j]^sbox6[ii][jj] ;
            			if(x==sm_array[5]){
                			key[5][val1^input1[5]] += 1 ;
            			}
        		}
    		}
    		for (int i=0 ; i<4 ; i++){
        		for(int j=0 ; j<16 ; j++){
            			int val1, val2, ii, jj ;
            			val1 = sbox_inp(i , j) ;
            			val2 = array[6]^val1 ;
            			ii = sbox_outi(val2) ;
            			jj = sbox_outj(val2) ;
        
            			int x = sbox7[i][j]^sbox7[ii][jj] ;
            			if(x==sm_array[6]){
                			key[6][val1^input1[6]] += 1 ;
            			}
        		}
    		}
    		for (int i=0 ; i<4 ; i++){
        		for(int j=0 ; j<16 ; j++){
            			int val1, val2, ii, jj ;
            			val1 = sbox_inp(i , j) ;
            			val2 = array[7]^val1 ;
            			ii = sbox_outi(val2) ;
            			jj = sbox_outj(val2) ;
        
            			int x = sbox8[i][j]^sbox8[ii][jj] ;
            			if(x==sm_array[7]){
                			key[7][val1^input1[7]] += 1 ;
            			}
        		}
    		}
	}
	
	FILE *fpp = fopen("key1.txt", "a") ;
	int max = 0 ;
	int z = 0 ; 
	for(int i=0 ; i<64 ; i++){
		if(key[1][i] > max){
			 max = key[1][i] ;
			 z = i ;
		}
	}
	fprintf(fpp, "KEY-6-II = %d\n", z);
	
	max = 0 ;
	z = 0 ;
	for(int i=0 ; i<64 ; i++){
		if(key[4][i] > max){
			 max = key[4][i] ;
			 z = i ;
		}
	}
	fprintf(fpp, "KEY-6-V = %d\n", z);
	
	max = 0 ;
	z = 0 ;
	for(int i=0 ; i<64 ; i++){
		if(key[5][i] > max){
			 max = key[5][i] ;
			 z = i ;
		}
	}
	fprintf(fpp, "KEY-6-VI = %d\n", z);
	
	max = 0 ;
	z = 0 ;
	for(int i=0 ; i<64 ; i++){
		if(key[6][i] > max){
			 max = key[6][i] ;
			 z = i ;
		}
	}
	fprintf(fpp, "KEY-6-VII = %d\n", z);
	
	max = 0 ;
	z = 0 ;
	for(int i=0 ; i<64 ; i++){
		if(key[7][i] > max){
			 max = key[7][i] ;
			 z = i ;
		}
	}
	fprintf(fpp, "KEY-6-VIII = %d\n", z);
	
	fclose(fp1) ;
	fclose(fpp) ;
}
