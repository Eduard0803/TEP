#include <bits/stdc++.h>
// link: https://vjudge.net/problem/UVA-11849/origin
using namespace std;

int main()
{
    set <int> n, m, out;
    int tam_n, tam_m, input;

    cin >> tam_n >> tam_m;

    // recebe dois conjuntos
    for(int i=0; i<tam_n; i++){
        cin >> input;
        n.insert(input);
    }
    for(int i=0; i<tam_m; ++i){
        cin >> input;
        m.insert(input);
    }
    cin >> tam_n >> tam_m;
    // calcula a intersecção entre eles
    set_intersection(n.begin(), n.end(), m.begin(), m.end(), inserter(out, out.begin()));

    // escreve a quantidade de numeros da intersecção
    cout << out.size() << endl;
}
