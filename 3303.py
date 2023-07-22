while True:
    try:
        word = input()

        if len(word) >= 10:
            print("palavrao")
        else:
            print("palavrinha")

    except EOFError:
        break
