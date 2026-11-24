#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/gym/106679/problem/D

bool ehIgual(char a[][1001], char b[][1001], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != b[i][j]) return false;
        }
    }

    return true;
}

void imprimir(char a[][1001], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

bool espelharVertical(char a[][1001], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != a[n - i - 1][j]) return false;
        }
    }

   return true;
}

bool espelharHorizontal(char a[][1001], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] = a[i][m - j - 1]) return false;
        }
    }

   return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    char mapa[1001][1001]; //[1000][1000];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mapa[i][j];
        }
    }
    
    int iguais = 0;
    iguais += espelharHorizontal(mapa, n, m);
    iguais += espelharVertical(mapa, n, m);

    cout << iguais << endl;
}

