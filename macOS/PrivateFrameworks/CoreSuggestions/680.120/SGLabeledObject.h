//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

@class NSString;

@interface SGLabeledObject : SGObject
{
    NSString *_label;
    unsigned long long _extractionType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (BOOL)isEqualToLabeledObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3 origin:(id)arg4;
- (id)initWithLabel:(id)arg1 extractionType:(unsigned long long)arg2 recordId:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

