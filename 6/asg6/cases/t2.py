x = 1
def f():
    x = 9
    global x
    x += 1
    return x

print f()
x += 1
print x
