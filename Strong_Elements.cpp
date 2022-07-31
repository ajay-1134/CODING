#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int gcd(int n, int arr[]){
    int ans = arr[0];
    for(int i=1; i<n; i++){
        ans = __gcd(ans, arr[i]);
    }
    return ans;
}

bool isPrime(int n){
    if(n <= 2) return false;
    for(int i=3; i<= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int primes(int n, int arr[]){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(isPrime(arr[i])) cnt++;
    }
    return cnt;
}


int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int left_gcd[n];
        int right_gcd[n];
        int temp = arr[0];
        for(int i=0; i<n; i++){
            temp = gcd(temp,arr[i]);
            left_gcd[i] = temp;
        }
        temp = arr[n-1];
        for(int i=n-1; i>=0; i--){
            temp = gcd(temp,arr[i]);
            right_gcd[i] = temp;
        }
        int cnt = 0;


        for(int i=0; i<n; i++){
            int exc_gcd = 0;
            if(i == 0){
                exc_gcd = right_gcd[i+1];
            }
            else if(i == n-1){
                exc_gcd = left_gcd[i-1];
            } else {
                exc_gcd = gcd(left_gcd[i-1] , right_gcd[i+1]);
            }

            if(exc_gcd != left_gcd[n-1]){
                cnt++;
            }
            else if(exc_gcd == left_gcd[n-1] && exc_gcd != 1){
                cnt++;
            }

        }
        cout<<cnt<<endl;


    }
    return 0;
}