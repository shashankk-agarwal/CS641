#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <bits/stdc++.h>

using namespace std;

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

int * regression(int text[]){//same as expansion
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

int * compression(int text[]){// same as expansion
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
/*
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

*/

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
    
    int key1[48] = {
        0,1,1,0,0,1,0,1,1,1,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0
    };
    int key2[48] = {
       1,0,0,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,1,0,1,1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0
    };
    int key3[48] = {
        1,0,0,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,1
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
    
    int * finaltext = initial_permutation(plaintext) ;

    int ciphertext_left[32] ;
    int ciphertext_right[32] ;
    for(int i=0 ; i<32 ; i++){
        ciphertext_left[i] = finaltext[i] ;
    }
    for(int i=0 ; i<32 ; i++){
        ciphertext_right[i] = finaltext[i+32] ;
    }
    int xorvalue[48] , xorvalue2[48] , xorvalue3[48];
    
    int * expansion_text = expansion(ciphertext_right) ;//decryption for round 3
    for(int i=0 ; i<48 ; i++){
        xorvalue[i] = expansion_text[i]^key3[i];
    }//printf("\n") ;
    int row1,row2,row3,row4,row5,row6,row7,row8,column1,column2,column3,column4,column5,column6,column7,column8 ;
        
    row1 = xorvalue[0]*2 + xorvalue[5] ;
    column1 = xorvalue[1]*8 + xorvalue[2]*4 + xorvalue[3]*2 + xorvalue[4] ;
    row2 = xorvalue[6]*2 + xorvalue[11] ;
    column2 = xorvalue[7]*8 + xorvalue[8]*4 + xorvalue[9]*2 + xorvalue[10] ;
    row3 = xorvalue[12]*2 + xorvalue[17] ;
    column3 = xorvalue[13]*8 + xorvalue[14]*4 + xorvalue[15]*2 + xorvalue[16] ;
    row4 = xorvalue[18]*2 + xorvalue[23] ;
    column4 = xorvalue[19]*8 + xorvalue[20]*4 + xorvalue[21]*2 + xorvalue[22] ;
    row5 = xorvalue[24]*2 + xorvalue[29] ;
    column5 = xorvalue[25]*8 + xorvalue[26]*4 + xorvalue[27]*2 + xorvalue[28] ;
    row6 = xorvalue[30]*2 + xorvalue[35] ;
    column6 = xorvalue[31]*8 + xorvalue[32]*4 + xorvalue[33]*2 + xorvalue[34] ;
    row7 = xorvalue[36]*2 + xorvalue[41] ;
    column7 = xorvalue[37]*8 + xorvalue[38]*4 + xorvalue[39]*2 + xorvalue[40] ;
    row8 = xorvalue[42]*2 + xorvalue[47] ;
    column8 = xorvalue[43]*8 + xorvalue[44]*4 + xorvalue[45]*2 + xorvalue[46] ;
        
    int out[8] ;
        out[0] = sbox1[row1][column1] ;
        out[1] = sbox2[row2][column2] ;
        out[2] = sbox3[row3][column3] ;
        out[3] = sbox4[row4][column4] ;
        out[4] = sbox5[row5][column5] ;
        out[5] = sbox6[row6][column6] ;
        out[6] = sbox7[row7][column7] ;
        out[7] = sbox8[row8][column8] ;
        
        int answer[32] ;
        for(int i=0 ; i<8 ; i++){
            answer[4*i] = (out[i]/8)%2 ;
            answer[4*i+1] = (out[i]/4)%2 ;
            answer[4*i+2] = (out[i]/2)%2 ;
            answer[4*i+3] = out[i]%2 ;
        }
        int * finalanswer = permutation(answer) ;
        int pplaintext_right[32] ;
        for(int i=0 ; i<32 ; i++){
            pplaintext_right[i] = finalanswer[i]^ciphertext_left[i] ;
        }
    
        int * expansion_text2 = regression(pplaintext_right); //decryption for round 2
        for(int i=0 ; i<48 ; i++){
            xorvalue2[i] = expansion_text2[i]^key2[i] ; 
        }
        int row[8] , column[8] ;
        for(int i=0 ; i<8 ; i++){
            row[i] = xorvalue2[6*i]*2 + xorvalue2[6*i+5] ;
            column[i] = xorvalue2[6*i+1]*8 + xorvalue2[6*i+2]*4 + xorvalue2[6*i+3]*2 + xorvalue2[6*i+4] ;
        }
        int out2[8] ;
    
        out2[0] = sbox1[row[0]][column[0]] ;
        out2[1] = sbox2[row[1]][column[1]] ;
        out2[2] = sbox3[row[2]][column[2]] ;
        out2[3] = sbox4[row[3]][column[3]] ;
        out2[4] = sbox5[row[4]][column[4]] ;
        out2[5] = sbox6[row[5]][column[5]] ;
        out2[6] = sbox7[row[6]][column[6]] ;
        out2[7] = sbox8[row[7]][column[7]] ;
        
        int answer2[32] ;
        for(int i=0 ; i<8 ; i++){
            answer2[4*i] = (out2[i]/8)%2 ;
            answer2[4*i+1] = (out2[i]/4)%2 ;
            answer2[4*i+2] = (out2[i]/2)%2 ;
            answer2[4*i+3] = out2[i]%2 ;
        }
        int * finalanswer2 = permutation(answer2) ;
        int plaintext_right[32] ;
        for(int i=0 ; i<32 ; i++){
            plaintext_right[i] = finalanswer2[i]^ciphertext_right[i] ;
        }
        int * expansion_text3 = compression(plaintext_right); //decryption for round 1
        for(int i=0 ; i<48 ; i++){
            xorvalue3[i] = expansion_text3[i]^key1[i] ; 
        }
        int rowd[8] , columnd[8] ;
        for(int i=0 ; i<8 ; i++){
            rowd[i] = xorvalue3[6*i]*2 + xorvalue3[6*i+5] ;
            columnd[i] = xorvalue3[6*i+1]*8 + xorvalue3[6*i+2]*4 + xorvalue3[6*i+3]*2 + xorvalue3[6*i+4] ;
        }
        int out3[8] ;
    
        out3[0] = sbox1[rowd[0]][columnd[0]] ;
        out3[1] = sbox2[rowd[1]][columnd[1]] ;
        out3[2] = sbox3[rowd[2]][columnd[2]] ;
        out3[3] = sbox4[rowd[3]][columnd[3]] ;
        out3[4] = sbox5[rowd[4]][columnd[4]] ;
        out3[5] = sbox6[rowd[5]][columnd[5]] ;
        out3[6] = sbox7[rowd[6]][columnd[6]] ;
        out3[7] = sbox8[rowd[7]][columnd[7]] ;
        
        int answer3[32] ;
        for(int i=0 ; i<8 ; i++){
            answer3[4*i] = (out3[i]/8)%2 ;
            answer3[4*i+1] = (out3[i]/4)%2 ;
            answer3[4*i+2] = (out3[i]/2)%2 ;
            answer3[4*i+3] = out3[i]%2 ;
        }
        int * finalanswer3 = permutation(answer3) ;
        int plaintext_left[32] ;
        for(int i=0 ; i<32 ; i++){
            plaintext_left[i] = finalanswer3[i]^pplaintext_right[i] ;
        }
        int result[64] ;
        for(int i=0 ; i<32 ; i++){
            result[i] = plaintext_left[i] ;
            result[i+32]= plaintext_right[i] ;
        }
        int *finalresult = rev_initial_permutation(result) ;
        
        
        for(int i=0 ; i<32 ; i++){
            if(i%4==0){
                printf(" ") ;
            }
            printf("%d",finalresult[i]) ;
        }printf("\n") ;
        for(int i=0 ; i<32 ; i++){
            if(i%4==0){
                printf(" ") ;
            }
            printf("%d",finalresult[i+32]) ;
        }
}//will get the required password by giving coded password as input....
  
