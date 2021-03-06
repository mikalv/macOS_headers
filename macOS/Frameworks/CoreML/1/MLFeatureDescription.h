//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying>
{
    BOOL _optional;
    NSString *_name;
    long long _type;
    NSDictionary *_valueContraints;
    MLMultiArrayConstraint *_multiArrayConstraint;
    MLImageConstraint *_imageConstraint;
    MLDictionaryConstraint *_dictionaryConstraint;
}

+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 constraints:(id)arg4;
@property(retain, nonatomic) MLDictionaryConstraint *dictionaryConstraint; // @synthesize dictionaryConstraint=_dictionaryConstraint;
@property(retain, nonatomic) MLImageConstraint *imageConstraint; // @synthesize imageConstraint=_imageConstraint;
@property(retain, nonatomic) MLMultiArrayConstraint *multiArrayConstraint; // @synthesize multiArrayConstraint=_multiArrayConstraint;
@property(retain) NSDictionary *valueContraints; // @synthesize valueContraints=_valueContraints;
@property(readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)allowsValuesWithDescription:(id)arg1;
- (BOOL)isAllowedValue:(id)arg1 error:(id *)arg2;
- (BOOL)isAllowedValue:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 contraints:(id)arg4;
- (id)debugQuickLookObject;

@end

