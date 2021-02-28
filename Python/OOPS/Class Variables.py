class Employee:

    num_of_emps = 0
    raise_amount = 1.04 # class variable

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + "@company.com"

        Employee.num_of_emps += 1 # instead of using self. we use Employee.
    
    def fullname(self):
        return "{} {}".format(self.first, self.last)

    def apply_raise(self): #class variables can be accessed only through class name or with self
        self.pay = int(self.pay * self.raise_amount)
        # self.pay = int(self.pay * Employee.raise_amount)

print(Employee.num_of_emps)


emp_1 = Employee("John", "Doe", 30000)
emp_2 = Employee("Test", "User", 89787)

# print(emp_1.pay)
# emp_1.apply_raise()
# print(emp_1.pay)

# print(emp_1.__dict__) # returns the namespace of the object or a class
emp_1.raise_amount = 1.05 # creates the raise_amount attribute emp_1 and assigns 1.05
# print(emp_1.__dict__)


# print(Employee.raise_amount)
# print(emp_1.raise_amount)
# print(emp_2.raise_amount)

# print(emp_1.__dict__)
# print(Employee.__dict__)

print(Employee.num_of_emps)