// Count Total Digits in a Number: You are given a number n. You need to find the count of digits in n.
// Input: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.
// Output: For each testcase, in a newline, print the count of digits in n.
// Expected Time Complexity: O(Logn). // Expected Auxiliary Space: O(Logn).
// Constraints: // 1 <= T <= 105 // 0 <= n <= 107
// Examples:
// Input:
// 2
// 1
// 99999
// Output:
// 1
// 5
// Explanation:
// Testcase 1: Number of digits in 1 is 1.
// Testcase 2: Number of digits in 99999 is 5.

// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

int countDigits(int n)
{
   if(n == 0) return 0;
   return 1 + countDigits(n/10);
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;	    
	    cout<<countDigits(n)<<endl;
	}
	return 0;
}
