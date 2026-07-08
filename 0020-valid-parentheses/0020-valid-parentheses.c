bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Push opening brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stack[top] = s[i];
        }

        // Check closing brackets
        else {

            if (top == -1)
                return false;

            if (s[i] == ')' && stack[top] == '(')
                top--;

            else if (s[i] == '}' && stack[top] == '{')
                top--;

            else if (s[i] == ']' && stack[top] == '[')
                top--;

            else
                return false;
        }
    }

    if (top == -1)
        return true;
    else
        return false; 
}