//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WeatherKit/NSObject-Protocol.h>

@class NSDateComponents;

@protocol WMWeatherStoreProtocol <NSObject>
- (void)currentConditionsForCoordinate:(CDStruct_2c43369c)arg1 result:(void (^)(WMWeatherData *))arg2;
- (void)currentHourlyForecastForCoordinate:(CDStruct_2c43369c)arg1 result:(void (^)(NSArray *))arg2;
- (void)currentDailyForecastForCoordinate:(CDStruct_2c43369c)arg1 result:(void (^)(NSArray *))arg2;
- (void)forecastForCoordinate:(CDStruct_2c43369c)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)historicalWeatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)almanacWeatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)weatherForCoordinate:(CDStruct_2c43369c)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
@end

