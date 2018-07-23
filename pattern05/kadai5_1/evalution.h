#include <stdio.h>
#include <stdlib.h>

/* Vector dot product */
double multi(double a[], double b[], int n){
  double sum = 0;
  int i;
  for(i = 0; i < n; i ++ ){
    sum += a[i] * b[i];
  }
  return sum;
}

/* Judging Whether max_index is the real [max index] of array a */
/* If Ture, return -1 */
/* If False, return the first maximum element index */
int judge_max(double a[], int n, int max_index){
  int i;
  double max = a[max_index];
  int temp_max_index = max_index;

  for(i = 0; i < n; i++){
    if(a[i] > max){
      max = a[i];
      temp_max_index = i;
    }
  }

  if(a[max_index] == max)
    return -1;
  else
    return temp_max_index;
}

/* Convergence */
/* If array a has [1], return 1
   else, return 0 */
int conv(int a[], int n){
  int i;
  int flag = 0;
  for(i = 0; i < n; i++){
    if(a[i] == 1){
      flag = 1;
        break;
    }
  }
    return flag;
}

int max_ele_index(double *arr,int len){
  int i;

  double max = arr[0];
  int max_element_number = 0;
  for(i = 1; i < len; i++){
    if(max < arr[i]){
      max = arr[i];
      max_element_number = i;
    }
  }
  return max_element_number;
}

/* expect arr[Max], other arr[a] <= threshold */
/* Accept == 1 Other == 0 */
int judge_low_thre(double *array, int len, int max_index, double thre){
  int i;
  int res = 0;
  for(i = 0; i < len; i++){
    if (i == max_index) continue;
    if( array[i] > thre){
      res = 1;
      break;
    }
  }
  return res;
}

int reverse(int a){
  if(a == 2)return 1;
  else if(a == 1)return 2;
  else return 0;
}

int judge(int a){
  if(a == 2) return -1;
  else if(a == 1) return 1;
  else return 0;
}
int revert(int a){
  if(a == -1) return 2;
  else if(a == 1) return 1;
  else return 0;
}
