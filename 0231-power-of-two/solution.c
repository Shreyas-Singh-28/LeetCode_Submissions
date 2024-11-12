bool isPowerOfTwo(int n) {
    int k=0;
    while(n>=pow(2,k)) {
        if(n==pow(2,k++))
            return true;
    }
    return false;
}
