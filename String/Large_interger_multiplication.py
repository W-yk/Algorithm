def Large_product(a,b):
    
    a_reverse=[int(i) for i in a[::-1]]
    b_reverse=[int(i) for i in b[::-1]]
    num_c=[]
    #digit-wise product
    for i in range(len(a_reverse)):
        for j in range(len(b_reverse)):
            try:
                num_c[i+j]+= a_reverse[i]*b_reverse[j]
            except IndexError:
                num_c.append(a_reverse[i]*b_reverse[j])
    
    #carry bits
    d=0
    for n in range(len(num_c)):
        num_c[n]+=d
        d=int(num_c[n]/10)
        num_c[n]%=10
    #for the last digit
    while(d>0):
        num_c.append(d%10)
        d=int(d/10)
    
    #reverse and transfer output into string
    output=''.join([str(i) for i in num_c[::-1]])
    print(output)

Large_product('100','123')
Large_product('22','111')
Large_product('3141592653589793238462643383279502884197169399375105820974944592',
              '2718281828459045235360287471352662497757247093699959574966967627')