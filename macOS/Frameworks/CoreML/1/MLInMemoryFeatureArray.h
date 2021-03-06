//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreML/MLFeatureArray.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSArray;

@interface MLInMemoryFeatureArray : MLFeatureArray <NSCopying>
{
    NSArray *_values;
}

+ (id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id *)arg3;
+ (id)featureArrayWithArray:(id)arg1 error:(id *)arg2;
+ (id)convertToFeatureValues:(id)arg1 ofType:(long long)arg2 error:(id *)arg3;
@property(readonly) NSArray *valueArray; // @synthesize valueArray=_values;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithFeatureValues:(id)arg1;

@end

