def calculate_sodas_drunk(E, F, C):
    total_bottles = E + F
    sodas_drunk = 0

    while total_bottles >= C:
        new_sodas = total_bottles // C
        sodas_drunk += new_sodas
        total_bottles = (total_bottles % C) + new_sodas

    return sodas_drunk

# Read input
E, F, C = map(int, input().split())
sodas_drunk = calculate_sodas_drunk(E, F, C)
print(sodas_drunk)
