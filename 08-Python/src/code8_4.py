import sys
while True:
    x = input("Enter positive number: ")
    try:
        x = float(x)
    except ValueError:
        print(f"{x}は数値に変換できません")
        continue
    except:
        print("予期せぬエラーです")
    if x <= 0:
        print(f"{x}は正の数ではありません")
        continue
    break
print(x)