#include <iostream>
const int len = 66;
const int Divs = 6; // 6次循环
void subdivide(char *ar, int low, int heigh, int level);
int main()
{
    char ruler[len];
    ruler[len - 1] = '\0';

    int min = 0;
    int max = len - 2;
    std::cout << ruler << "\n";

    for (int i = 0; i < Divs; i++)
    {
        subdivide(ruler, min, max, i);
        for (int j = 1; j < len - 2; j++)
        {
            ruler[j] = '  ';
        }
    }
    std::cout << "end";
  
    return 0;
}
void subdivide(char *ar, int low, int heigh, int level)
{
    if (level == 0)
    {
        int mid = (heigh + low) / 2;
        ar[mid] = '|';
        subdivide(ar, low, mid, level - 1);
        subdivide(ar, mid, heigh, level - 1);
    }
}