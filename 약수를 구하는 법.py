#약수를 구하는 법
number = int(input("Enter N : "))

print("[", end="")
for i in range(number):
    if number % (i+1) ==0:
        print((1+i), end=" ")
print("]")