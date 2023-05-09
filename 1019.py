seconds = int(input())

hours = seconds // 3600
minutes = (seconds % 3600) // 60
seconds = (seconds % 3600) % 60

print("{}:{}:{}".format(hours, minutes, seconds))
