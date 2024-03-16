# problem: 행복 점수
# id: 30445
# time taken:

import sys

input = lambda: sys.stdin.readline().rstrip()
ph, pg = 0, 0

for i in input():
    if "A" <= i <= "Z":
        if i == "A":
            ph += 1
            pg += 1
        elif i == "H" or i == "P" or i == "Y":
            ph += 1
        elif i == "S" or i == "D":
            pg += 1
if ph == 0 and pg == 0:
    print("%.2f" % (50.00))
else:
    print("%.2f" % (ph * 100 / (ph + pg) + 1e-9))
