x = {
    "Red": [620, 780],
    "Orange": [590, 620],
    "Yellow": [570, 590],
    "Green": [495, 570],
    "Blue": [450, 495],
    "Indigo": [425, 450],
    "Violet": [380, 425]
}
n = int(input())
for i, j in x.items():
    if j[0] <= n <= j[1]:
        print(i)
        break
