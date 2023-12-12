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
        # bütün değişkenler aynı satırda inputlanmalı

        if totalDist + totalTime > 120:
            distance = 120 - totalDist

        time = travelTime(distance,speed)
        #basit bir işlem için fonksiyona gerek yok

        totalDist += distance
        totalTime += time

        average = averageSpeed(totalDist,totalTime)
        #aynı fonksiyonu iki kez farklı değişkenlerle yazmışsın(!) gereksiz.

        print(f"Average Speed: {average:} km/h.")

compareDist()

#yazdığın kodu kontrol etmediğin çok belli
#baştan bu sefer kendin dikkat ederek yazmanı istiyorum.

#! Rejected