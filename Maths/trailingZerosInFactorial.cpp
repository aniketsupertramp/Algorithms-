int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

     long long int n,c;
   n = 5;
   c=0;
    while(n<=A)
    {
         c = c + A/n;
         n = n*5;
    }
    
    return c;
    
}
