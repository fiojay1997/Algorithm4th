def phi():
    return set()

def unit():
    return {""}

def exp(L, n):
    return unit() if n == 0 else cat(L, exp(L, n-1))

def lunion(L1,L2):
    return L1 | L2

def lint(1,L2):
    return L1 & L2

def star(L, n):
    return unit() if n == 0 else lunion(exp(L, n), star(L, n-1))

def shmomo(s, f):
    return "".join(map(f, s))

def lhomo(l. f):
    return set(map(lambda S : shomo(s, f), l))

def lexlt(s, t): 
	if (s==""):
		return True 
	if (t==""):
		return False 
	if (s[0] < t[0]):
		return True
	return (s[0] == t[0]) & lexlt((s[1::], t[1::]))
