arr=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
ldiagsum=0;
rdiagsum=0;
for i in range(len(arr)):
    for j in range(len(arr[i])):

        if len(arr)-1-i==j:
            print(arr[i][j])
