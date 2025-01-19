class General(Exception):pass
class Specific1(General):pass
class Specific2(General):pass

def raiser0():
    raise General()
    raise X
def raiser1():
    x1= Specific1()
    raise x1
def raiser2():
    x= Specific2()
    raise x
for func in(raiser0, raiser1, raiser2):
    try:
        func()
    except General:
        import sys
        print('caught: %s' % sys.exc_info()[0])