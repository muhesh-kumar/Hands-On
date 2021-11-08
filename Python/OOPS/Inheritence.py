class Employee:

    def __init__(self, first, last, pay):
        self.first = first # attributes
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + "@company.com"
    
    def fullname(self):
        return "{} {}".format(self.first, self.last)
    
class Developer(Employee):
    pass

emp_1 = Developer("John", "Doe", 30000)
emp_2 = Developer("Test", "User", 89787)

print(emp_1.email)
print(emp_2.email)

print(help(Developer))