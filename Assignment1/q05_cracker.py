def main():
    with open("secret.txt") as f:
        secret = f.read().splitlines()
    print(secret)
    for s in secret:
        pair = s.split(":")
        index = int(pair[0])
        c = pair[1][index]
        print(c,end="")
if __name__ == "__main__":
    main()