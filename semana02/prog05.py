student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
print(student)

print('\n',student['name'])

print(student.get('phone', 'Not Found'))

student['phone'] = '555-5555'
student['name'] = 'Jane'
print('\n',student)

student.update({'age': 23, 'phone': '555-0000'})
print('\n',student)

del student['age']
print('\n',student)

phone = student.pop('phone')
print('\n',phone)
print(student)

print('\n',len(student))

print('\n',student.keys())
print(student.values())

print('\n',student.items())

print('\n')
for key in student:
    print(key)

print('\n')
for key, value in student.items():
    print(key, value)

sorted_courses = sorted(courses)
print('\n',sorted_courses)

nums = [1, 5, 2, 4, 3]
print('\n',min(nums))
print(max(nums))
print(sum(nums))

print(courses.index('CompSci')) 

print('Art' in courses)
print('Math' in courses)

print('\n')
for item in courses:
    print(item)

print('\n')
for index, course in enumerate(courses, start=1): 
    print(index, course)

course_str = ' - '.join(courses)
print('\n',course_str)

new_list = course_str.split(' - ')
print('\n',new_list)

print('\n')
#tuple_1 = ('History', 'Math', 'Physics', 'CompSci')
#tuple_2 = tuple_1
#tuple_1[0] = 'Art'
#print(tuple_1)
#print(tuple_2)

cs_courses = {'History', 'Math', 'Physics', 'CompSci'} 
print(cs_courses)
print('Math' in cs_courses)

art_courses = {'History', 'Math', 'Art', 'Design'}
print(cs_courses.intersection(art_courses))
print(cs_courses.difference(art_courses))
print(cs_courses.union(art_courses))

empty_list = []
empty_list = list() 
