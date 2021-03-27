//will get the possible values of key3(third round)
#include <iostream> 
#include <stdio.h>
#include <stdint.h>

int * expansion(int text[]){
    static int exp_text[48] ;
    exp_text[0] = text[31] ;
    exp_text[1] = text[0] ;
    exp_text[2] = text[1] ;
    exp_text[3] = text[2] ;
    exp_text[4] = text[3] ;
    exp_text[5] = text[4] ;
    exp_text[6] = text[3] ;
    exp_text[7] = text[4] ;
    exp_text[8] = text[5] ;
    exp_text[9] = text[6] ;
    exp_text[10] = text[7] ;
    exp_text[11] = text[8] ;
    exp_text[12] = text[7] ;
    exp_text[13] = text[8] ;
    exp_text[14] = text[9] ;
    exp_text[15] = text[10] ;
    exp_text[16] = text[11] ;
    exp_text[17] = text[12] ;
    exp_text[18] = text[11] ;
    exp_text[19] = text[12] ;
    exp_text[20] = text[13] ;
    exp_text[21] = text[14] ;
    exp_text[22] = text[15] ;
    exp_text[23] = text[16] ;
    exp_text[24] = text[15] ;
    exp_text[25] = text[16] ;
    exp_text[26] = text[17] ;
    exp_text[27] = text[18] ;
    exp_text[28] = text[19] ;
    exp_text[29] = text[20] ;
    exp_text[30] = text[19] ;
    exp_text[31] = text[20] ;
    exp_text[32] = text[21] ;
    exp_text[33] = text[22] ;
    exp_text[34] = text[23] ;
    exp_text[35] = text[24] ;
    exp_text[36] = text[23] ;
    exp_text[37] = text[24] ;
    exp_text[38] = text[25] ;
    exp_text[39] = text[26] ;
    exp_text[40] = text[27] ;
    exp_text[41] = text[28] ;
    exp_text[42] = text[27] ;
    exp_text[43] = text[28] ;
    exp_text[44] = text[29] ;
    exp_text[45] = text[30] ;
    exp_text[46] = text[31] ;
    exp_text[47] = text[0] ;
    return exp_text ;
}

int * regression(int text[]){ //same as expansion
    static int exp_text[48] ;
    exp_text[0] = text[31] ;
    exp_text[1] = text[0] ;
    exp_text[2] = text[1] ;
    exp_text[3] = text[2] ;
    exp_text[4] = text[3] ;
    exp_text[5] = text[4] ;
    exp_text[6] = text[3] ;
    exp_text[7] = text[4] ;
    exp_text[8] = text[5] ;
    exp_text[9] = text[6] ;
    exp_text[10] = text[7] ;
    exp_text[11] = text[8] ;
    exp_text[12] = text[7] ;
    exp_text[13] = text[8] ;
    exp_text[14] = text[9] ;
    exp_text[15] = text[10] ;
    exp_text[16] = text[11] ;
    exp_text[17] = text[12] ;
    exp_text[18] = text[11] ;
    exp_text[19] = text[12] ;
    exp_text[20] = text[13] ;
    exp_text[21] = text[14] ;
    exp_text[22] = text[15] ;
    exp_text[23] = text[16] ;
    exp_text[24] = text[15] ;
    exp_text[25] = text[16] ;
    exp_text[26] = text[17] ;
    exp_text[27] = text[18] ;
    exp_text[28] = text[19] ;
    exp_text[29] = text[20] ;
    exp_text[30] = text[19] ;
    exp_text[31] = text[20] ;
    exp_text[32] = text[21] ;
    exp_text[33] = text[22] ;
    exp_text[34] = text[23] ;
    exp_text[35] = text[24] ;
    exp_text[36] = text[23] ;
    exp_text[37] = text[24] ;
    exp_text[38] = text[25] ;
    exp_text[39] = text[26] ;
    exp_text[40] = text[27] ;
    exp_text[41] = text[28] ;
    exp_text[42] = text[27] ;
    exp_text[43] = text[28] ;
    exp_text[44] = text[29] ;
    exp_text[45] = text[30] ;
    exp_text[46] = text[31] ;
    exp_text[47] = text[0] ;
    return exp_text ;
}

