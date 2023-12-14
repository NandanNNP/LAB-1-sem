class student:
    school_name='ABC School'
    def __init__(self,name,age):
        self.name=name
        self.age=age
s1=student("Nandan P",21)
print('student details :',s1.name,s1.age)
print('school Name : ',student.school_name)
s1.name="Nbeel"
s1.age=99
print('student details : ',s1.name,s1.age)
student.school_name='XYZ School'
print('School Name : ',student.school_name)
