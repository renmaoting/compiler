x = 1
def f():
    x = 9
    print x
    def g():
        x=3
        x += 2
    x += 1
    return x

print f()
