courses = ['History', 'Math', "Physics", 'CompSci']

print(courses)

print(len(courses))

print(courses[2])

print(courses[-1]) 

print(courses[:2])

print(courses[2:])

courses.append('Art') 
print(courses)

courses.insert(0, 'Language') 
print(courses)

courses_2 = ['Philosophy', 'Education']
courses.extend(courses_2) 
print(courses)

courses.remove('Math')
print(courses)

popped = courses.pop() 
print(courses)
print(popped) 

courses.reverse() 
print('\n',courses)

courses.sort() 
print('\n',courses)

courses.sort(reverse=True) 
print('\n',courses)

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
