import subprocess, random, string

def get_test_case():
    n = random.randint(1, 50)
    query = ''.join(random.choice(string.ascii_letters) for x in range(random.randint(1, 1000)))
    args = ("./sol")
    popen = subprocess.Popen(args, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    popen.stdin.write((str(n) + '\n').encode())
    popen.stdin.write(query.encode())
    popen.stdin.close()
    popen.wait()
    output = popen.stdout.read()
    return (n, query, output.decode())


if __name__ == "__main__":
    for x in range(0, 11):
        (n, query, output) = get_test_case()


        with open('00{:02}.in'.format(x), mode="w") as f:
            f.write((str(n) + '\n'))
            f.write(query + '\n')

        with open('00{:02}.out'.format(x), mode="w") as f:
            f.write(output)
