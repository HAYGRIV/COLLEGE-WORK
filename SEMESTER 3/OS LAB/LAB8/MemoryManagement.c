#include <stdio.h>

#define MEMORY_SIZE 1000  
#define BLOCK_SIZE 100    

int main() {
    int allocated_memory = 0;
    int internal= 0;
    int external= 0;

    int processes[] = {150, 250, 100, 300, 175, 125, 200};
    int num_processes = sizeof(processes) / sizeof(processes[0]);

    for (int i = 0; i < num_processes; i++) {
        if (processes[i] <= BLOCK_SIZE) 
        {
            allocated_memory += processes[i];
            internal += BLOCK_SIZE - processes[i];
        } 
        else 
        {
            external += processes[i] - BLOCK_SIZE;
        }
    }

    printf("Allocated memory: %d bits\n", allocated_memory);
    printf("Internal Fragmentation: %d bits\n", internal);
    printf("External Fragmentation: %d bits\n", external);

    return 0;
}