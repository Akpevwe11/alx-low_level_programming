filename = "102-result"

with open(filename, "r") as file:
    content = file.read()

if "\n" in content or " " in content:
    print("The file contains newline or extra space.")
else:
    print("The file does not contain newline or extra space.")

