int strStr(char* haystack, char* needle) {
    int L = strlen(haystack);
    int V = strlen(needle);
    int j;

    if (V==0){
        return 0;
    }
    if (V > L) {
        return -1;
    }
    
    
    for (int i = 0; i < L; i++){
        for (j = 0; j < V; j++){
            if (haystack[i+j] != needle[j]){
                break;
            }
        }
        if (j==V)
        {
            return i;
        }
        
    }
    return -1;
}