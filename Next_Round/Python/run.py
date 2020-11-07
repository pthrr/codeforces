
if __name__ == "__main__":
    inp = input().split()

    if len(inp) == 2:
        n = int(inp[0])
        k = int(inp[1])
    else:
        raise ValueError

    inp = input().split()

    if len(inp) == n:
        score = [int(el) for el in inp]
    else:
        raise ValueError

    thresh = score[k-1]
    parts = 0

    for el in score:
        if el >= thresh and el > 0:
            parts += 1
        else:
            break

    print(parts)
