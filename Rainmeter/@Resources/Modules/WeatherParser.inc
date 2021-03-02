[Variables]
WeatherIconNames="3200":"ERROR", "47":"Storm", "46":"Snow", "45":"Rain", "44":"PartlyCloudy-Day", "43":"Snow", "42":"Snow", "41":"Snow", "40":"Rain", "39":"Rain", "38":"Thunder", "37":"Thunder", "36":"Clear-Day", "35":"Storm", "34":"PartlyCloudy-Day", "33":"PartlyCloudy-Night", "32":"Clear-Day", "31":"Clear-Night", "30":"PartlyCloudy-Day", "29":"PartlyCloudy-Night", "28":"MostlyCloudy-Day", "27":"MostlyCloudy-Night", "26":"Cloudy", "25":"Cloudy", "24":"Windy", "23":"Windy", "22":"Haze", "21":"Haze", "20":"Haze", "19":"Haze", "18":"Sleet", "17":"Storm", "16":"Snow", "15":"Snow", "14":"Snow", "13":"Snow", "12":"Rain", "11":"Rain", "10":"Sleet", "9":"Rain", "8":"Sleet", "7":"Sleet", "6":"Sleet", "5":"Sleet", "4":"Storm", "3":"Storm", "2":"Rain", "1":"Rain", "0":"Storm"
@Include=#@#Modules\WeatherParserCache.inc

