
    /*
     * LOGIC : Eliminate a digit from the number given and count that in no_of_digits
     * EXAMPLE : If '1356' is a number, the count follows this below process 
     * --> 1356/10 = 135 : Count = 1
     * --> 135/10  = 13  : Count = 2
     * --> 13/10   = 1   : Count = 3
     * --> 1/10    = 0   : Count = 5
     * --> 0 doesn't satisfy the loop condition, so it exits the loop
     */

int allDigitsCount(int input1)
{
    int count = 0;                   // This is a count variable that counts number of digits

    while(input1 >= 1)             // Assumed the number to be positive integer in [1, 25000]
    {
        input1 = input1/10;      // This eliminates the last digit from the number given
        count += 1;             // In this logic we try to count the digit that is eliminated above
        
    }
  
    return count;
    
}
