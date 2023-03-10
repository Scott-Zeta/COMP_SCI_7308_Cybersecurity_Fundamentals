# not ceaser
def ceaser():
    alphabet = [chr(n) for n in range(ord('a'),ord('z') + 1)]
    with open("q12_ciphertext.txt") as f:
        s = f.read()
    for n in range(1,27):
        newString = ""
        for c in s:
            if c.isalpha():
                c = alphabet[alphabet.index(c.lower()) - n]
            newString += c
        print(newString)

# frequency analysis    
def freq():
    with open("q12_ciphertext.txt") as f:
        s = f.read()
    dic = {}
    for c in s:
        if c.isalpha():
            dic[c] = dic.get(c,0)+1    
    print(dic)
    
def subsitution():
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    cipherbet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    dic = {}
    for n in range(len(alphabet)):
        dic[alphabet[n]] = cipherbet[n]
    print(dic)
    with open("q12_ciphertext.txt") as f:
        s = f.read()
    new_s=""
    for c in s:
        c = dic.get(c,c)
        new_s += c
    print(new_s)
    
def main():
    ceaser()
    subsitution()
    
if __name__ == "__main__":
    main()