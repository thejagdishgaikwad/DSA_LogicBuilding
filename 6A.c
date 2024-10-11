#include <stdio.h>

#define V 4  // Fixing the definition of V

void init(int array[][V]){
    int i, j;
    for(i = 0; i < V; i++) {
        for(j = 0; j < V; j++) {
            array[i][j] = 0;
        }
    }
}

void addEdge(int array[][V], int i, int j){
    array[i][j] = 1;
    array[j][i] = 1;
}

void printAdjMatrix(int array[][V]){
    int i, j;
    for(i = 0; i < V; i++) {
        printf("%d: ", i);
        for(j = 0; j < V; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int adjMatrix[V][V];  // Initialize the adjacency matrix

    init(adjMatrix);  // Initialize matrix elements to 0
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 0, 3);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 2, 0);

    printAdjMatrix(adjMatrix);  // Print the adjacency matrix
    
    return 0;  // Return 0 to indicate successful execution
}
