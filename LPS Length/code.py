def longestPrefixLength(s):
    n = len(s)
    lps = [0] * n
    j = 0
    for i in range(1, n):
        while j > 0 and s[i] != s[j]:
            j = lps[j - 1]
        if s[i] == s[j]:
            j += 1
            lps[i] = j
    return lps[-1]

def main():
    s = "ababab"
    print(longestPrefixLength(s))

if __name__ == "__main__":
    main()
