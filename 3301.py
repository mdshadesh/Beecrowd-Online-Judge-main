def find_middle_nephew(h, z, l):
    if (h > z and h < l) or (h < z and h > l):
        return "huguinho"
    elif (z > h and z < l) or (z < h and z > l):
        return "zezinho"
    else:
        return "luisinho"

# Read input until there is no more data
while True:
    try:
        h, z, l = map(int, input().split())
        middle_nephew = find_middle_nephew(h, z, l)
        print(middle_nephew)
    except EOFError:
        break
