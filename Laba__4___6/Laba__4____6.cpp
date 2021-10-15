#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double P, S;
    int i, k;

    // while(…) {… while(…) {…} …}
    P = 1;
    k = 1;
    while (k <= 15)
    {
        S = 0;
        i = 1;
        while (i <= k)

        {
            S += cos(1. * (i + k));
            i++;

        }
        P *= (1. + S) * (1. + S);
        k++;

    }
    cout << "while(…) {… while(…) {…} …}" << P << endl;

    // do{… do{…} while(…) …} while(…)
    P = 1;
    k = 1;
    do
    {
        S = 0;
        i = 1;
        do
        {
            S += cos(1. * (i + k));
            i++;
        } while (i <= k);
        P *= (1. + S) * (1. + S);
        k++;
    } while (k <= 15);
    cout << "do { … do { … } while (…) … } while (…)" << P << endl;

    //for(…; …; n++) {… for(…; …; k++) {…} …}  
    P = 1;
    for (k = 1; k <= 15; k++)
    {
        S = 0;
        for (i = 1; i <= k; i++)

        {
            S += cos(1. * (i + k));

        }
        P *= (1. + S) * (1. + S);

    }
    cout << "for(…; …; n++) {… for(…; …; k++) {…} …}" << P << endl;

    // for(…; …; n--) {… for(…; …; k--) {…} …}
    P = 1;
    for (k = 15; k >= 1; k--
        )

    {
        S = 0;
        for (i = k; i >= 1; i--
            )

        {
            S += cos(1. * (i + k));
        }
        P *= (1. + S) * (1. + S);
    }
    cout << "for(…; …; n--) {… for(…; …; k--) {…} …}" << P << endl;
    return 0;
}