int * initial_permutation(int text[]){
    static int per_text[64] ;
    per_text[0] = text[57] ;
    per_text[1] = text[49] ;
    per_text[2] = text[41] ;
    per_text[3] = text[33] ;
    per_text[4] = text[25] ;
    per_text[5] = text[17] ;
    per_text[6] = text[9] ;
    per_text[7] = text[1] ;
    per_text[8] = text[59] ;
    per_text[9] = text[51] ;
    per_text[10] = text[43] ;
    per_text[11] = text[35] ;
    per_text[12] = text[27] ;
    per_text[13] = text[19] ;
    per_text[14] = text[11] ;
    per_text[15] = text[3] ;
    per_text[16] = text[61] ;
    per_text[17] = text[53] ;
    per_text[18] = text[45] ;
    per_text[19] = text[37] ;
    per_text[20] = text[29] ;
    per_text[21] = text[21] ;
    per_text[22] = text[13] ;
    per_text[23] = text[5] ;
    per_text[24] = text[63] ;
    per_text[25] = text[55] ;
    per_text[26] = text[47] ;
    per_text[27] = text[39] ;
    per_text[28] = text[31] ;
    per_text[29] = text[23] ;
    per_text[30] = text[15] ;
    per_text[31] = text[7] ;
    per_text[32] = text[56] ;
    per_text[33] = text[48] ;
    per_text[34] = text[40] ;
    per_text[35] = text[32] ;
    per_text[36] = text[24] ;
    per_text[37] = text[16] ;
    per_text[38] = text[8] ;
    per_text[39] = text[0] ;
    per_text[40] = text[58] ;
    per_text[41] = text[50] ;
    per_text[42] = text[42] ;
    per_text[43] = text[34] ;
    per_text[44] = text[26] ;
    per_text[45] = text[18] ;
    per_text[46] = text[10] ;
    per_text[47] = text[2] ;
    per_text[48] = text[60] ;
    per_text[49] = text[52] ;
    per_text[50] = text[44] ;
    per_text[51] = text[36] ;
    per_text[52] = text[28] ;
    per_text[53] = text[20] ;
    per_text[54] = text[12] ;
    per_text[55] = text[4] ;
    per_text[56] = text[62] ;
    per_text[57] = text[54] ;
    per_text[58] = text[46] ;
    per_text[59] = text[38] ;
    per_text[60] = text[30] ;
    per_text[61] = text[22] ;
    per_text[62] = text[14] ;
    per_text[63] = text[6] ;
    
    return per_text ;
}

int * rev_initial_permutation(int per_text[]){
    static int text[64] ;
    text[57] = per_text[0]  ;
    text[49] = per_text[1]  ;
    text[41] = per_text[2]  ;
    text[33] = per_text[3]  ;
    text[25] = per_text[4]  ;
    text[17] = per_text[5]  ;
    text[9] = per_text[6] ;
    text[1] = per_text[7] ;
    text[59] = per_text[8];
    text[51] = per_text[9];
    text[43] = per_text[10] ;
    text[35] = per_text[11] ;
    text[27] = per_text[12] ;
    text[19] = per_text[13] ;
    text[11] = per_text[14] ;
    text[3] = per_text[15] ;
    text[61] = per_text[16] ;
    text[53] = per_text[17] ;
    text[45] = per_text[18] ;
    text[37] = per_text[19] ;
    text[29] = per_text[20] ;
    text[21] = per_text[21] ;
    text[13] = per_text[22] ;
    text[5]  = per_text[23] ;
    text[63] = per_text[24] ;
    text[55] = per_text[25] ;
    text[47] = per_text[26] ;
    text[39] = per_text[27] ;
    text[31] = per_text[28] ;
    text[23] = per_text[29] ;
    text[15] = per_text[30] ;
    text[7] = per_text[31] ;
    text[56] = per_text[32] ;
    text[48] = per_text[33] ;
    text[40] = per_text[34] ;
    text[32] = per_text[35] ;
    text[24] = per_text[36] ;
    text[16] = per_text[37] ;
    text[8]  = per_text[38] ;
    text[0]  = per_text[39] ;
    text[58] = per_text[40] ;
    text[50] = per_text[41] ;
    text[42] = per_text[42] ;
    text[34] = per_text[43] ;
    text[26] = per_text[44] ;
    text[18] = per_text[45] ;
    text[10] = per_text[46] ;
    text[2]  = per_text[47] ;
    text[60] = per_text[48] ;
    text[52] = per_text[49] ;
    text[44] = per_text[50] ;
    text[36] = per_text[51] ;
    text[28] = per_text[52] ;
    text[20] = per_text[53] ;
    text[12] = per_text[54] ;
    text[4]  = per_text[55] ;
    text[62] = per_text[56] ;
    text[54] = per_text[57] ;
    text[46] = per_text[58] ;
    text[38] = per_text[59] ;
    text[30] = per_text[60] ;
    text[22] = per_text[61] ;
    text[14] = per_text[62] ;
    text[6]  = per_text[63];
    
    return text ;
}

