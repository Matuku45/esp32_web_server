@echo off
for /L %%i in (1,1,10) do (
    echo {"sensor": %RANDOM%, "temperature": %RANDOM%*15/32768+20, "humidity": %RANDOM%*40/32768+40, "timestamp": "%TIME:~0,8%"} > data.json
    git add data.json
    git commit -m "Update %%i: sensor reading at %TIME:~0,8%"
)
