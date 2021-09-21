def coppersmith_howgrave_univariate(pol, N, K):

    polZ = pol.change_ring(ZZ)
    x = polZ.parent().gen()
	
    gg = []
    for i in range(5):
        gg.append((K**i)*(x**i)*(N**2))
    gg.append(N*polZ(x * K))
    gg.append(K*x*N*polZ(x * K))
	
    BB = Matrix(ZZ, 7)

    for ii in range(7):
        for jj in range(7):
            BB[ii, jj] = gg[ii][jj]

    BB = BB.LLL()

    new_pol = 0
    for ii in range(7):
        new_pol += x**ii * BB[0, ii] / K**ii

    potential_roots = new_pol.roots()

    roots = []
    for root in potential_roots:
        if root[0].is_integer():
            result = polZ(ZZ(root[0]))
            if gcd(N, result) >= N:
                roots.append(ZZ(root[0]))

    return roots

N = 84364443735725034864402554533826279174703893439763343343863260342756678609216895093779263028809246505955647572176682669445270008816481771701417554768871285020442403001649254405058303439906229201909599348669565697534331652019516409514800265887388539283381053937433496994442146419682027649079704982600857517093
C = 23701787746829110396789094907319830305538180376427283226295906585301889543996533410539381779684366880970896279018807100530176651625086988655210858554133345906272561027798171440923147960165094891980452757852685707020289384698322665347609905744582248157246932007978339129630067022987966706955482598869800151693

ZmodN = Zmod(N)

def decode(root):
    l = len(bin(root)[2:])
    if(root < 0):
        root = (1 << l) + root
    root = bin(root)[2:]
    passphrase = []
    offset = l%8
    no_of_terms = l//8
    for block in range(no_of_terms):
        c = root[offset+block*8:offset+(block+1)*8]
        passphrase.append(chr(int(c, 2)))
    return "".join(passphrase)

def revert(M_str, max_length_x):
    global e, C, ZmodN
    binary_padding = ''.join(['{0:08b}'.format(ord(x)) for x in M_str])

    for length_x in range(72, 73):
        P.<x> = PolynomialRing(ZmodN)
        pol = ((int(binary_padding, 2)<<length_x) + x)^5 - C
        XX = ceil(N**((1/5) - 1/7))

        roots = coppersmith_howgrave_univariate(pol, N, XX)

        if roots:
            print("Solution : ",decode(roots[0]))
            return

    print('No solution found')

if __name__ == "__main__":
    padding = "You see a Gold-Bug in one corner. It is the key to a treasure found by"
    revert(padding, 300)
