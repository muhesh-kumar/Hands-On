class Employee:

    def __init__(self, first, last, pay):
        self.first = first # attributes
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + "@company.com"
    
    def fullname(self): # methods(self must be passed as a parameter and it will be passed automatically as an argument at the time of interpretation)
        return "{} {}".format(self.first, self.last)


# WITHOUT CONSTRUCTOR: 
# emp_1 = Employee()
# emp_2 = Employee()

# print(emp_1)
# print(emp_2)

# emp_1.first = "Muhesh"
# emp_1.last = "Kumar"
# emp_1.email = "g@gmail.com"
# emp_1.pay = 50000

# emp_2.first = "Muhesh"
# emp_2.last = "Kumar"
# emp_2.email = "g@gmail.com"
# emp_2.pay = 50000

# WITH CONSTRUCTOR
emp_1 = Employee("John", "Doe", 30000)
emp_2 = Employee("Test", "User", 89787)

print(emp_1.email)
print(emp_2.email)

print(emp_1.fullname())
print(Employee.fullname(emp_1))
# both of the above lines do the same work