//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPBookDetails : NSObject
{
    BOOL _isUpdatable;
    NSString *_version;
    NSString *_lastPublished;
}

@property(nonatomic) BOOL isUpdatable; // @synthesize isUpdatable=_isUpdatable;
@property(retain, nonatomic) NSString *lastPublished; // @synthesize lastPublished=_lastPublished;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithVersion:(id)arg1 lastPublished:(id)arg2 isUpdatable:(BOOL)arg3;

@end

