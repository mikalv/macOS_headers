//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCCKRecordFieldSchema : NSObject
{
    BOOL _isEncrypted;
    NSString *_name;
}

+ (id)fieldWithName:(id)arg1 isEncrypted:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithFieldName:(id)arg1 isEncrypted:(BOOL)arg2;
- (id)init;

@end

