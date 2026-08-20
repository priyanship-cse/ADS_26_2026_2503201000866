# if else condition practise 

marks1 = int(input(" marks of subject 1 : "))
marks2 = int(input(" marks of subject 2 : "))
marks3 = int(input(" marks of subject 3 : "))
marks4 = int(input(" marks of subject 4 : "))
marks5 = int(input(" marks of subject 5 : "))

sum = marks1 + marks2 + marks3 + marks4 + marks5
percent = (sum / 500) * 100

if percent > 90 :
    print("Grade A" , "Your Percentage is : " , percent)
elif percent > 75 and percent < 90 :
    print("Grade B" , "Your Percentage is : " , percent)
elif percent > 45 and percent < 75 :
    print("Grade C" , "Your Percentage is : " , percent)
else :
    print("Fail" , "Your Percentage is : " , percent)
    

