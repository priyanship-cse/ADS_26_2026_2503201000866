x = {"apple" ,"banana" , "cherry"}
y = {"apple" , "banana" , "cherry"}
z = x


print(x is z )
print(x is y )
print(x == y )

# Creating a dictionary

thisdict = { 
    "brand": "Ford",
    "model": "Mustang",
    "year1": 1994,
    "color": "red",
    "year" : 1994,

}

print(thisdict);
print("Length of this dictionary is : " ,(len(thisdict)) );

    
student = {
    "name" : "Prashant Tomar",
    "age" : 31,
}

student.update(
   
   {"city" : "Baraut"}



    )

print(student); 

# del delete last element of dictionary
del student["age"]

print(student);

# clear delete all elements of dictionary
student.clear()


# if else condition

num = 10
if num > 0 :
    print("Number is positive")
else:
    print("Number is not positive")

# elif condition
age = int(input("Enter your age : "))
if age >= 18 :
 print("Eligible")
else :
   print("Not Eligible")

# loops 

