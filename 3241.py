# Function to solve addition problems and handle "P=NP"
def solve_addition_problem(problem):
    if problem == "P=NP":
        return "skipped"
    else:
        a, b = map(int, problem.split('+'))
        return a + b

# Read input
N = int(input())
for _ in range(N):
    problem = input()
    result = solve_addition_problem(problem)
    print(result)
