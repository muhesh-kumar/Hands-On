import re

# phoneNumRegex = re.compile(r'\d\d\d-\d\d\d-\d\d\d\d')
# mo = phoneNumRegex.search('My num is 111-111-1111')
# print('Phone Number found: ' + mo.group())

# phoneNumRegex = re.compile(r'(\d\d\d)-(\d\d\d-\d\d\d\d)')
# mo = phoneNumRegex.search('My num is 123-123-1231')

# print(mo.group(1))
# print(mo.group(2))
# print(mo.group(0))
# print(mo.group())
# print(mo.groups()) # To retrieve all the groups at once.

# areaCode, mainNumber = mo.groups() # mo.groups() returns a tuple of multiple valeus.
# print(areaCode, mainNumber)

# phoneNumRegex = re.compile(r'(\(\d\d\d\)) (\d\d\d-\d\d\d\d)')
# mo = phoneNumRegex.search('My ph no is: (123) 444-4444')
# print(mo.group(1))
# print(mo.group(2))

# heroRegex = re.compile(r'Batman|Tina Fey')
# mo1 = heroRegex.search('Batman and Tina Fey.')
# print(mo1.group())
# mo2 = heroRegex.search('Tina Fey and Batman')
# print(mo2.group())

# batRegex = re.compile(r'Bat(man|mobile|copter|bat)')
# mo = batRegex.search('Batmobile lost a wheel')
# print(mo.group())
# print(mo.group(1))

# batRegex = re.compile(r'Bat(wo)?man')
# mo1 = batRegex.search('The adventures of Batman')
# print(mo1.group())
# mo2 = batRegex.search('The adventures of Batwoman')
# print(mo2.group())

# phoneRegex = re.compile(r'(\d\d\d-)?\d\d\d-\d\d\d\d')
# mo1 = phoneRegex.search('My number is 412-222-2222')
# print(mo1.group())
# mo2 = phoneRegex.search('My number is 333-3333')
# print(mo2.group())

# batRegex = re.compile(r'Bat(wo)*man')
# mo1 = batRegex.search('The Adventures of Batman')
# print(mo1.group())
# mo2 = batRegex.search('The Adventures of Batwoman')
# print(mo2.group())
# mo3 = batRegex.search('The Adventures of Batwowowoman')
# print(mo3.group())

# batRegex = re.compile(r'Bat(wo)+man')
# mo1 = batRegex.search('The Adventures of Batman')
# print(mo1 == None)
# mo2 = batRegex.search('The Adventures of Batwoman')
# print(mo2.group())
# mo3 = batRegex.search('The Adventures of Batwowowoman')
# print(mo3.group())

# haRegex = re.compile(r'(Ha){3}')
# mo1 = haRegex.search('HaHaHa')
# print(mo1.group())
# mo2 = haRegex.search('Ha')
# print(mo2 == None)

# greedyRegex = re.compile(r'(Ha){3,5}')
# mo1 = greedyRegex.search('HaHaHaHaHa')
# print(mo1.group())

# nongreedyRegex = re.compile(r'(Ha){3,5}?')
# mo2 = nongreedyRegex.search('HaHaHaHaHa')
# print(mo2.group())

# phoneNumRegex = re.compile(r'(\d\d\d-\d\d\d-\d\d\d\d)')
# mo = phoneNumRegex.search('Cell 111-111-1111 Work: 222-222-2222')
# print(mo.group())


# phoneNumRegex = re.compile(r'\d\d\d\-\d\d\d-\d\d\d\d') #has no groups
# mo = phoneNumRegex.findall('Cell 111-111-1111 Work: 222-222-2222')
# print(mo)

# phoneNumRegex = re.compile(r'(\d\d\d)-(\d\d\d)-(\d\d\d\d)') # has groups
# mo = phoneNumRegex.findall('Cell 111-111-1111 Work: 222-222-2222')
# print(mo)