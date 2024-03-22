#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i >= 1)
        {
            if (i <= 9)
            {
                if (i == 1)
                {
                    printf("one\n");
                }
                if (i == 2)
                {
                    printf("two\n");
                }
                if (i == 3)
                {
                    printf("three\n");
                }
                if (i == 4)
                {
                    printf("four\n");
                }
                if (i == 5)
                {
                    printf("five\n");
                }
                if (i == 6)
                {
                    printf("six\n");
                }
                if (i == 7)
                {
                    printf("seven\n");
                }
                if (i == 8)
                {
                    printf("eight\n");
                }
                if (i == 9)
                {
                    printf("nine\n");
                }
            }
            else{
                if(i%2 == 0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
    }
    return 0;
}