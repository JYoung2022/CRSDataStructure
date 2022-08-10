#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef std::vector<int> vec;
typedef vector<vector<int>> matrix;


void CSR(const matrix& mat)
{
        vec A;
        vec IA = { 0 };
        vec JA;
        int cnt = 0;

        for (int i = 0; i < mat.size(); i++) {
                for (int j = 0; j < mat[0].size(); j++) {
                        if (mat[i][j] != 0) {
                                A.push_back(mat[i][j]);
                                JA.push_back(j);
                                cnt++;
                        }
                }
                IA.push_back(cnt);
        }

        cout << "A = " << "[ ";
        for_each(A.begin(), A.end(), [](int a) {
                cout << a << " ";
        });
        cout << "]" << endl;

    cout << "IA = " << "[ ";
        for_each(IA.begin(), IA.end(), [](int a) {
                cout << a << " ";
        });
        cout << "]" << endl;

        cout << "JA = " << "[ ";
        for_each(JA.begin(), JA.end(), [](int a) {
                cout << a << " ";
        });
        cout << "]" << endl;
}

int main()
{
        matrix M = {
                {5,6,0,0,0},
                {0,0,0,0,1},
                {0,0,0,2,0},
                {0,7,0,0,1},
        };
        CSR(M);
        return 0;
}



