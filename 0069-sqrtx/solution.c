int mySqrt(int x) {
    unsigned int k=1;
    while(1) {
        if(k*k>x)
            return k-1;
        k++;
    }
}
