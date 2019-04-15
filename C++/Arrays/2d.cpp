#include <bits/stdc++.h>

using namespace std;


// Complete the hourglassSum function below.
vector<int> a(16);
int findmax(vector<int>a){
    int max = 0;
    max = a[0];
    for(int i=1;i<16;i++){
        if(a[i]>=max)
            max = a[i];
    }
    cout << max << endl;
    return max;
}
int hourglassSum(vector<vector<int>> arr) {
    //int a[16];
    int d=0;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
           int sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            cout << "sum" << sum << endl;
            a[d] = sum;
            d++;
        }   
    }

    int ans = findmax(a);
   // cout << ans << endl;
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