[MeasureWeather]
Measure=WebParser
URL    =https://query.yahooapis.com/v1/public/yql?q=select * from weather.forecast where woeid in (select woeid from geo.places(1) where text="#Location#") and u="#Unit#"
RegExp=(?siU)<yweather:units .* distance="(.*)" pressure="(.*)" speed="(.*)" temperature="(.*)"/>.*<yweather:location .* city="(.*)" country="(.*)" region=" (.*)"/>.*<yweather:wind .* chill="(.*)" direction="(.*)" speed="(.*)"/>.*<yweather:atmosphere .* humidity="(.*)" pressure="(.*)" rising="(.*)" visibility="(.*)"/>.*<yweather:astronomy .* sunrise="(.*)" sunset="(.*)"/>.*<geo:lat .*>(.*)</geo:lat>.*<geo:long .*>(.*)</geo:long>.*<yweather:condition .* code="(.*)" date=".*" temp="(.*)" text="(.*)"/>.*<yweather:forecast .* code="(.*)" date="(.*)" day="(.*)" high="(.*)" low="(.*)" text="(.*)"/>.*<yweather:forecast .* code="(.*)" date="(.*)" day="(.*)" high="(.*)" low="(.*)" text="(.*)"/>.*<yweather:forecast .* code="(.*)" date="(.*)" day="(.*)" high="(.*)" low="(.*)" text="(.*)"/>.*<yweather:forecast .* code="(.*)" date="(.*)" day="(.*)" high="(.*)" low="(.*)" text="(.*)"/>.*<yweather:forecast .* code="(.*)" date="(.*)" day="(.*)" high="(.*)" low="(.*)" text="(.*)"/>
UpdateRate=600
FinishAction=[!WriteKeyValue Variables CachedWeatherUnitsSpeed "[MeasureWeatherUnitsSpeed]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherUnitsPressure "[MeasureWeatherUnitsPressure]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherUnitsDistance "[MeasureWeatherUnitsDistance]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherUnitsTemperature "[MeasureWeatherUnitsTemperature]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherLocationCity "[MeasureWeatherLocationCity]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherLocationCountry "[MeasureWeatherLocationCountry]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherLocationRegion "[MeasureWeatherLocationRegion]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherWindChill "[MeasureWeatherWindChill]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherWindDirection "[MeasureWeatherWindDirection]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherWindSpeed "[MeasureWeatherWindSpeed]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAtmosphereHumidity "[MeasureWeatherAtmosphereHumidity]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAtmospherePressure "[MeasureWeatherAtmospherePressure]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAtmosphereRising "[MeasureWeatherAtmosphereRising]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAtmosphereVisibility "[MeasureWeatherAtmosphereVisibility]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAstronomySunrise "[MeasureWeatherAstronomySunrise]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherAstronomySunset "[MeasureWeatherAstronomySunset]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherGeoLat "[MeasureWeatherGeoLat]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherGeoLong "[MeasureWeatherGeoLong]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherConditionCode "[MeasureWeatherConditionCode]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherConditionTemp "[MeasureWeatherConditionTemp]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherConditionText "[MeasureWeatherConditionText]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0Code "[MeasureWeatherForecastDay0Code]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0Date "[MeasureWeatherForecastDay0Date]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0Day "[MeasureWeatherForecastDay0Day]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0High "[MeasureWeatherForecastDay0High]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0Low "[MeasureWeatherForecastDay0Low]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay0Text "[MeasureWeatherForecastDay0Text]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1Code "[MeasureWeatherForecastDay1Code]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1Date "[MeasureWeatherForecastDay1Date]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1Day "[MeasureWeatherForecastDay1Day]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1High "[MeasureWeatherForecastDay1High]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1Low "[MeasureWeatherForecastDay1Low]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay1Text "[MeasureWeatherForecastDay1Text]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2Code "[MeasureWeatherForecastDay2Code]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2Date "[MeasureWeatherForecastDay2Date]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2Day "[MeasureWeatherForecastDay2Day]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2High "[MeasureWeatherForecastDay2High]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2Low "[MeasureWeatherForecastDay2Low]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay2Text "[MeasureWeatherForecastDay2Text]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3Code "[MeasureWeatherForecastDay3Code]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3Date "[MeasureWeatherForecastDay3Date]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3Day "[MeasureWeatherForecastDay3Day]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3High "[MeasureWeatherForecastDay3High]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3Low "[MeasureWeatherForecastDay3Low]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay3Text "[MeasureWeatherForecastDay3Text]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4Code "[MeasureWeatherForecastDay4Code]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4Date "[MeasureWeatherForecastDay4Date]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4Day "[MeasureWeatherForecastDay4Day]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4High "[MeasureWeatherForecastDay4High]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4Low "[MeasureWeatherForecastDay4Low]" "#@#Modules\WeatherParserCache.inc"] [!WriteKeyValue Variables CachedWeatherForecastDay4Text "[MeasureWeatherForecastDay4Text]" "#@#Modules\WeatherParserCache.inc"][!UpdateMeterGroup Weather][!UpdateMeterGroup Weather]

; ----------------------------------------- 

[MeasureWeatherUnitsDistance]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=1
Substitute ="":"#CachedWeatherUnitsDistance#"

[MeasureWeatherUnitsPressure]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=2
Substitute ="":"#CachedWeatherUnitsPressure#"

[MeasureWeatherUnitsSpeed]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=3
Substitute ="":"#CachedWeatherUnitsSpeed#"

[MeasureWeatherUnitsTemperature]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=4
Substitute ="":"#CachedWeatherUnitsTemperature#"

; ----------------------------------------- 

[MeasureWeatherLocationCity]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=5
Substitute ="":"#CachedWeatherLocationCity#"

[MeasureWeatherLocationCountry]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=6
Substitute ="":"#CachedWeatherLocationCountry#"

[MeasureWeatherLocationRegion]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=7
Substitute ="":"#CachedWeatherLocationRegion#"

; ----------------------------------------- 

[MeasureWeatherWindChill]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=8
Substitute ="":"#CachedWeatherWindChill#"

[MeasureWeatherWindDirection]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=9
Substitute ="":"#CachedWeatherWindDirection#"

[MeasureWeatherWindSpeed]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=10
Substitute ="":"#CachedWeatherWindSpeed#"

[MeasureWeatherAtmosphereHumidity]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=11
Substitute ="":"#CachedWeatherAtmosphereHumidity#"

[MeasureWeatherAtmospherePressure]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=12
Substitute ="":"#CachedWeatherAtmospherePressure#"

[MeasureWeatherAtmosphereRising]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=13
Substitute ="":"#CachedWeatherAtmosphereRising#"

[MeasureWeatherAtmosphereVisibility]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=14
Substitute ="":"#CachedWeatherAtmosphereVisibility#"

[MeasureWeatherAstronomySunrise]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=15
Substitute ="":"#CachedWeatherAstronomySunrise#"

[MeasureWeatherAstronomySunset]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=16
Substitute ="":"#CachedWeatherAstronomySunset#"

[MeasureWeatherGeoLat]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=17
Substitute ="":"#CachedWeatherGeoLat#"

[MeasureWeatherGeoLong]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=18
Substitute ="":"#CachedWeatherGeoLong#"

; ----------------------------------------- 

[MeasureWeatherConditionCode]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=19
Substitute ="#WeatherIconNames#", "":"#CachedWeatherConditionCode#"

[MeasureWeatherConditionTemp]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=20
Substitute ="":"#CachedWeatherConditionTemp#"

[MeasureWeatherConditionText]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=21
Substitute ="":"#CachedWeatherConditionText#"

; ----------------------------------------- 

[MeasureWeatherForecastDay0Code]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=22
Substitute ="#WeatherIconNames#", "":"#CachedWeatherForecastDay0Code#"

[MeasureWeatherForecastDay0Date]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=23
Substitute ="":"#CachedWeatherForecastDay0Date#"

[MeasureWeatherForecastDay0Day]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=24
Substitute ="":"#CachedWeatherForecastDay0Day#"

[MeasureWeatherForecastDay0High]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=25
Substitute ="":"#CachedWeatherForecastDay0High#"

[MeasureWeatherForecastDay0Low]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=26
Substitute ="":"#CachedWeatherForecastDay0Low#"

[MeasureWeatherForecastDay0Text]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=27
Substitute ="":"#CachedWeatherForecastDay0Text#"

; -----------------------------------------

[MeasureWeatherForecastDay1Code]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=28
Substitute ="#WeatherIconNames#", "":"#CachedWeatherForecastDay1Code#"

[MeasureWeatherForecastDay1Date]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=29
Substitute ="":"#CachedWeatherForecastDay1Date#"

[MeasureWeatherForecastDay1Day]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=30
Substitute ="":"#CachedWeatherForecastDay1Day#"

[MeasureWeatherForecastDay1High]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=31
Substitute ="":"#CachedWeatherForecastDay1High#"

[MeasureWeatherForecastDay1Low]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=32
Substitute ="":"#CachedWeatherForecastDay1Low#"

[MeasureWeatherForecastDay1Text]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=33
Substitute ="":"#CachedWeatherForecastDay1Text#"

; ----------------------------------------- 

[MeasureWeatherForecastDay2Code]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=34
Substitute ="#WeatherIconNames#", "":"#CachedWeatherForecastDay2Code#"

[MeasureWeatherForecastDay2Date]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=35
Substitute ="":"#CachedWeatherForecastDay2Date#"

[MeasureWeatherForecastDay2Day]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=36
Substitute ="":"#CachedWeatherForecastDay2Day#"

[MeasureWeatherForecastDay2High]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=37
Substitute ="":"#CachedWeatherForecastDay2High#"

[MeasureWeatherForecastDay2Low]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=38
Substitute ="":"#CachedWeatherForecastDay2Low#"

[MeasureWeatherForecastDay2Text]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=39
Substitute ="":"#CachedWeatherForecastDay2Text#"

;================================================

[MeasureWeatherForecastDay3Code]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=40
Substitute ="#WeatherIconNames#", "":"#CachedWeatherForecastDay3Code#"

[MeasureWeatherForecastDay3Date]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=41
Substitute ="":"#CachedWeatherForecastDay3Date#"

[MeasureWeatherForecastDay3Day]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=42
Substitute ="":"#CachedWeatherForecastDay3Day#"

[MeasureWeatherForecastDay3High]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=43
Substitute ="":"#CachedWeatherForecastDay3High#"

[MeasureWeatherForecastDay3Low]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=44
Substitute ="":"#CachedWeatherForecastDay3Low#"

[MeasureWeatherForecastDay3Text]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=45
Substitute ="":"#CachedWeatherForecastDay3Text#"

; ----------------------------------------- 

[MeasureWeatherForecastDay4Code]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=46
Substitute ="#WeatherIconNames#", "":"#CachedWeatherForecastDay4Code#"

[MeasureWeatherForecastDay4Date]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=47
Substitute ="":"#CachedWeatherForecastDay4Date#"

[MeasureWeatherForecastDay4Day]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=48
Substitute ="":"#CachedWeatherForecastDay4Day#"

[MeasureWeatherForecastDay4High]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=49
Substitute ="":"#CachedWeatherForecastDay4Day#"

[MeasureWeatherForecastDay4Low]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=50
Substitute ="":"#CachedWeatherForecastDay4Low#"

[MeasureWeatherForecastDay4Text]
Measure=WebParser
URL    =[MeasureWeather]

StringIndex=51
Substitute ="":"#CachedWeatherForecastDay4Text#"
