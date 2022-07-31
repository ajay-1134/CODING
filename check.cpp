#include<bits/stdc++.h>
using namespace std;
#define int long long int

double dist(int x1, int y1, int x2, int y2){
    return sqrt( (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1) );
}

bool intersect(double centreDistance, int rad1, int rad2){
    double radius_sum = rad1+rad2;
    if( radius_sum > centreDistance){
        return true;
    }
    return false;
}



signed main(){
    int x1,y1,r1,R1,x2,y2,r2,R2;
    cin>>x1>>y1>>r1>>R1>>x2>>y2>>r2>>R2;
    double centreDistance = dist(x1,y1,x2,y2);
    // cout<<centreDistance<<endl;
    int ans = 4;
    int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;
    if(intersect(centreDistance,r1,r2) == true) {
        flag1 = 1;
        flag3 = 1;
    }
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;
    if(intersect(centreDistance,r1,R2) == true) {
        flag1 =1;
        flag4 = 1;
    }
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;
    if(intersect(centreDistance,R1,r2) == true) {
        flag2 = 1;
        flag3 = 1;
    }
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;
    if(intersect(centreDistance,R1,R2) == true) {
        flag2 = 1;
        flag4 = 1; 
    }
    // cout<<flag1<<" "<<flag2<<" "<<flag3<<" "<<flag4<<endl;

    ans = 4 - (flag1+flag2+flag3+flag4);
    cout<<ans<<endl;



    

}