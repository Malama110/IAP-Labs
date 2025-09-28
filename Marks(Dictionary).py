N = int(input())
school_dict = {}
names = []
for i in range(N):
    name = input().strip()
    grade = input().strip()
    school_dict[name] = grade
    names.append(name)
names.sort()
for name in names:
    print(name, ":", school_dict[name])
