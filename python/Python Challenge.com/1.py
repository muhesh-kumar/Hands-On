s = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
ans = ""
alphs = list(map(chr, range(97, 123)))
s = "map"
for i in s:
    if i == 'y':
        ans += "a"
    elif i == 'z':
        ans += "b"
    elif i.isalpha():
        ans += chr(ord(i) + 2)
    else:
        ans += i
print(ans)
