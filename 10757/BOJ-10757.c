#include <stdio.h>
#include <string.h>

void reverse(char arr[]) {
  int len = strlen(arr);
  
  for(int i = 0; i < len / 2; i++) {
    char temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }
}

int main() {
  char a[10002] = { 0 };
  char b[10002] = { 0 };
  char res[10003] = { 0 };
  int carry = 0;
  int len = 0;
  
  scanf("%s %s", a, b);
  
  reverse(a);
  reverse(b);
  
  if(strlen(a) > strlen(b)) {
    len = strlen(a);
  }
  else {
    len = strlen(b);
  }
  
  for(int i = 0; i < len; i++) {
    int sum = a[i] - '0' + b[i] - '0' + carry;
    
    if(sum < 0) {
      sum = sum + '0';
    }
    
    if(sum > 9) {
      carry = 1;
    }
    
    else {
      carry = 0;
    }
    
    res[i] = sum % 10 + '0';
  }
  
  if(carry == 1) {
    res[len] = '1';
  }
  
  reverse(res);
  printf("%s", res);
  
  return 0;
}
