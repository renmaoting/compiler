x = 1
def f():
    x = 9
    def g():
        x=3
        print x
    global x
    g()
    x += 1
    return x
print f()
print x
