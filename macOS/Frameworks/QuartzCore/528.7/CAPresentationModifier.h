//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CAPresentationModifier : NSObject
{
    void *_impl;
    id _keyPath;
    id _value;
    int _l;
}

@property(getter=isEnabled) BOOL enabled;
@property(retain) id value;
- (struct Object *)CA_copyRenderValue;
- (id)debugDescription;
@property(readonly, copy) NSString *keyPath;
@property(readonly) BOOL additive;
- (void)dealloc;
- (id)init;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3;

@end

