int PrimesCount(int lower, int upper)
{
    int prime_count = 0;
    // 1. Initial loop for the RANGE OF NUMBERS
    for(int i=lower; i<=upper; i++)
    {
        int factor_count = 0;
        // 2. Second loop for CHECKING COUNT OF THE NUMBER
        for(int j=1; j<=i; j++)
            if(i%j == 0)
                factor_count += 1;
        
        // Checking: If count=2 --> Prime, else --> Not Prime(Composite)
        if(factor_count == 2)
            prime_count += 1;

    }

    return prime_count;
}
