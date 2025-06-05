#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 1;
    int y = 2;
    int z = x + y;
    sleep(90);
    printf("The sum of %d and %d is %d\n", x, y, z);
    return 0;
}
