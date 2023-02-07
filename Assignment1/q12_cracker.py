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
    
        