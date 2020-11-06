
if __name__ == "__main__":
    n = input()
    k = list()

    for _ in range(int(n)):
        k.append(input().split())

    problems = 0

    for row in k:
        s = sum([float(el) for el in row])

        if s > 1:
            problems += 1

    print(problems)
