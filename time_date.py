
# `from datetime import datetime` is a Python statement that imports the `datetime` class from the
# `datetime` module. This allows you to work with date and time objects in your Python code. By
# importing `datetime` in this way, you can directly access the `datetime` class and its methods
# without having to prefix them with the module name.
# current time and date
print("the sum of the numbers",sum)
from datetime import datetime

# Get the current date and time
now = datetime.now()

# Print the current date and time in the format "YYYY-MM-DD HH:MM:SS.ssssss"
print(now.strftime('%Y-%m-%d %H:%M:%S.%f'))
