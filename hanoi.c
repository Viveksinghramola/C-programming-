#include <stdio.h>
int towerOfHanoi(int numDisks, char fromRod, char toRod, char auxRod) 
{
    if (numDisks == 1) 
    {
        printf("Move disk 1 from rod %c to rod %c\n", fromRod, toRod);
        return 0;
    }
    towerOfHanoi(numDisks - 1, fromRod, auxRod, toRod);
    printf("Move disk %d from rod %c to rod %c\n", numDisks, fromRod, toRod);
    towerOfHanoi(numDisks - 1, auxRod, toRod, fromRod);
}

int main() 
{
    int numDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);
    towerOfHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}
