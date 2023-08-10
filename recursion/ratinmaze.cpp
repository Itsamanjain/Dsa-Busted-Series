#include <iostream>
using namespace std;

// Maze dimensions
const int N = 4;

// Function to print the solution matrix
void printSolution(int solution[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if rat can move to a given position (x, y) in the maze
bool isSafe(int maze[N][N], int x, int y) {
    // Check if (x, y) is within the maze bounds and the cell is not blocked (value is 1)
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 0);
}

// Recursive function to solve Rat in a Maze problem
bool solveMazeUtil(int maze[N][N], int x, int y, int solution[N][N]) {
    // Check if the rat has reached the destination
    if (x == N - 1 && y == N - 1) {
        solution[x][y] = 1;
        return true;
    }

    // Check if the current position is valid
    if (isSafe(maze, x, y)) {
        // Mark the current position as part of the solution path
        solution[x][y] = 1;

        // Move down
        if (solveMazeUtil(maze, x + 1, y, solution))
            return true;

        // Move right
        if (solveMazeUtil(maze, x, y + 1, solution))
            return true;

        // If neither down nor right move leads to the destination, backtrack
        solution[x][y] = 0;
        return false;
    }

    return false;
}

// Function to solve the Rat in a Maze problem
void solveMaze(int maze[N][N]) {
    int solution[N][N] = {0}; // Initialize solution matrix with 0

    if (solveMazeUtil(maze, 0, 0, solution))
        printSolution(solution);
    else
        cout << "No solution exists." << endl;
}

int main() {
    int maze[N][N] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
    };

    solveMaze(maze);

    return 0;
}
