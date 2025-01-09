// bool isUgly(int n) {
//     if(n<=0)
//         return false;
//     if(n==1)
//         return true;
//     int x=2;
//     while(n!=1) {
//         if(n%x==0) {
//             int c=0;
//             for(int i=2;i<x/2+2;i++) {
//                 if(x%i==0) {
//                     c=1;
//                     break;
//                 }
//             }
//             if(c==0) {
//                 if(x!=2 || x!=3 || x!=5)
//                     return false;
//             }
//             n=n/x;
            
//         }
//         else
//             x++;
//     }
//     return true;
// }

bool isUgly(int n) {
    if (n <= 0)
        return false; // Ugly numbers are positive
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    return n == 1; // If only prime factors are 2, 3, or 5, n will reduce to 1
}

