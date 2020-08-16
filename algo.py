from math import floor, log, pow

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

def shmomo(s, f):
    return "".join(map(f, s))

def lhomo(l, f):
    return set(map(lambda S : shomo(s, f), l))

def lexlt(s, t): 
	if (s==""):
		return True 
	if (t==""):
		return False 
	if (s[0] < t[0]):
		return True
	return (s[0] == t[0]) & lexlt((s[1::], t[1::]))

def nthnumeric(N, Sigma = {'a', 'b'}):
    if (type(Sigma) == set):
        S = Sigma
    else:
        assert(type(Sigma) == list)
        S = Sigma
    assert(len(Sigma) == 2)
    if (N == 0):
        return ""
    else:
        width = floor(log(N + 1, 2))
        tofill = int(N - pow(2, width) + 1)
        relevant_binstr = bin(tofill)[2::]
        len_to_makeup = width - len(relevant_binstr)
        return (S[0] * len_to_makeup + shomo(relevant_binstr, lambda x : S[1] 
            if x == '1' else S[0]))

	



