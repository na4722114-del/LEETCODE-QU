char* longestCommonPrefix(char** strs, int strsSize) {if (strsSize == 0)
        return "";

    // Compare characters of the first string with all other strings
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            // If characters don't match or string ends
            if (strs[j][i] != ch || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];}