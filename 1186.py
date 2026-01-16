O=input().strip().upper()
cols,rows=3,3
sec_di=[[0 for _ in range(cols)]for _ in range(rows)]
sum_dia=0
count=0

for i in range(rows):
    for j in range(cols):
        sec_di[i][j]=float(input())

for i in range(1,rows):
    for j in range(cols-i,cols,1):
        sum_dia +=sec_di[i][j]
        count +=1
if O=='S':
    result=sum_dia
elif O=='M':
    result=sum_dia/count
print(f"{result:.1f}")