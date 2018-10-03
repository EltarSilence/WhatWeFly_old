#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    srand(time(NULL));
    string V[21] = {
        "LIRF", "LIME", "LIML", "LIPZ", "LIPE", "LICC", "LIEE", "LIBD", "LICJ", "LIRN",
        "EDDM", "EGLL", "LFPG", "EFHK", "EDDF", "EDDH", "PANC", "KJFK", "KBOS", "RJBB", "YSSY",
        };
    int rr = 0;

    //menu
    cout << "1. No Round Robin" <<endl;
    cout << "2. Round Robin" <<endl;
    cout << "3. Estero" <<endl;
    int ip = rand()%20;
    int ia = rand()%20;
    while (ia==ip) {
        ia = rand()%20;
    }

    cin >> rr;

    switch (rr) {
    case 1:
        cout << "PARTENZA: " << V[ip] <<endl;
        cout << "ARRIVO: " << V[ia] <<endl;
        break;
    case 2:
        cout << "PARTENZA: " << V[ip] <<endl;
        cout << "ARRIVO: " << V[ip] <<endl;
    break;
    case 3:
        while (V[ip].substr(0,2) == "LI" || V[ia].substr(0,2) == "LI"){
            int ip = rand()%20;
            int ia = rand()%20;
            while (ia==ip) {
                ia = rand()%20;
            }
        }
        cout << "PARTENZA: " << V[ip] <<endl;
        cout << "ARRIVO: " << V[ia] <<endl;
    break;
    default:
        cout << "Errore";
    }


    return 0;
}
