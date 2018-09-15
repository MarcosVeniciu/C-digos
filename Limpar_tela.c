#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
  #ifdef linux
    system("clear");
  #elif defined WIN32
    system("cls");
  #endif

  return 0;
}
