// NON REPEATING DIGITS COUNT
// or COUNTING NO OF DIGITS THAT OCCUR ONLY ONCE IN THE NUMBER


/* 
 * Refer to Unique Digits Count file in this respository for the detailed explanation of this program, similar logic is used in both programs
 * Or you can directly visit with this link: https://github.com/Navadeep2000/Programming-using-C/blob/main/UNIQUE%20DIGITS%20COUNT.c
 */


int  NonRepeatingDigitsCount(int number)
{
    int zero_array[10] = {0}; // Hash Table Mapping to Zeros

    while(number > 0) // Loop that maps last_digit of the number to corresponding Hash Table value (Corresponding Indices of Zero Array)
    {
        int last_digit = number % 10;
        zero_array[last_digit] += 1;
        number /= 10; // Removing the last digit from the number
    }

    int non_rep_num_count = 0; // This should count how many numbers exist that occur only once in the number
    for(int i=0; i<10; i++)
        if(zero_array[i] == 1) // Since the condition is to get digits that have no repetition or one occurence
            non_rep_num_count += 1; 

    return non_rep_num_count;
}
