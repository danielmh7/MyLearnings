import psutil

memory = psutil.virtual_memory()

def convert_bytes(size):
    "Convert bytes to GB"
    gb = size / (1024 ** 3)
    return gb

total_gb = convert_bytes(memory.total)
available_gb = convert_bytes(memory.available)
used_gb = convert_bytes(memory.used)

print(f"Total Memory: {total_gb:.2f} GB")
print(f"Available Memory: {available_gb:.2f} GB")
print(f"Used Memory: {used_gb:.2f} GB")
print(f"RAM Usage: {memory.percent}%")