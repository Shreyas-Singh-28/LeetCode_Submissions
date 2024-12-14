int countSeniors(char** details, int detailsSize) { 
    int c = 0;
    for (int i = 0; i < detailsSize; i++) {
        // Calculate age from the tens and ones places directly without extra variables
        if ((details[i][11] > '6') || (details[i][11] == '6' && details[i][12] > '0')) {
            c++;
        }
    }
    return c;
}

