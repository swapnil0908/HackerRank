#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    //ll n;
    long long count=0;
    cin >> n;
    for(long long i=0;i<s.size();i++){
        if(s[i] == 'a')
            count++;
    }
    long long ans =0 ;
    ans = n/s.size();
    cout << ans << " " << count << endl;
    ans*=count;
    cout << n%s.size() << endl;
    if((n%s.size())){
        long long r = n%s.size();
        for(long long i=0;i<r;i++){
            if(s[i] == 'a') ans++;
        }
    }

    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
