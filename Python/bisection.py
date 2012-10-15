balance = 320000
annualInterestRate = 0.2

monthlyIntRate = annualInterestRate/12
low = balance/12
low1 = low
high = (balance*(1+monthlyIntRate)**12)/12
epsilon = 0.1
month = 1
ans = round((high + low)/2, 2)
while month <=11:
	if ans<high:
		high=ans
	else:
		low = ans
	month += 1
ubalance = (ans - monthlyIntRate)
print(str(round(ubalance, 2)))
