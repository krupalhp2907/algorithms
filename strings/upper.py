def upper(word: str) -> str:
    return "".join(
        chr(ord(char) - 32) if 97 <= ord(char) <= 122 else char
        for char in word)
