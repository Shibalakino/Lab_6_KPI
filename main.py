s = float(input("Enter a value of start point s = "))
t = float(input("Enter a value of end point t = "))

def my_max(x, y):
    if x >= y:
        return round(x)
    else:
        return round(y)

def h(a, b):
    res = (a / (1 + pow(b, 2)) + (b / (1 + pow(a, 2))) - pow((a - b), 3))
    return res

def result(s, t):
    res = h(s, t) + max(pow(h(s - t, s * t), 2), pow(h(s - t, s + t), 4)) + h(1, 1)
    return  res

print(result(s, t))
