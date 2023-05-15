import subprocess, random, string

def get_test_case():
    query=""
    n = random.randint(100000, 500000)
    query += str(n) + '\n'
    mp = set()

    for _ in range(n):
        cur = ''.join(random.choice(string.ascii_lowercase) for _ in range(random.randint(1, 32)))
        mp.add(cur)
        query += cur + ' ' + str(random.randint(1, 100000)) + '\n'

    q = random.randint(100000, 500000)
    query += str(q) + '\n'

    for _ in range(q):
        c = random.randint(0, 1)
        if c == 1:
            query += ''.join(random.choice(string.ascii_lowercase) for _ in range(random.randint(1, 32)))
        else:
            query += random.sample(mp, 1)[0]
        query += '\n'

    args = ("./sol")
    popen = subprocess.Popen(args, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    popen.stdin.write(query.encode())
    popen.stdin.close()
    popen.wait()
    output = popen.stdout.read()


    return (query, output.decode())


if __name__ == "__main__":
    for x in range(10):
        (query, output) = get_test_case()

        with open('00{:02}.in'.format(x), mode="w") as f:
            f.write(query + '\n')

        with open('00{:02}.out'.format(x), mode="w") as f:
            f.write(output)
