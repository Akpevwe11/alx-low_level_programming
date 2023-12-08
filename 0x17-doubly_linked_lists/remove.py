filename = "102-result"

with open(filename, "r") as file:
    content = file.read()

# Eliminate newline characters and extra spaces
cleaned_content = content.strip()

# Write the cleaned content back to the file
with open(filename, "w") as file:
    file.write(cleaned_content)

print("File cleaned successfully.")
