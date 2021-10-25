#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	    float c=(float)numerator/denominator;
	    int dec=c-(numerator/denominator);
	    int inte=numerator/denominator;
	    string str=to_string(dec);
	    return str;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  