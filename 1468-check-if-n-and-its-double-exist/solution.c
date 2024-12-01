bool checkIfExist(int* arr, int arrSize) {
    int i,j;
    for(i=0;i<arrSize;i++) {
        for(j=i+1;j<arrSize;j++) {
            if(*(arr+i)==*(arr+j)*2 || *(arr+i)*2==*(arr+j))
                return true;
        }
    }
    return false;
}
