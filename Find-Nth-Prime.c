int Nth_Prime(int n)
{
    /*
     * 2 Loops
     * 1 --> OUTER LOOP --> Counts the nth prime and holds the value of prime and updates it with next prime
     * 2 --> INNER LOOP --> Prime number loop
     */

    int n_count = 0;
    int wanted_prime;

    /*
     * LOGIC :
     *
     * Note-1 : Primes start with 2
     * Note-2 : The condition of the loop --> count of n must reach n
     * We are taking the primes at the range [1, n] but not at the n only
     * Note-3 : When the nth value doesnt match, next prime is calculated
     * Until the nth value reached, the prime value is updated and then it reaches nth value
     * This prime at nth value is the required NTH PRIME
     *
     */

    for(int i=2; n_count < n; i++) 
    {
        int factor_count = 0;

        // Factor counting Loop
        for(int j=1; j<=i; j++)
        {
            if(i%j == 0)
                factor_count += 1;
        }

        // Prime or Not Logic 
        if(factor_count == 2)
        {
            n_count += 1; // nth value inreased. Finally reaches actual n value
            wanted_prime = i; // Updating prime everytime with the nth value 
        }

        // When n_count reaches actual n value, the loop terminates
    }
    
    // The last updated prime will be obtained in the wanted_prime variable, which will be the answer.
    return wanted_prime;
}