int *permutation(int text[]){
    static int per_text[32] ;
    per_text[0] = text[15] ;
    per_text[1] = text[6] ;
    per_text[2] = text[19] ;
    per_text[3] = text[20] ;
    per_text[4] = text[28] ;
    per_text[5] = text[11] ;
    per_text[6] = text[27] ;
    per_text[7] = text[16] ;
    per_text[8] = text[0] ;
    per_text[9] = text[14] ;
    per_text[10] = text[22] ;
    per_text[11] = text[25] ;
    per_text[12] = text[4] ;
    per_text[13] = text[17] ;
    per_text[14] = text[30] ;
    per_text[15] = text[9] ;
    per_text[16] = text[1] ;
    per_text[17] = text[7] ;
    per_text[18] = text[23] ;
    per_text[19] = text[13] ;
    per_text[20] = text[31] ;
    per_text[21] = text[26] ;
    per_text[22] = text[2] ;
    per_text[23] = text[8] ;
    per_text[24] = text[18] ;
    per_text[25] = text[12] ;
    per_text[26] = text[29] ;
    per_text[27] = text[5] ;
    per_text[28] = text[21] ;
    per_text[29] = text[10] ;
    per_text[30] = text[3] ;
    per_text[31] = text[24] ;
    return per_text ;
}

int * reverse_permutation(int per_text[]){
    static int text[32] ;
    text[15] = per_text[0] ;
    text[6] = per_text[1] ;
    text[19] = per_text[2] ;
    text[20] = per_text[3] ;
    text[28] = per_text[4] ;
    text[11] = per_text[5] ;
    text[27] = per_text[6] ;
    text[16] = per_text[7] ;
    text[0]  = per_text[8] ;
    text[14] = per_text[9] ;
    text[22] = per_text[10] ;
    text[25] = per_text[11] ;
    text[4] = per_text[12] ;
    text[17] = per_text[13] ;
    text[30] = per_text[14] ;
    text[9] = per_text[15] ;
    text[1] = per_text[16] ;
    text[7] = per_text[17] ;
    text[23] = per_text[18] ;
    text[13] = per_text[19] ;
    text[31] = per_text[20] ;
    text[26] = per_text[21] ;
    text[2] = per_text[22] ;
    text[8] = per_text[23] ;
    text[18] = per_text[24] ;
    text[12] = per_text[25] ;
    text[29] =  per_text[26] ;
    text[5] = per_text[27] ;
    text[21] = per_text[28] ;
    text[10] = per_text[29] ;
    text[3] = per_text[30] ;
    text[24] = per_text[31] ;
    return text ;
}
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



