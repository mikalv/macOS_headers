//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject
{
    NSArray *_payloadDescriptions;
    NSArray *_payloadContents;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *payloadContents; // @synthesize payloadContents=_payloadContents;
@property(copy, nonatomic) NSArray *payloadDescriptions; // @synthesize payloadDescriptions=_payloadDescriptions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

