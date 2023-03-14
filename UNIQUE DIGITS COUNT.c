int UniqueCount(int number)
{
    // Unique Digits in a number given
    /*
     * Example:
     * Number:  123435 
     * 1 2 3 4 3 5 <-- Each Digit of the number
     * 1 2 3 4   5 <-- Unique digits numbered (Total 5 Unique Digits)
     */

    /*
     * Method:
     *
     * STEP - 1 :
     * As any number contains numbers from 0-9,
     * Make an array of 10 elements with '0' (Zero array)
     * {0 0 0 0 0 0 0 0 0 0} <-- Array with 0s 
     *  0 1 2 3 4 5 6 7 8 9  <-- Indices 
     * The indices can represent the digits of the number (0-9)
     *
     * ( YOU CAN CALL THIS AS A HASH TABLE METHOD )
     *
     * STEP - 2:
     * As we go through every digit of given number, increment the value of 0 array.
     * 
     * STEP - 3:
     * Now Count the number of True values in the 0 array to get the UNIQUE DIGITS COUNT
     */

    // STEP-1: Making 0 array
    int zero_array[10] = {0};

    // STEP-2: Going through last digit and incrementing that correspponding value
    while(number > 0)
    {
        int last_digit = number % 10; // This drags out the last digit of the number

        zero_array[last_digit] += 1; // last digit corresponding index of 0 array is incremented by 1

        number /= 10; // This gives the number after the last digit removed.
    }

    // STEP-3: Counting the array elements that are greater than 0 in 0 array.
    int Trues_Count = 0;

    for(int i=0; i<10; i++)
        if(zero_array[i] > 0)
            Trues_Count += 1;
    
    return Trues_Count;
}
