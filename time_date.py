# current time and date
print("the sum of the numbers",sum)
from datetime import datetime

# Get the current date and time
now = datetime.now()

# Print the current date and time in the format "YYYY-MM-DD HH:MM:SS.ssssss"
print(now.strftime('%Y-%m-%d %H:%M:%S.%f'))
