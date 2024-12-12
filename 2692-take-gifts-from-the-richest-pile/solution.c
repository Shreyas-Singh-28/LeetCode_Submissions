long long pickGifts(int* gifts, int giftsSize, int k) {
    int i,j,highest,highest_index;
    long long sum=0;
    while(k>0) {
        highest=0;
        highest_index=0;
        for(i=0;i<giftsSize;i++) {
            if(gifts[i]>highest) {
                highest=gifts[i];
                highest_index=i;
            }
        }
        gifts[highest_index]=sqrt(gifts[highest_index]);
        k--;
    }
    for(i=0;i<giftsSize;i++) {
        sum=sum+gifts[i];
    }
    return sum;
}
