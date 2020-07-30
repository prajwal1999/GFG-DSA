// Digital Root: You are given a number n. You need to find the digital root of n
// Input: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.
// Output: For each testcase, in a newline, print the digital root of n.
// Eg. DigitalRoot(191)=1+9+1=>11=>1+1=>2
// Expected Time Complexity: O((Num of Digits)2). // Expected Auxiliary Space: O(Num of Digits).
// Constraints: // 1 <= T <= 105 // 1 <= n <= 107
// Examples:
// Input:
// 2
// 1
// 99999
// Output:
// 1
// 9
// Explanation:
// Testcase 1: Digital root for 1 is 1.
// Testcase 2: Digital root for 99999 is 9 + 9 + 9 + 9 + 9 => 45 => 4 + 5 => 9.

// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;

int digitsSum(int n) {
    if(n/10 == 0) return n;
    return n%10 + digitsSum(n/10);
}

int digitalRoot(int n)
{
    if(n/10 == 0) return n;
    int temp = digitsSum(n);
    digitalRoot(temp);
}


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<digitalRoot(n)<<endl;
	}
	return 0;
}