int main(){
    int sbox1[4][16] = {
    14, 4,13, 1, 2,15,11, 8, 3,10, 6,12, 5, 9, 0, 7,
     0,15, 7, 4,14, 2,13, 1,10, 6,12,11, 9, 5, 3, 8,
     4, 1,14, 8,13, 6, 2,11,15,12, 9, 7, 3,10, 5, 0,
    15,12, 8, 2, 4, 9, 1, 7, 5,11, 3,14,10, 0, 6,13   
};

    int sbox2[4][16] = {
    15, 1,8,14, 6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10,
   3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5,
   0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15,
  13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9,
    }; 
    
    int sbox3[4][16] = {
    10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8,
  13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1,
  13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7,
   1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12,
    };
    
    int sbox4[4][16] = {
    7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15,
  13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9,
  10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4,
   3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2, 14,
    };
    
    int sbox5[4][16] = {
    2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9,
  14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6,
   4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14,
  11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5,  3,
    };
    
    int sbox6[4][16] = {
    12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11,
  10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8,
   9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6,
   4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13,
    };
    
    int sbox7[4][16] = {
     4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1,
  13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6,
   1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2,
   6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12,
    };
    
    int sbox8[4][16] = {
    13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7,
   1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2,
   7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8,
   2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11
    };
    
    
int plaintext[64] ;
    char string[17] ;
    scanf("%s\n",string) ;
    for(int i=0 ; i<16 ; i++){
        if(string[i]=='f'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='g'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='h'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='i'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='j'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='k'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='l'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='m'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='n'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='o'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='p'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='q'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='r'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='s'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='t'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='u'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
    }
    
    int * finaltext1 = initial_permutation(plaintext) ;
    int plaintext_left1[32] ;
    int plaintext_right1[32] ;
    for(int i=0 ; i<32 ; i++){
        plaintext_left1[i] = finaltext1[i] ;
    }
    for(int i=0 ; i<32 ; i++){
        plaintext_right1[i] = finaltext1[i+32] ;
    }
    
    scanf("%s\n",string) ;
    for(int i=0 ; i<16 ; i++){
        if(string[i]=='f'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='g'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='h'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='i'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='j'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='k'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='l'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='m'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='n'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='o'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='p'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='q'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='r'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='s'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='t'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='u'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
    }
    finaltext1 = initial_permutation(plaintext) ;
    int ciphertext_left1[32] ;
    int ciphertext_right1[32] ;
    for(int i=0 ; i<32 ; i++){
        ciphertext_left1[i] = finaltext1[i] ;
    }
    for(int i=0 ; i<32 ; i++){
        ciphertext_right1[i] = finaltext1[i+32] ;
    }


    scanf("%s\n",string) ;
    for(int i=0 ; i<16 ; i++){
        if(string[i]=='f'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='g'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='h'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='i'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='j'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='k'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='l'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='m'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='n'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='o'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='p'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='q'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='r'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='s'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='t'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='u'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
    }
    int * finaltext2 = initial_permutation(plaintext) ;
    int plaintext_left2[32] ;
    int plaintext_right2[32] ;
    for(int i=0 ; i<32 ; i++){
        plaintext_left2[i] = finaltext2[i] ;
    }
    for(int i=0 ; i<32 ; i++){
        plaintext_right2[i] = finaltext2[i+32] ;
    }
    
    scanf("%s\n",string) ;
    for(int i=0 ; i<16 ; i++){
        if(string[i]=='f'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='g'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='h'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='i'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='j'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='k'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='l'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='m'){
            plaintext[4*i] = 0 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='n'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='o'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='p'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='q'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 0 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='r'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='s'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 0 ;
            plaintext[4*i+3] = 1 ;
        }
        if(string[i]=='t'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 0 ;
        }
        if(string[i]=='u'){
            plaintext[4*i] = 1 ;
            plaintext[4*i+1] = 1 ;
            plaintext[4*i+2] = 1 ;
            plaintext[4*i+3] = 1 ;
        }
    }
    finaltext2 = initial_permutation(plaintext) ;
    int ciphertext_left2[32] ;
    int ciphertext_right2[32] ;
    for(int i=0 ; i<32 ; i++){
        ciphertext_left2[i] = finaltext2[i] ;
    }
    for(int i=0 ; i<32 ; i++){
        ciphertext_right2[i] = finaltext2[i+32] ;
    }
    
    //finding key 3 starts
    int * expansion_text1 = expansion(ciphertext_right1) ;
    int * expansion_text2 = regression(ciphertext_right2) ;
    int input1[8] ;
    int input2[8] ;
    for(int i=0 ; i<8 ; i++){
        input1[i] = expansion_text1[6*i]*32 + expansion_text1[6*i+1]*16 + expansion_text1[6*i+2]*8 + expansion_text1[6*i+3]*4 + expansion_text1[6*i+4]*2 + expansion_text1[6*i+5] ;
        input2[i] = expansion_text2[6*i]*32 + expansion_text2[6*i+1]*16 + expansion_text2[6*i+2]*8 + expansion_text2[6*i+3]*4 + expansion_text2[6*i+4]*2 + expansion_text2[6*i+5] ;
    }
    
    int tree[32] ;//output xor of p-box in 3rd round
    for(int i=0 ; i<32 ; i++){
        tree[i] = plaintext_left1[i]^plaintext_left2[i]^ciphertext_left1[i]^ciphertext_left2[i];
    }
    int * ans = reverse_permutation(tree) ;//ans : output xor of sbox 
    int ques[48] ; //input xor of s-box
    for(int i=0 ; i<48 ; i++){
        ques[i] = expansion_text1[i]^expansion_text2[i] ;
    }
    
    
    int array[8] ;
    for(int i=0 ; i<8 ; i++){
        array[i] = ques[6*i]*32 + ques[6*i+1]*16 + ques[6*i+2]*8 + ques[6*i+3]*4 + ques[6*i+4]*2 + ques[6*i+5] ; 
    }
    int sm_array[8] ;
    for(int i=0 ; i<8 ; i++){
        sm_array[i] = ans[4*i]*8 + ans[4*i+1]*4 + ans[4*i+2]*2 + ans[4*i+3] ; 
    }
    /*for(int i=0 ; i<8 ; i++){
        printf("%d ",sm_array[i]);
        
    }printf("\nxor value") ;*/
    
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[0]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox1[i][j]^sbox1[ii][jj] ;
            if(x==sm_array[0]){
                fin1 = input1[0]^q ;
                fin2 = input2[0]^qq ;//possible values of key 3 (first 6 bit used in sbox1)
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[1]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox2[i][j]^sbox2[ii][jj] ;
            if(x==sm_array[1]){
                fin1 = input1[1]^q ;
                fin2 = input2[1]^qq ;//possible values of key 3 (next 6 bit used in sbox2) and so on for other s boxes...
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[2]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox3[i][j]^sbox3[ii][jj] ;
            if(x==sm_array[2]){
                fin1 = input1[2]^q ;
                fin2 = input2[2]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq, fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[3]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox4[i][j]^sbox4[ii][jj] ;
            if(x==sm_array[3]){
                fin1 = input1[3]^q ;
                fin2 = input2[3]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[4]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox5[i][j]^sbox5[ii][jj] ;
            if(x==sm_array[4]){
                fin1 = input1[4]^q ;
                fin2 = input2[4]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[5]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox6[i][j]^sbox6[ii][jj] ;
            if(x==sm_array[5]){
                fin1 = input1[5]^q ;
                fin2 = input2[5]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[6]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox7[i][j]^sbox7[ii][jj] ;
            if(x==sm_array[6]){
                fin1 = input1[6]^q ;
                fin2 = input2[6]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    for (int i=0 ; i<4 ; i++){
        for(int j=0 ; j<16 ; j++){
            int q , ii, jj , qq , fin1 , fin2;
            q = sbox_inp(i , j) ;
            qq = array[7]^q ;
            ii = sbox_outi(qq) ;
            jj = sbox_outj(qq) ;
        
            int x = sbox8[i][j]^sbox8[ii][jj] ;
            if(x==sm_array[7]){
                fin1 = input1[7]^q ;
                fin2 = input2[7]^qq ;
                printf("%d:%d  ",fin1 , fin2) ;
            }
        }
    }
    printf("\n") ;
    
}//give two plaintext and ciphertext pairs as input and it will give possible values of k3 as output;
