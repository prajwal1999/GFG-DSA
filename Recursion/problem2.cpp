// You are given a number n. You need to find the sum of digits of n.
// Input: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.
// Output: For each testcase, in a newline, print the sum of digits of n.
// Expected Time Complexity: O(Logn). // Expected Auxiliary Space: O(Logn) (Recursive).
// Constraints: // 1 <= T <= 105 // 1 <= n <= 107
// Examples:
// Input:
// 2
// 1
// 99999
// Output:
// 1
// 45
// Explanation:
// Testcase 1: Sum of digits for 1 is 1.
// Testcase 2: Sum of digits for 99999 is 9 + 9 + 9 + 9 + 9 = 45 


#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if(n == 0) return 0;
    int last = n%10;
    return last + sumOfDigits(n/10);
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<sumOfDigits(n)<<endl;
	}
	return 0;
}