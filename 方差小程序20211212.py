while True:
    a = input("请输入需要求方差的数个数：")
    b = int(a)
    f = b
    p = []
    m = []
    unit = []
    for c in range(f):
        global d
        c = input('请依次输入需求方差的各个数字：')
        d = float(c)
        p.append(d)
    q = sum(p)
    ff = q/f #p平均数

    for qq in p:
        sb = qq-ff #各个数据与平均数的差
        m.append(sb)

    for sm in m:
        ppp = sm**2
        unit.append(ppp)

    ggg = sum(unit)
    qqq = ggg/f
    print("该组数据的方差为:"+str(qqq))
    break









    

