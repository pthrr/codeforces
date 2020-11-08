
if __name__ == "__main__":
    inp = input().split()

    if len(inp) == 2:
        m = int(inp[0])
        n = int(inp[1])
    else:
        raise ValueError

    parts = 0

    if (m % 2) == 0 and (n % 2) == 0:
        parts = (m*n)/2
    elif (m % 2) == 1 and (n % 2) == 0:
        parts = ((m-1)*n)/2
        parts += int(n/2)
    elif (m % 2) == 0 and (n % 2) == 1:
        parts = (m*(n-1))/2
        parts += int(m/2)
    else:
        parts = ((m-1)*(n-1))/2
        parts += int(m/2)
        parts += int(n/2)

    print(int(parts))
