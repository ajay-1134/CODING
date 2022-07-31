#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum, diff, pro, quo;
        int arr[4] = {a, b, c, d};
        sort(arr, arr + 4);
        // for(int i=0; i<4; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        int x, y;
        int ansFlag = 0;
        // if the first number is 1 and other is x
        if (arr[0] < 0 && arr[1] == 0 && arr[2] + 1 == arr[3])
        {
            diff = arr[0];
            quo = arr[1];
            pro = arr[2];
            sum = arr[3];
            x = 1;
            y = arr[2];
            if(x*y == pro && x+y == sum && x-y == diff && x > 0 && x <= 10000 && y > 0 && y <= 10000 && x/y == quo) ansFlag = 1;
        }

        // if the first number is x and other is 1
        else if (arr[0] > 0 && arr[1] == arr[2] && arr[3] == arr[2] + 1)
        {
            diff = arr[0];
            quo = arr[1];
            pro = arr[2];
            sum = arr[3];
            x = arr[1];
            y = 1;
            if(x*y == pro && x+y == sum && x-y == diff && x > 0 && x <= 10000 && y > 0 && y <= 10000 && x/y == quo) ansFlag = 1;
        }

        // if both are 1
        else if (arr[0] == 0 && arr[1] == 1 && arr[2] == 1 && arr[3] == 2)
        {
            x = 1;
            y = 1;
            ansFlag = 1;
        }
        if (ansFlag == 1)
        {
            cout << x << " " << y << endl;
        }
        // if both are greater than 1
        else
        {
            sum = arr[2];
            pro = arr[3];
            bool is_first_smaller = false;
            if (arr[0] <= 0)
            {
                is_first_smaller = true;
                diff = arr[0];
                quo = arr[1];
            }
            else
            {
                quo = arr[0];
                diff = arr[1];
            }
            // cout<<endl<<sum<<" "<<diff<<endl;
            // after finding correct values of given numbers

            x = (sum + diff) / 2;
            y = (sum - diff) / 2;
            if(is_first_smaller == true){
                x = min(x,y);
                y = max(x,y);
            }
            else{
                x = max(x,y);
                y = min(x,y);
            }
            if(x*y == pro && x+y == sum && x-y == diff && x > 0 && x <= 10000 && y > 0 && y <= 10000 && x/y == quo){
                cout<<x<<" "<<y<<endl;
            }
            else{
                cout<<"-1 -1"<<endl;
            }
        }
    }
    return 0;
}