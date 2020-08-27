## In this exercise, you will define prod(a, b) which returns the product of numbers a and b. You will also define fact_gen() which yields the next factorial number.

def prod(a,b):
    return a*b

## Generator function
def fact_gen():
    x = 1
    y = 1
    while True:
        output = prod(x,y)
        yield output
        x += 1
        y = output

my_gen = fact_gen()

for i in range(5):
    print(next(my_gen))