balance = 320000
annualInterestRate = 0.2

monthintrate=annualInterestRate/12
monthlowb=balance/12
monthhighb=(balance*((1+monthintrate)**12))/12
while balance>0:    
    balance1=balance
    paymentpermonth=(monthlowb+monthhighb)/2
    for month in range(1, 13):        
        updbalance=(balance1-paymentpermonth)*(1+monthintrate)
        balance1=updbalance
    if balance1>0.01:
        monthlowb=paymentpermonth
    elif balance1<-0.01:
        monthhighb=paymentpermonth
    else:
        break
print('Lowest payment: ' + str(round(paymentpermonth, 2)))
