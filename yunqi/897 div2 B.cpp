#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<stack>
#include<queue>
#include<climits>
using i64 = long long;
using namespace std;

/*
����ż����˵�� ���ĳ���ı�(0 / 2)��������ı� 1��
����������˵�� �м�������䣬ÿ����������Լ� 1��
*/

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int combination = 0, no_combination = 0;
    for(int i = 0; i <= n / 2 - 1; ++i)
    {
        if(str[i] == str[n - i - 1]){
            combination++;
        }
        else{
            no_combination++;
        }
    }
    string ans(n + 1, '0');
    for(int i = 0; i <= combination; ++i)
    {
        if(n % 2 == 0){
            ans[no_combination + i * 2] = '1';
        }
        else{
            ans[no_combination + i * 2] = '1';
            ans[no_combination + i * 2 + 1] = '1';
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}