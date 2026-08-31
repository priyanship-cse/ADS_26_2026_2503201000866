import numpy as np

# # 1. if else condition practise 

# marks1 = int(input(" marks of subject 1 : "))
# marks2 = int(input(" marks of subject 2 : "))
# marks3 = int(input(" marks of subject 3 : "))
# marks4 = int(input(" marks of subject 4 : "))
# marks5 = int(input(" marks of subject 5 : "))

# sum = marks1 + marks2 + marks3 + marks4 + marks5
# percent = (sum / 500) * 100

# if percent > 90 :
#     print("Grade A" , "Your Percentage is : " , percent)
# elif percent > 75 and percent < 90 :
#     print("Grade B" , "Your Percentage is : " , percent)
# elif percent > 45 and percent < 75 :
#     print("Grade C" , "Your Percentage is : " , percent)
# else :
#     print("Fail" , "Your Percentage is : " , percent)
    
#    # 2.ODD EVEN CHECK

# number = int(input("Enter a number to check even or odd :  "))
# if number % 2 == 0:
#      if number / 5 == 0:
#       print("EVEN and Divisible by 5")
     
# else :
#    print("ODD") 

# # 3.  1 to n number print 

# n = int(input("Enter a number :  "))
# for i in range(1,n+1):
#     print(i)


# # 4. reverse print 

# for i in range(n ,0,-1):
#     print(i)


# 5. 1 to n sum 

n = int(input("Enter number to add  : " ))
sum = 0

for i in range(1 , n + 1):
    sum = sum+i


print(sum)


a1 = np.arange(2,21)
print(a1)
print(a1[a1 % 2 == 0])

a2  =np.array([10,20,30,40,50])
print("Sum: " ,np.sum(a2))
print( "Mean : ",np.mean(a2))
print("Max: " ,np.max(a2))
print("Min : " ,np.min(a2))
print("Std : " ,np.std(a2))
print("Var : " ,np.var(a2))

a3 = 10
print(np.zeros(a3))
print(np.ones(a3))


a4 = np.array([1,20,5])
print(a4)



