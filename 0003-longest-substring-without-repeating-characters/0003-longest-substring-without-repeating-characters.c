int lengthOfLongestSubstring(char *s) {
    int present[256] = {0};
    int start = 0;
    int end = 0;
    int longest = 0;

    while (s[end] != '\0') {

        // Remove characters until duplicate is gone
        while (present[(unsigned char)s[end]]) {
            present[(unsigned char)s[start]] = 0;
            start++;
        }

        // Add current character
        present[(unsigned char)s[end]] = 1;

        // Update longest length
        if (end - start + 1 > longest)
            longest = end - start + 1;

        end++;
    }

    return longest;
}