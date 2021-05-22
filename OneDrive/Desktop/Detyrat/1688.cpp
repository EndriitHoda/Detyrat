Menyra 1:
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numriIEkipeve;
    int numriINdeshjeve;
    int s = 0;
    cout << "Sheno numrin e ekipeve: ";
    cin >> numriIEkipeve;
    while (numriIEkipeve > 0) {
        s += numriIEkipeve / 2;
        numriIEkipeve = (numriIEkipeve + 1) / 2;
        if (numriIEkipeve == 1)
            break;
    }
    cout<< s<<endl;

}
Menyra 2:
class Solution {
public:
    int numberOfMatches(int n){
    int ans = 0;
    while (n > 0) {
        ans += n / 2;
        n = (n + 1) / 2;
        if (n == 1)
            break;
    }
    return ans;
    }
};