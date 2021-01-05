#!/opt/local/bin/python3
# -*- coding: utf-8 -*-
#
# Problem 1468M
#

if __name__ == "__main__":
    t = int(input())
    data = list()

    for i in range(t):
        data.append(list())
        n = int(input())

        for j in range(n):
            data[i].append({int(x) for x in input().split()})

    # analyze
    for test in data:
        to_print = "-1"

        for idx_s,s in enumerate(test): # intersect all sets
            for idx_i,i in enumerate(test[idx_s+1:]): # only once
                ss = s.intersection(i)

                if len(ss) > 1 and to_print == "-1":
                    to_print = "{:} {:}".format(idx_s+1, idx_i+idx_s+2)

        print(to_print)
