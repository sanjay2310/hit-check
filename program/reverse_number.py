number=int(input("enter the nuamber"))
reverse=0
while(number>0):

    remainder=number%10
    reverse=(reverse*10)+remainder
    number=number//10
print(reverse)
