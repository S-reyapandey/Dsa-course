#include <iostream>
using namespace std;

int ceilEle(int num, int m){
    int tmp = num;
    while(tmp > num-m){
        if(tmp%m == 0){
            return tmp;
        }
        tmp--;
    }
    return num-m;
}

int floorEle(int num, int m){
    int tmp = num;
    while(tmp < num+m){
        if(tmp%m == 0){
            return tmp;
        }
        tmp++;
    }
    return num+m;
}

int main() {

    int num, m;
    cin >> num;
    cin >> m;

    int ceil = ceilEle(num, m);
    int floor = floorEle(num, m);

    int ans = abs(ceil-num) > abs(floor-num) ? floor : ceil;
    cout << ans;

    return 0;
}