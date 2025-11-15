int countDigits(unsigned long long n){
    int digit_count = 0;
    while(n){
        digit_count += 1;
        n /= 10;
    }
    return digit_count;
}
