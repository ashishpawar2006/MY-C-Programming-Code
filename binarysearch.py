#list=[1,2,3,4,5,6,7,8,9,10,12,15,17]
list=[21,34,56,78,89,92,104,109,118,120]
target=int(input("Enter Number to search: "))
beg=0
end=len(list)-1
found=False2

mid=(beg+end)//2
while mid>0:
    
    
    if target==list[mid]:
        print(f"Element Found at {mid} index it is elemnt no:'{mid+1}'")
        found=True
        break
    elif target>list[mid]:
        beg=mid
    else:
        end=mid    
    mid=(beg+end)//2
if found==False:
    print("Element is not in the list")        
