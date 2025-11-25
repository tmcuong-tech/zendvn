score = [2, 5, 8, 4, 10]
student = ["Han", "Dũng", "Linh", "Cường", "Lan"]

idx = 0
length = len(score)

for i in range(1, length):
    if score[i] > score[idx]:
        idx = i

print(f"HV có điểm cao nhất - {student[idx]}: {score[idx]}")
