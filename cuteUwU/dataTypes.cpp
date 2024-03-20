#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer;
    double doubler;
    long int Erdo;
    float it;
    char chad;

    scanf("%d %ld %c %f %lf ",&integer, &Erdo, &chad, &it, &doubler);

    printf("%d\n%ld\n%c\n%f\n%lf\n", integer, Erdo, chad, it, doubler);
    return 0;
}