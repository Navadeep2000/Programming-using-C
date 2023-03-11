// 1. Function for Finding Nth Fibonacci Number Using Recursion

int fib(int nth_number)
{
    if(nth_number <= 2)
        return nth_number-1;
    else
        return fib(nth_number-1) + fib(nth_number-2);
}

// 2. Function for Finding Nth Fibonacci Number Without Using Recursion

int fib(int nth_num)
{
    int first_value=0, second_value=1;
    int i, nth_value;

    if(nth_num == 1)
        return first_value;
    else if(nth_num == 2)
        return second_value;
    else
    {
        for(i=3; i<=nth_num; i++)
        {
            nth_value = first_value + second_value;
            first_value = second_value;
            second_value = nth_value;
        }
        return nth_value;
    }


}
