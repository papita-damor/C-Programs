#include <stdio.h>
int main() {
    int x = 0, y = 1,  z =6;
    int a = x && y++ || ++z;
    printf("%d %d", y, z);

    return 0;
}
