#include <stdio.h>

void matmult(int result[3][3], int first[3][3], int second[3][3]);
void matadd (int result[3][3], int first[3][3], int second[3][3]);

int main(){
  int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[3][3] = {{1, 2, 0}, {3, 4, 5}, {0, 6, 7}};
  int AB[3][3];
  int result[3][3];

  printf("   [ %d %d %d ]\n", A[0][0], A[0][1], A[0][2]);
  printf("A =| %d %d %d |\n", A[1][0], A[1][1], A[1][2]);
  printf("   [ %d %d %d ]\n\n", A[2][0], A[2][1], A[2][2]);

  printf("   [ %d %d %d ]\n", B[0][0], B[0][1], B[0][2]);
  printf("B= | %d %d %d |\n", B[1][0], B[1][1], B[1][2]);
  printf("   [ %d %d %d ]\n\n", B[2][0], B[2][1], B[2][2]);

  //function call for A*B                                                                                                                                              
  matmult(AB, A, B);

  printf("       [ %d %d %d ]\n", AB[0][0], AB[0][1], AB[0][2]);
  printf("A*B=   |%d %d %d |\n", AB[1][0], AB[1][1], AB[1][2]);
  printf("       [%d %d %d]\n\n", AB[2][0], AB[2][1], AB[2][2]);
  
  //function call for AB + A                                                                                                                                           
  matadd(result, AB, A);
  
  printf("       [ %d %d %d ]\n", result[0][0], result[0][1], result[0][2]);
  printf("A*B+A= |%d %d %d |\n", result[1][0], result[1][1], result[1][2]);
  printf("       [%d %d %d]\n\n", result[2][0], result[2][1], result[2][2]);

  return 0;
}


void matmult(int result[3][3], int first[3][3], int second[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        result[i][j] = 0;
      for(int k = 0; k < 3; k++){
	result[i][j] += first[i][k] * second[k][j];
      }
    }
  }
}


void matadd (int result[3][3], int first[3][3], int second[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      result[i][j] = first[i][j] + second[i][j];
    }
  }
  
}
