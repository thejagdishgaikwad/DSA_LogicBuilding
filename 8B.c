#include <stdio.h>
int moveCount = 0;
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        moveCount++;
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    moveCount++;
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}
int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve Tower of Hanoi for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    printf("Total moves: %d\n", moveCount);
    return 0;
}
