#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxDenomination(vector<int>& A) {
        int A_length = A.size();
        A.insert(A.begin(), 1);
        A.push_back(1);
        vector<vector<int>> mem(A.size(), vector<int>(A.size(), 0));//2D memory vector
        
        for (int i = 1; i <= A_length; ++i){
        	
            for (int p = 1; p <= A_length - i + 1; ++p) {//p and q are left and right flag
                int q = p + i - 1;
                
                for (int k = p; k <= q; ++k)
                    mem[p][q] = max(mem[p][q], A[p-1]*A[k]*A[q+1] + mem[p][k-1] + mem[k+1][q]);
            }
        }
        return mem[1][A_length];
    }
int main() {
    int denom;
    vector<int> A;
    while (cin >> denom){
        A.push_back(denom);
        //cout<<denom<<endl;
    }
    cout<< MaxDenomination(A);
    return 0;
}
