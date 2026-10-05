int mySqrt(int x) 
{
    int result = 0;
    int left = 0;
    int right = x;
    int mid = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        long long square = (long long)mid * mid;

        if(square <= x)
        {
            result = mid;
            left = mid + 1; 
        }
        else
        {
            right = mid - 1;
            
        }
    }

    return result;
}