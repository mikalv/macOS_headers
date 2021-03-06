//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject
{
    id <AMSBagDataSourceProtocol> _dataSource;
    NSString *_key;
    unsigned long long _valueType;
}

+ (BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)globalBagValueStorage;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
@property unsigned long long valueType; // @synthesize valueType=_valueType;
@property(retain) NSString *key; // @synthesize key=_key;
@property __weak id <AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)valuePromise;
- (id)valueWithError:(id *)arg1;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, getter=isLoaded) BOOL loaded;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;

@end

