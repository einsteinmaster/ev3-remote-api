# Example

```
import time
import legoapi

ma = legoapi.Motor(legoapi.Output.A)
mb = legoapi.Motor(legoapi.Output.B)
print("1")
ma.run(80)
mb.run(80)
time.sleep(2)
print("2")
ma.run(0)
mb.brake()
time.sleep(2)
print("3")
ma.run_time(80,1500,legoapi.Then.Brake)
mb.run_time(80,1000,legoapi.Then.Brake)
time.sleep(3)
print("4")
ma.run_time(80,1500,legoapi.Then.Coast)
mb.run_time(80,1500,legoapi.Then.Brake)
time.sleep(3)
print("5")
ma.run_angle(80,1500,legoapi.Then.Brake)
mb.run_angle(80,1000,legoapi.Then.Brake)
time.sleep(3)
print("6")
ma.run_angle(80,1500,legoapi.Then.Coast)
mb.run_angle(80,1500,legoapi.Then.Brake)
time.sleep(2)
```