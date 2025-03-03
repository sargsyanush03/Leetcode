char* longestCommonPrefix(char** strs, int strsSize) {
    int index = strlen(strs[0]);
    for (int i = 1; i < strsSize; ++i) {
            for (int j = 0; j < index; ++j) {
                    if (strs[i - 1][j] != strs[i][j]) {
                        index = j;
                        break;
                    }
            }
			if (index == 0) {
				break;
			}
    }
	char    *str = (char*)calloc(index + 1, sizeof(char));
    for (int j = 0; j < index; ++j) {
		str[j] = strs[0][j];
	}
	return (str);
}
