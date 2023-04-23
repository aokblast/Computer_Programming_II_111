import subprocess, random, string

def get_test_case():
    query = ''.join(random.choice(string.ascii_lowercase) for _ in range(random.randint(1, 50000)))
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


        with open('01{:02}.in'.format(x), mode="w") as f:
            f.write(query + '\n')

        with open('01{:02}.out'.format(x), mode="w") as f:
            f.write(output)
