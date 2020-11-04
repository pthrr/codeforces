
if __name__ == "__main__":
    n = input()
    words = list()

    for _ in range(int(n)):
        words.append(input())

    for w in words:
        if(len(w) > 10):
            print(w[0] + str(len(w)-2) + w[-1])
        else:
            print(w)
