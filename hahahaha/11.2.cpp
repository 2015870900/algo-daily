#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int>num(3);
        for(int i = 0; i < 3; ++i) {
            cin >> num[i];
        }

        // cout << num[0] <<endl;

        if (num[0] == num [1] && num [1] == num [2] && num [0] == num [2]) {
            cout << "YES" << endl;
        }

        else {
            sort(num.begin(), num.end());
            // cout << num[0] <<endl;
            if(num[2] % num[0] != 0 || num[1] % num[0] != 0) {
                cout << "NO" << endl;
            }

            else if(num[2] % num[0] == 0 && num[1] % num[0] == 0) {
                if(num[1] / num[0]  + num[2] / num[0] - 2 <= 3) {
                    cout << "YES" << endl;
                }
                else if(num[1] / num[0]  + num[2] / num[0] - 2 > 3) {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}