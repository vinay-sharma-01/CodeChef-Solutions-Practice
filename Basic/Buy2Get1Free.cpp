#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n, x;
	while(t--){
	    cin>>n>>x;
	    int freeCount=n/3;
	    cout<<(n-freeCount)*x<<endl;
	}
	return 0;
}
