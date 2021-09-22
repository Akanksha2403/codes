import random
a = dict()
for i in range(100000):
    a[chr(random.randint(65, 90))] += 1
for key, value in a.iteritems():
    print(key, value)
