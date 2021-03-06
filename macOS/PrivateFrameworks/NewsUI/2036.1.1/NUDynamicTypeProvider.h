//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDynamicTypeProviding-Protocol.h>

@class NSHashTable, NSNotificationCenter, NSString;

@interface NUDynamicTypeProvider : NSObject <NUDynamicTypeProviding>
{
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
- (void)handleContentSizeCategoryChange:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)prefferedContentSizeCategory;
- (id)initWithNoticiationCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

