def phi():
    return set()

def unit():
    return {""}

def exp(L, n):
    return unit() if n == 0 else cat(L, exp(L, n-1))

def lunion(L1,L2):
    return L1 | L2

def lint(L1,L2):
    return L1 & L2

def star(L, n):
    return unit() if n == 0 else lunion(exp(L, n), star(L, n-1))