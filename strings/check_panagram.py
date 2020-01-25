def check_panagram(
    input_str: str = "The quick brown fox jumps over the lazy dog",
) -> bool:

    frequency = set()
    input_str = input_str.replace(" ", "")
    for alpha in input_str:
        if "a" <= alpha.lower() <= "z":
            frequency.add(alpha.lower())

    return True if len(frequency) == 26 else False


if __name__ == "main":
    check_str = "INPUT STRING"
    status = check_panagram(check_str)
    print(f"{check_str} is {'not ' if status else ''}a panagram string")
