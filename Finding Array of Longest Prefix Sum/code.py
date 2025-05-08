def computeLPS(s):
    n = len(s)
    j = 0
    lps = [0] * n
    for i in range(1, n):
        while j > 0 and s[i] != s[j]:
            j = lps[j - 1]
        if s[i] == s[j]:
            j += 1
        lps[i] = j
    return lps

def main():
    s = "abacab"
    lps = computeLPS(s)
    print("LPS Array:", " ".join(map(str, lps)))

if __name__ == "__main__":
    main()
