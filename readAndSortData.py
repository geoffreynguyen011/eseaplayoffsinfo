file1 = open('data.txt', 'r')
Lines = file1.readlines()

count = 0

# format: [
#     [teamname, wins, losses, ties, win %, streak, rounds won, rounds lost],
#     [teamname2, wins, losses, ties, win %, streak, rounds won, rounds lost],
# ]

# gets each team and its stats
for line in Lines:
    count += 1
    print("{}".format(line.strip()))