import numpy as np
 #1d array 





 



#2d array 

arr2 = np.array([
    [1,2,3],
    [4,5,6]
])
print(arr2)

#3d araay 

arr3 = np.array([
    [[11,21,31],
     [30,40,72]],
    [[0,66,98],
     [71,89,92]]
])

print(arr3)

ar = np.arange(12)


print(ar.reshape(4,3))
ar.flatten()

# indexing 

arr = np.array([[1,2,3] , [4,5,6]])
print(arr[0,2])
print(arr[1,2])


#sliciing
ar1 = np.arange(10)
print(ar1[2:7])
print(ar1[:5])
print(ar1[5:])

# mathmetical operation


b=np.array([4,5,6])
c =np.array([7,8,9])

print(b+c)
print(b-c)
print(b/c)
print(b*c)


# aggregate function 


a5 =np.array([10,20,30,40,50])
print("Sum: " ,np.sum(a5))
print( "Mean : ",np.mean(a5))
print("Max: " ,np.max(a5))
print("Min : " ,np.min(a5))
print("Std : " ,np.std(a5))
print("Var : " ,np.var(a5))

ar5 = np.array([10,200,3,40,5])

print(np.sort(ar5))