#include <stdio.h>

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        } else {
            printf("%d is Odd\n", i);
        }
    }

    return 0;
}
