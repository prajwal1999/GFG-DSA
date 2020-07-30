// Fibonacci Using Recursion: // You are given a number n. You need to find nth Fibonacci number.
// F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1
// Input: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.
// Output: // For each testcase, in a newline, print F(n).
// Expected Time Complexity: O(2n). // Expected Auxiliary Space: O(N).
// Constraints: // 1 <= T <= 20 // 1 <= n <= 20

// Examples:
// Input:
// 2
// 1
// 20
// Output:
// 1
// 6765
// Explanation:
// Testcase 1: 1st fibonacci number is 1.
// Testcase 2: 20th fibonacci number is 6765.

#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n)
{
    if(n == 1 || n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}