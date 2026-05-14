#include <stdio.h>
int main() {
  // Writing a banking program that allows you to withdraw amount if only balance (in integer) is above 5000.00.
  int minAmount = 5000;
  int withdraw;
  
  printf("Please, enter the amount to withdraw: \n");
  scanf("%d", &withdraw);

  // Logic to check the amount.

  if(withdraw > minAmount) {
    
    printf("Withdraw is processing, please wait!\n);
      printf("Your cash of ugx %d is ready, please pick it.", withdraw);
    
  }
  else{
    printf("Your account balance is too low, %d. Please recharge and try again.", %d);
  }
  return 0;
  
  
}
