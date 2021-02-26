#include <iostream>
using namespace std;
int hexaconverter(int r, int g, int b)
{
    if (r > 255 || g > 255 || b > 255 || r < 0 || g < 0 || b < 0)
    {
        printf("INVALID\n");
        return 0;
    }

    printf("#%.2x%.2x%.2x\n", r, g, b);

    return 0;
}
int main()
{
    //write your code from here
    int test;
    scanf("%d", &test);
    int r, g, b;
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d", &r, &g, &b);
        hexaconverter(r, g, b);
    }

    return 0;
}