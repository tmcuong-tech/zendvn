arrInt = [2, 4, 6, 2, 8]

zsum = 0
count = 0
zstr = ""

for i in range(0, len(arrInt), 2):
    elm = arrInt[i]
    if elm % 2 == 0:
        zstr += str(elm) + " + "
        zsum += elm
        count += 1

if count == 0:
    print("Avg: 0")
else:
    zstr = zstr[0:len(zstr) - 3]
    avg = zsum / count
    print("Avg: ({0}) / {1} = {2:.1f}".format(zstr, count, avg))
