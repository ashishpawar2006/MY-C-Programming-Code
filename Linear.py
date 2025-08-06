list=[]
print("Enter Elements")
for i in range(10):
    x=int(input())
    list.append(x)
target=int(input("Enter Element to Search: "))
for i in range(10):
    if x==list[i]:
        print(f"Element is present at {i} index")
