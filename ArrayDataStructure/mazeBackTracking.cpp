#include "iostream"
using namespace std;
bool BackTrack(int given[3][3], int x, int y, int sol[3][3])
{
  if (x == 3 - 1 && y == 3 - 1 && given[x][y] == 1)
  {
    sol[x][y] = 1;
    return true;
  }

  if (x < 3 && y < 3 && given[x][y] == 1)
  {
    sol[x][y] = 1;

    // adding diagonal moves
    if (BackTrack(given, x + 1, y + 1, sol))
    {

      return true;
    }

    if (BackTrack(given, x + 1, y, sol))
      return true;

    if (BackTrack(given, x, y + 1, sol))
      return true;

    sol[x][y] = 0;
    return false;
  }
  return false;
}

int countPaths(int maze[3][3], int x, int y, int sol[3][3])
{
  if (x == 2 && y == 2 && maze[x][y] == 1)
  {
    sol[x][y] = 1;
    return 1;
  }

  if (x > 2 || y > 2 || maze[x][y] == 0)
    return 0;

  int countDown = countPaths(maze, x + 1, y,sol);
  int countRight = countPaths(maze, x, y + 1, sol);

  return countDown + countRight;
}
bool SolveMaze(int maze[3][3], int x, int y, int sol[3][3])
{
  if (x == 2 && y == 2 && maze[x][y] == 1)
  {
    sol[x][y] = 1;
    return true;
  }

  if (x < 3 && y < 3 && maze[x][y] == 1)
  {
    sol[x][y] = 1;

    if (SolveMaze(maze, x + 1, y, sol))
      return true;

    if (SolveMaze(maze, x, y + 1, sol))
      return true;

    sol[x][y] = 0;
    return false;
  }
  return false;
}
int main()
{
  int maze[3][3] = {{1, 1, 1},
                    {0, 1, 1},
                    {0, 0, 1}};
  int sol[3][3] = {0};
  if (SolveMaze(maze, 0, 0, sol))
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << sol[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "Failed solving maze";
  }

  // checking for count paths
  //  int maze[2][2] = {{1,0},{1,1}};
  //  int sol[2][2] = {0};
  // cout << "Total Paths : " << countPaths(maze, 0, 0, sol);
}