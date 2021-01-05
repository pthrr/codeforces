#!/opt/local/bin/python3
# -*- coding: utf-8 -*-
#
# Problem 466A
#

if __name__ == "__main__":
    n,m,a,b = map(int, input().split())
    mt = n // m
    at = n % m
    s1 = a*n
    s2 = b*mt + b*(n % m > 0)
    s3 = at*a+mt*b

    print(min(s1, s2, s3))
