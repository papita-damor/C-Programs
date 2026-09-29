#include <stdio.h>
int main() {
switch ('d'){
    case 'a':
        printf("%d", 4);
        break;
    case 'b':
        printf("%d", 2);
        break;
    default:
        printf("none");
    case 'c':
        printf("%d", 5);
        break;
}
    return 0;
}
