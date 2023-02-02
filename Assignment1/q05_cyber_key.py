import sys
import random
import string
def randomString(n):
    letters = string.ascii_letters + "{}_"
    return ''.join(random.choice(letters) for i in range(n))
def main():
    if (len(sys.argv) != 2):
        print("usage: python3 cyber <input string>")
        sys.exit(1)
    inputsr = sys.argv[1]
    l1 = len(inputsr)
    l2 = 100
    f = open("secret.txt","w")
    for c in inputsr:
        p = random.randint(0,l2)
        salt1 = randomString(p)
        salt2 = randomString(l2 - p)
        x = '{:04d}'.format(p) + ":" + salt1 + c + salt2
        print(x)
        f.write(x + "\n")
        print(salt1)
        print(c)
        print(salt2)
    f.close()

if __name__ == "__main__":
    main()