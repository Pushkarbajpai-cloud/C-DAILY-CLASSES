    #include <stdio.h>

int main() {
  char choice;
  while (1) {
    printf("Enter your choice (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'n') {
      break;
    } else{
    for(int i=1;i<=1000;i++){
        printf("%d ",i);
    }
  }
 

  return 0;
}
}