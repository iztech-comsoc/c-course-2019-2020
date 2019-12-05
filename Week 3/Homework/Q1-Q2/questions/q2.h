/*
    145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
    Find the sum of all numbers which are equal to the sum of the factorial of their digits.

    Note: as 1! = 1 and 2! = 2 are not sums. they are not included.

    Hint: you can start by determining upper limit like this:
	  9...9 > 9! * n	(n is digit cound)
*/

int digit_factorials() {
    int sum = 0;
    int fact10[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    /*
        Finding upper limit:

        9...9 > 9! * n
        10^n - 1 = 9! * n
        10^n > 362.880‬ * n + 1 
        n > log(362800) + logn
        n - logn > log(362800) ~= 5.55
        n - (n+1)/10 > 5.55     (log(n) ~= (n+1)/10 if 0 < n < 10)
        9n > 56

        n = 7, limit=9999999
        
    */

    for (int n = 10; n <= 9999999; n++) {
        int df_sum = 0, num = n;
        
        do {
            int digit = num % 10;
            df_sum += fact10[digit];
        } while ((num /= 10) > 0 && df_sum <= n);

        if (df_sum == n) {
            sum += n;
        }
    }

    return sum;
}
