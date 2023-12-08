def travelTime(distance,speed):
    return (distance/speed)

def averageSpeed(totalDist,totalTime):
    return (totalDist/totalTime)

def compareDist():
    totalDist = 0
    totalTime = 0

    while totalDist < 120:
        distance = int(input("Distance (km): "))
        speed = int(input("Speed (km/h): "))

        if totalDist + totalTime > 120:
            distance = 120 - totalDist
    
        time = travelTime(distance,speed)

        totalDist += distance
        totalTime += time

        average = averageSpeed(totalDist,totalTime)
        print(f"Average Speed: {average:} km/h.")

compareDist()