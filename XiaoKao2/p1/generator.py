import subprocess, random, string

def get_test_case():
    query=""
    n = random.randint(100000, 1000000)
    query += str(n) + '\n'
    query += ''.join("{0:010b}\n".format(random.randint(0, 1023)) for _ in range(n))
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
